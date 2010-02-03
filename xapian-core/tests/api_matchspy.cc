/** @file api_matchspy.cc
 * @brief tests of MatchSpy usage
 */
/* Copyright 2007,2009 Lemur Consulting Ltd
 * Copyright 2009 Olly Betts
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301
 * USA
 */

#include <config.h>

#include "api_matchspy.h"

#include <xapian.h>

#include "str.h"
#include <cmath>
#include <map>
#include <vector>

#include "backendmanager.h"
#include "testsuite.h"
#include "testutils.h"
#include "apitest.h"

using namespace std;

// #######################################################################
// # Tests start here

class SimpleMatchSpy : public Xapian::MatchSpy {
  public:
    // Vector which will be filled with all the document contents seen.
    std::vector<std::string> seen;

    void operator()(const Xapian::Document &doc,
		    Xapian::weight) {
	// Note that this is not recommended usage of get_data() - you
	// generally shouldn't call get_data() from inside a MatchSpy, because
	// it is (likely to be) a slow operation resulting in considerable IO.
	seen.push_back(doc.get_data());
    }
};

// Basic test of a matchspy.
DEFINE_TESTCASE(matchspy1, backend && !remote) {
    Xapian::Database db(get_database("apitest_simpledata"));
    Xapian::Enquire enquire(db);
    enquire.set_query(Xapian::Query("this"));

    SimpleMatchSpy myspy;

    Xapian::MSet nospymset = enquire.get_mset(0, 100);
    enquire.add_matchspy(&myspy);
    Xapian::MSet spymset = enquire.get_mset(0, 100);

    // Check that the match estimates aren't affected by the matchspy.
    TEST_EQUAL(nospymset, spymset);

    vector<bool> docid_checked(db.get_lastdocid());

    // Check that we get the expected number of matches, and that the stored
    // document contents are right.
    Xapian::MSetIterator i = spymset.begin();
    TEST(i != spymset.end());
    TEST_EQUAL(spymset.size(), 6);
    TEST_EQUAL(myspy.seen.size(), spymset.size());

    std::sort(myspy.seen.begin(), myspy.seen.end());

    std::vector<std::string> seen2;
    for ( ; i != spymset.end(); ++i) {
	const Xapian::Document doc(i.get_document());
	seen2.push_back(doc.get_data());
    }
    std::sort(seen2.begin(), seen2.end());

    TEST_EQUAL(myspy.seen.size(), seen2.size());
    std::vector<std::string>::const_iterator j = myspy.seen.begin();
    std::vector<std::string>::const_iterator j2 = seen2.begin();
    for (; j != myspy.seen.end(); ++j, ++j2) {
	TEST_EQUAL(*j, *j2);
    }

    return true;
}

static string values_to_repr(const map<string, Xapian::doccount> & cat) {
    string resultrepr("|");
    map<string, Xapian::doccount>::const_iterator i;
    for (i = cat.begin(); i != cat.end(); ++i) {
	resultrepr += i->first;
	resultrepr += ':';
	resultrepr += str(i->second);
	resultrepr += '|';
    }
    return resultrepr;
}

