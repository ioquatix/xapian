/* DO NOT EDIT THIS FILE - it is machine generated */
#ifndef _Included_org_xapian_XapianJNI
#define _Included_org_xapian_XapianJNI

#include <jni.h>
/* Header for class org_xapian_XapianJNI */

#ifdef __cplusplus
extern "C" {
#endif
#undef org_xapian_XapianJNI_DB_CREATE_OR_OPEN
#define org_xapian_XapianJNI_DB_CREATE_OR_OPEN 1L
#undef org_xapian_XapianJNI_DB_CREATE
#define org_xapian_XapianJNI_DB_CREATE 2L
#undef org_xapian_XapianJNI_DB_CREATE_OR_OVERWRITE
#define org_xapian_XapianJNI_DB_CREATE_OR_OVERWRITE 3L
#undef org_xapian_XapianJNI_DB_OPEN
#define org_xapian_XapianJNI_DB_OPEN 4L
/*
 * Class:     org_xapian_XapianJNI
 * Method:    auto_open
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_auto_1open__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    auto_open
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_auto_1open__Ljava_lang_String_2I
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    auto_open_stub
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_auto_1open_1stub
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    inmemory_open
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_inmemory_1open
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    quartz_open
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_quartz_1open__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    quartz_open
 * Signature: (Ljava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_quartz_1open__Ljava_lang_String_2II
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    remote_open
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_remote_1open__Ljava_lang_String_2Ljava_lang_String_2I
  (JNIEnv *, jclass, jstring, jstring, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    remote_open
 * Signature: (Ljava/lang/String;III)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_remote_1open__Ljava_lang_String_2III
  (JNIEnv *, jclass, jstring, jint, jint, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1new__
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_new
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1new__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_new
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1new__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_add_database
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_database_1add_1database
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_reopen
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_database_1reopen
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_database_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_postlist_begin
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1postlist_1begin
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_postlist_end
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1postlist_1end
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_termlist_begin
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1termlist_1begin
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_termlist_end
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1termlist_1end
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_positionlist_begin
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1positionlist_1begin
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_positionlist_end
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1positionlist_1end
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_allterms_begin
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1allterms_1begin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_allterms_end
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1allterms_1end
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_get_doccount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_database_1get_1doccount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_get_lastdocid
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1get_1lastdocid
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_get_avlength
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_xapian_XapianJNI_database_1get_1avlength
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_get_termfreq
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_database_1get_1termfreq
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_term_exists
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_database_1term_1exists
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_get_collection_freq
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_database_1get_1collection_1freq
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_get_doclength
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_org_xapian_XapianJNI_database_1get_1doclength
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_keep_alive
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_database_1keep_1alive
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_get_document
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_database_1get_1document
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    database_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_database_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_writabledatabase_1new__
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_new
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_writabledatabase_1new__Ljava_lang_String_2I
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_flush
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_writabledatabase_1flush
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_begin_transaction
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_writabledatabase_1begin_1transaction
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_commit_transaction
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_writabledatabase_1commit_1transaction
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_cancel_transaction
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_writabledatabase_1cancel_1transaction
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_add_document
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_writabledatabase_1add_1document
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_delete_document
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_writabledatabase_1delete_1document
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_replace_document
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_writabledatabase_1replace_1document
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_writabledatabase_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    writabledatabase_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_writabledatabase_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_document_1new__
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_new
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_document_1new__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    docment_get_value
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_docment_1get_1value
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_add_value
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1add_1value
  (JNIEnv *, jclass, jlong, jint, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_remove_value
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1remove_1value
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_clear_values
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1clear_1values
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_get_data
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_document_1get_1data
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_set_data
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1set_1data
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_add_posting
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1add_1posting
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_add_term
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1add_1term
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_remove_posting
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1remove_1posting
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_remove_term
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1remove_1term
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_clear_terms
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1clear_1terms
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_termlist_count
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_document_1termlist_1count
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_values_count
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_document_1values_1count
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_document_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    document_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_document_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_convert_to_percent
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_mset_1convert_1to_1percent__JJ
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_convert_to_percent
 * Signature: (JD)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_mset_1convert_1to_1percent__JD
  (JNIEnv *, jclass, jlong, jdouble);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_get_termfreq
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_mset_1get_1termfreq
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_get_termweight
 * Signature: (JLjava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_org_xapian_XapianJNI_mset_1get_1termweight
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_get_firstitem
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_mset_1get_1firstitem
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_get_matches_lower_bound
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_mset_1get_1matches_1lower_1bound
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_get_matches_estimated
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_mset_1get_1matches_1estimated
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_get_matches_upper_bound
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_mset_1get_1matches_1upper_1bound
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_get_max_possible
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_xapian_XapianJNI_mset_1get_1max_1possible
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_get_max_attained
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_xapian_XapianJNI_mset_1get_1max_1attained
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_size
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_mset_1size
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_empty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_mset_1empty
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_begin
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_mset_1begin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_end
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_mset_1end
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_back
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_mset_1back
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_element
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_mset_1element
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_mset_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    mset_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_mset_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_get_document
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_msetiterator_1get_1document
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_get_rank
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_msetiterator_1get_1rank
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_get_weight
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_xapian_XapianJNI_msetiterator_1get_1weight
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_get_collapse_count
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_msetiterator_1get_1collapse_1count
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_get_percent
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_msetiterator_1get_1percent
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_msetiterator_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_next
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_msetiterator_1next
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_get_db_docid
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_msetiterator_1get_1db_1docid
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_equals
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_msetiterator_1equals
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    msetiterator_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_msetiterator_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_next
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_termiterator_1next
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_get_termname
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_termiterator_1get_1termname
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_get_term_freq
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_xapian_XapianJNI_termiterator_1get_1term_1freq
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_get_wdf
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_termiterator_1get_1wdf
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_skip_to
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_termiterator_1skip_1to
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_termiterator_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_positionlist_begin
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_termiterator_1positionlist_1begin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_positionlist_end
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_termiterator_1positionlist_1end
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_equals
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_termiterator_1equals
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    termiterator_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_termiterator_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1new__
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_new
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1new__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_new
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1new__Ljava_lang_String_2I
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_new
 * Signature: (Ljava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1new__Ljava_lang_String_2II
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_new
 * Signature: (IJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1new__IJJ
  (JNIEnv *, jclass, jint, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_new
 * Signature: (ILjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1new__ILjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jclass, jint, jstring, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_new
 * Signature: (I[Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1new__I_3Ljava_lang_String_2
  (JNIEnv *, jclass, jint, jobjectArray);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_new
 * Signature: (I[J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1new__I_3J
  (JNIEnv *, jclass, jint, jlongArray);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_query_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_empty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_query_1empty
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_is_empty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_query_1is_1empty
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_terms_begin
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1terms_1begin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_terms_end
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1terms_1end
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_get_length
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_query_1get_1length
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    query_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_query_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_new
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_enquire_1new
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_set_query
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_enquire_1set_1query
  (JNIEnv *, jclass, jlong, jlong, jint);

// We implement get_query in Java and don't use JNI or C++ at all for it.
#if 0
/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_get_query
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_enquire_1get_1query
  (JNIEnv *, jclass, jlong);
#endif

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_set_collapse_key
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_enquire_1set_1collapse_1key
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_set_sort_forward
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_enquire_1set_1sort_1forward
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_set_cutoff
 * Signature: (JID)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_enquire_1set_1cutoff
  (JNIEnv *, jclass, jlong, jint, jdouble);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_set_sorting
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_enquire_1set_1sorting
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_get_mset
 * Signature: (JJJJLorg/xapian/MatchDecider;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_enquire_1get_1mset
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jobject);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_get_eset
 * Signature: (JJJIDLorg/xapian/ExpandDecider;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_enquire_1get_1eset__JJJIDLorg_xapian_ExpandDecider_2
  (JNIEnv *, jclass, jlong, jlong, jlong, jint, jdouble, jobject);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_get_eset
 * Signature: (JJJLorg/xapian/ExpandDecider;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_enquire_1get_1eset__JJJLorg_xapian_ExpandDecider_2
  (JNIEnv *, jclass, jlong, jlong, jlong, jobject);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_get_matching_terms_begin
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_enquire_1get_1matching_1terms_1begin
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_get_matching_terms_end
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_enquire_1get_1matching_1terms_1end
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_get_matching_terms_begin_by_msetiterator
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_enquire_1get_1matching_1terms_1begin_1by_1msetiterator
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_get_matching_terms_end_by_msetiterator
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_enquire_1get_1matching_1terms_1end_1by_1msetiterator
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_enquire_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    enquire_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_enquire_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_rset_1new
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_rset_1size
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_empty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_rset_1empty
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_add_document
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_rset_1add_1document
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_add_document_via_msetiterator
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_rset_1add_1document_1via_1msetiterator
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_remove_document
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_rset_1remove_1document
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_remove_document_via_msetiterator
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_rset_1remove_1document_1via_1msetiterator
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_contains
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_rset_1contains
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_contains_via_msetiterator
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_rset_1contains_1via_1msetiterator
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_rset_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    rset_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_rset_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    eset_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_eset_1new
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    eset_get_ebound
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_eset_1get_1ebound
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    eset_size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_eset_1size
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    eset_empty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_eset_1empty
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    eset_begin
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_eset_1begin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    eset_end
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_eset_1end
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    eset_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_eset_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    eset_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_eset_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    esetiterator_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_esetiterator_1new
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    esetiterator_next
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_esetiterator_1next
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    esetiterator_equals
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_esetiterator_1equals
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    esetiterator_get
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_esetiterator_1get
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    esetiterator_get_weight
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_xapian_XapianJNI_esetiterator_1get_1weight
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    esetiterator_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_esetiterator_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    esetiterator_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_esetiterator_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    stem_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_stem_1new__
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    stem_new
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_stem_1new__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    stem_stem_word
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_stem_1stem_1word
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    stem_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_stem_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    stem_get_available_languages
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_stem_1get_1available_1languages
  (JNIEnv *, jclass);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    stem_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_stem_1finalize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    positioniterator_getvalue
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xapian_XapianJNI_positioniterator_1getvalue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    positioniterator_next
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_positioniterator_1next
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    positioniterator_equals
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xapian_XapianJNI_positioniterator_1equals
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    positioniterator_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_xapian_XapianJNI_positioniterator_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xapian_XapianJNI
 * Method:    positioniterator_finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_xapian_XapianJNI_positioniterator_1finalize
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
