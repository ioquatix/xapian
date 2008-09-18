/** @file chert_values.h
 * @brief ChertValueTable class
 */
/* Copyright (C) 2008 Olly Betts
 * Copyright (C) 2008 Lemur Consulting Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef XAPIAN_INCLUDED_CHERT_VALUES_H
#define XAPIAN_INCLUDED_CHERT_VALUES_H

#include "chert_chunkedlisttable.h"

#include "valuestats.h"

#include "xapian/types.h"

#include <map>
#include <string>

namespace Xapian {
    class Document;
}

struct ValueStats;

class ChertValueTable : public ChertChunkedListTable {
    /** The value number for the most recently used value statistics.
     *
     *  Set to Xapian::BAD_VALUENO if no value statistics are currently
     *  cached.
     */
    mutable Xapian::valueno mru_valno;

    /** The most recently used value statistics. */
    mutable ValueStats mru_valstats;

    std::map<Xapian::docid, std::string> slots;

    std::map<Xapian::valueno, std::map<Xapian::docid, std::string> > changes;

    void add_value(Xapian::docid did, Xapian::valueno slot, const string & val);

    void remove_value(Xapian::docid did, Xapian::valueno slot);

    Xapian::docid get_chunk_containing_did(Xapian::valueno slot,
					   Xapian::docid did,
					   string &chunk) const;

    /** Get the statistics for value slot @a slot. */
    void get_value_stats(Xapian::valueno slot) const;

    void get_value_stats(Xapian::valueno slot, ValueStats & stats) const;

  public:
    /** Create a new ChertValueTable object.
     *
     *  This method does not create or open the table on disk - you
     *  must call the create() or open() methods respectively!
     *
     *  @param dbdir	    The directory the chert database is stored in.
     *  @param readonly	    true if we're opening read-only, else false.
     */
    ChertValueTable(const std::string & dbdir, bool readonly)
	: ChertChunkedListTable("value", "/value.", dbdir, readonly,
				DONT_COMPRESS, true),
	  mru_valno(Xapian::BAD_VALUENO) { }

    // Merge in batched-up changes.
    void merge_changes();

    void add_document(Xapian::docid did, const Xapian::Document &doc,
		      std::map<Xapian::valueno, ValueStats> & value_stats);

    void delete_document(Xapian::docid did,
			 std::map<Xapian::valueno, ValueStats> & value_stats);

    void replace_document(Xapian::docid did, const Xapian::Document &doc,
			  std::map<Xapian::valueno, ValueStats> & value_stats);

    std::string get_value(Xapian::docid did, Xapian::valueno slot) const;

    void get_all_values(std::map<Xapian::valueno, std::string> & values,
			Xapian::docid did) const;

    Xapian::doccount get_value_freq(Xapian::valueno slot) const {
	if (mru_valno != slot) get_value_stats(slot);
	return mru_valstats.freq;
    }

    std::string get_value_lower_bound(Xapian::valueno slot) const {
	if (mru_valno != slot) get_value_stats(slot);
	return mru_valstats.lower_bound;
    }

    std::string get_value_upper_bound(Xapian::valueno slot) const {
	if (mru_valno != slot) get_value_stats(slot);
	return mru_valstats.upper_bound;
    }

    /** Write the updated statistics to the table.
     *
     *  If the @a freq member of the statistics for a particular slot is 0, the
     *  statistics for that slot will be cleared.
     *
     *  @param value_stats The statistics to set.
     */
    void set_value_stats(std::map<Xapian::valueno, ValueStats> & value_stats);

    /** Override methods of ChertTable.
     *
     *  NB: these aren't virtual, but we always call them on the subclass in
     *  cases where it matters.
     *  @{
     */

    bool open(chert_revision_number_t revision_) {
	/// Ignore any old cached valuestats if we're reopening.
	mru_valno = Xapian::BAD_VALUENO;
	return ChertTable::open(revision_);
    }

    bool is_modified() const {
	return !changes.empty() || ChertTable::is_modified();
    }

    void flush_db() {
	merge_changes();
	ChertTable::flush_db();
    }

    void cancel() {
	// Discard batched-up changes.
	slots.clear();
	changes.clear();

	ChertTable::cancel();
    }

    // @}
};

#endif // XAPIAN_INCLUDED_CHERT_VALUES_H