DEFINE_TESTCASE(matchspy2, writable)
{
    if (get_dbtype() == "remotetcp" || get_dbtype() == "remoteprog") {
	SKIP_TEST("Test not supported for remote backend");
    }

    Xapian::WritableDatabase db = get_writable_database();
    for (int c = 1; c <= 25; ++c) {
	Xapian::Document doc;
	doc.set_data("Document " + str(c));
	int factors = 0;
	for (int factor = 1; factor <= c; ++factor) {
	    doc.add_term("all");
	    if (c % factor == 0) {
		doc.add_term("XFACT" + str(factor));
		++factors;
	    }
	}

	// Number of factors.
	doc.add_value(0, str(factors));
	// Units digits.
	doc.add_value(1, str(c % 10));
	// Constant.
	doc.add_value(2, "fish");
	// Number of digits.
	doc.add_value(3, str(str(c).size()));

	db.add_document(doc);
    }

    Xapian::ValueCountMatchSpy spy0(0);
    Xapian::ValueCountMatchSpy spy1(1);
    Xapian::ValueCountMatchSpy spy3(3);

    Xapian::Enquire enq(db);

    enq.set_query(Xapian::Query("all"));

    enq.add_matchspy(&spy0);
    enq.add_matchspy(&spy1);
    enq.add_matchspy(&spy3);
    Xapian::MSet mset = enq.get_mset(0, 10);

    TEST_EQUAL(spy0.get_total(), 25);
    TEST_EQUAL(spy1.get_total(), 25);
    TEST_EQUAL(spy3.get_total(), 25);

    static const char * results[] = {
	"|1:1|2:9|3:3|4:7|5:1|6:3|8:1|",
	"|0:2|1:3|2:3|3:3|4:3|5:3|6:2|7:2|8:2|9:2|",
	"|1:9|2:16|",
    };
    TEST_STRINGS_EQUAL(values_to_repr(spy0.get_values()), results[0]);
    TEST_STRINGS_EQUAL(values_to_repr(spy1.get_values()), results[1]);
    TEST_STRINGS_EQUAL(values_to_repr(spy3.get_values()), results[2]);
		       
    return true;
}

DEFINE_TESTCASE(matchspy4, writable)
{
    if (get_dbtype() == "remotetcp" || get_dbtype() == "remoteprog") {
	SKIP_TEST("Test not supported for remote backend");
    }

    Xapian::WritableDatabase db = get_writable_database();
    for (int c = 1; c <= 25; ++c) {
	Xapian::Document doc;
	doc.set_data("Document " + str(c));
	int factors = 0;
	for (int factor = 1; factor <= c; ++factor) {
	    doc.add_term("all");
	    if (c % factor == 0) {
		doc.add_term("XFACT" + str(factor));
		++factors;
	    }
	}

	// Number of factors.
	doc.add_value(0, str(factors));
	// Units digits.
	doc.add_value(1, str(c % 10));
	// Constant.
	doc.add_value(2, "fish");
	// Number of digits.
	doc.add_value(3, str(str(c).size()));

	db.add_document(doc);
    }

    // We're going to run the match twice - once sorted by relevance, and once
    // sorted by a value.  This is a regression test - the matcher used to fail
    // to show some documents to the spy when sorting by non-pure-relevance.
    Xapian::ValueCountMatchSpy spya0(0);
    Xapian::ValueCountMatchSpy spya1(1);
    Xapian::ValueCountMatchSpy spya3(3);
    Xapian::ValueCountMatchSpy spyb0(0);
    Xapian::ValueCountMatchSpy spyb1(1);
    Xapian::ValueCountMatchSpy spyb3(3);

    Xapian::Enquire enqa(db);
    Xapian::Enquire enqb(db);

    enqa.set_query(Xapian::Query("all"));
    enqb.set_query(Xapian::Query("all"));

    enqa.add_matchspy(&spya0);
    enqa.add_matchspy(&spya1);
    enqa.add_matchspy(&spya3);
    enqb.add_matchspy(&spyb0);
    enqb.add_matchspy(&spyb1);
    enqb.add_matchspy(&spyb3);

    Xapian::MSet mseta = enqa.get_mset(0, 10);
    enqb.set_sort_by_value(0, false);
    Xapian::MSet msetb = enqb.get_mset(0, 10, 100);

    TEST_EQUAL(spya0.get_total(), 25);
    TEST_EQUAL(spya1.get_total(), 25);
    TEST_EQUAL(spya3.get_total(), 25);
    TEST_EQUAL(spyb0.get_total(), 25);
    TEST_EQUAL(spyb1.get_total(), 25);
    TEST_EQUAL(spyb3.get_total(), 25);

    static const char * results[] = {
	"|2:9|4:7|3:3|6:3|1:1|5:1|8:1|",
	"|1:3|2:3|3:3|4:3|5:3|0:2|6:2|7:2|8:2|9:2|",
	"|",
	"|2:16|1:9|",
	"|2:9|4:7|3:3|6:3|1:1|5:1|8:1|",
	"|1:3|2:3|3:3|4:3|5:3|0:2|6:2|7:2|8:2|9:2|",
	"|",
	"|2:16|1:9|",
	NULL
    };
    std::vector<Xapian::ValueCountMatchSpy *> spies;
    spies.push_back(&spya0);
    spies.push_back(&spya1);
    spies.push_back(NULL);
    spies.push_back(&spya3);
    spies.push_back(&spyb0);
    spies.push_back(&spyb1);
    spies.push_back(NULL);
    spies.push_back(&spyb3);
    for (Xapian::valueno v = 0; results[v]; ++v) {
	tout << "value " << v << endl;
	std::vector<Xapian::StringAndFrequency> allvals;

	Xapian::ValueCountMatchSpy * spy = spies[v];
	if (spy != NULL)
	    spy->get_top_values(allvals, 100);
	string allvals_str("|");
	for (size_t i = 0; i < allvals.size(); ++i) {
	    allvals_str += allvals[i].get_string();
	    allvals_str += ':';
	    allvals_str += str(allvals[i].get_frequency());
	    allvals_str += '|';
	}
	tout << allvals_str << endl;
	TEST_STRINGS_EQUAL(allvals_str, results[v]);

	std::vector<Xapian::StringAndFrequency> vals;
	for (size_t i = 0; i < allvals.size(); ++i) {
	    tout << "i " << i << endl;
	    if (spy != NULL)
		spy->get_top_values(vals, i);
	    for (size_t j = 0; j < vals.size(); j++) {
		tout << "j " << j << endl;
		TEST_EQUAL(vals[j].get_string(), allvals[j].get_string());
		TEST_EQUAL(vals[j].get_frequency(), allvals[j].get_frequency());
	    }
	}
    }

    return true;
}

// Test builtin match spies
DEFINE_TESTCASE(matchspy5, backend)
{
    Xapian::Database db(get_database("apitest_simpledata"));
    Xapian::Enquire enquire(db);
    enquire.set_query(Xapian::Query("this"));

    Xapian::ValueCountMatchSpy myspy1(1);
    Xapian::ValueCountMatchSpy myspy2(1);

    enquire.add_matchspy(&myspy1);
    enquire.add_matchspy(&myspy2);
    Xapian::MSet mymset = enquire.get_mset(0, 100);
    TEST_EQUAL(mymset.size(), 6);

    const std::map<std::string, Xapian::doccount> & vals1 = myspy1.get_values();
    const std::map<std::string, Xapian::doccount> & vals2 = myspy2.get_values();

    TEST_EQUAL(vals1.size(), 2);
    TEST(vals1.find("h") != vals1.end());
    TEST(vals1.find("n") != vals1.end());
    TEST_EQUAL(vals1.find("h")->second, 5);
    TEST_EQUAL(vals1.find("n")->second, 1);

    TEST_EQUAL(vals2.size(), 2);
    TEST(vals2.find("h") != vals2.end());
    TEST(vals2.find("n") != vals2.end());
    TEST_EQUAL(vals2.find("h")->second, 5);
    TEST_EQUAL(vals2.find("n")->second, 1);

    return true;
}

class MySpy : public Xapian::MatchSpy {
    void operator()(const Xapian::Document &, Xapian::weight) {
    }
};

// Test exceptions from matchspy base class, and get_description method.
DEFINE_TESTCASE(matchspy6, !backend)
{
    MySpy spy;

    TEST_EXCEPTION(Xapian::UnimplementedError, spy.clone());
    TEST_EXCEPTION(Xapian::UnimplementedError, spy.name());
    TEST_EXCEPTION(Xapian::UnimplementedError, spy.serialise());
    TEST_EXCEPTION(Xapian::UnimplementedError,
		   spy.unserialise(std::string(), Xapian::Registry()));
    TEST_EXCEPTION(Xapian::UnimplementedError, spy.serialise_results());
    TEST_EXCEPTION(Xapian::UnimplementedError,
		   spy.merge_results(std::string()));
    TEST_EQUAL(spy.get_description(), "Xapian::MatchSpy()");

    return true;
}