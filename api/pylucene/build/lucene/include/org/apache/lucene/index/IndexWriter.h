#ifndef org_apache_lucene_index_IndexWriter_H
#define org_apache_lucene_index_IndexWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class DirectoryReader;
        class TwoPhaseCommit;
        class CodecReader;
        class IndexWriterConfig;
        class Term;
        class MergePolicy$MergeContext;
        class IndexWriter$DocStats;
        class SegmentInfos;
        class LiveIndexWriterConfig;
        class IndexableField;
        class SegmentCommitInfo;
      }
      namespace search {
        class Query;
      }
      namespace util {
        class Accountable;
        class BytesRef;
        class InfoStream;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace document {
        class Field;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
    class Iterable;
    class Throwable;
  }
  namespace util {
    class Map$Entry;
    class Set;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3128376472d636d0,
            mid_addDocument_886e4657d40731cf,
            mid_addDocuments_886e4657d40731cf,
            mid_addIndexes_8f6d3487bd0416a3,
            mid_addIndexes_e529e8cc043bafc6,
            mid_advanceSegmentInfosVersion_9c778c9bce6694df,
            mid_close_f2cc1bce94666404,
            mid_commit_2e5ae9edcb9b072f,
            mid_decRefDeleter_3f9b7fbda4d2a096,
            mid_deleteAll_2e5ae9edcb9b072f,
            mid_deleteDocuments_ea4d83832bd2c65f,
            mid_deleteDocuments_dd02bee91ea029b0,
            mid_deleteUnusedFiles_f2cc1bce94666404,
            mid_flush_f2cc1bce94666404,
            mid_flushNextBuffer_8454bd5aa23fd11e,
            mid_forceMerge_040c4cd0390c5aff,
            mid_forceMerge_b8f283cdbda5c964,
            mid_forceMergeDeletes_f2cc1bce94666404,
            mid_forceMergeDeletes_9d72768e8fdce2b7,
            mid_getAnalyzer_75a99b097bd64493,
            mid_getConfig_d7414aca50eb2a40,
            mid_getDirectory_7452b086ce8219b2,
            mid_getDocStats_c986b54aabb70579,
            mid_getFieldNames_7dcf4034c6d1a92a,
            mid_getFlushingBytes_2e5ae9edcb9b072f,
            mid_getInfoStream_05a6766ae71db614,
            mid_getLiveCommitData_7a21c115c1b038aa,
            mid_getMaxCompletedSequenceNumber_2e5ae9edcb9b072f,
            mid_getMergingSegments_7dcf4034c6d1a92a,
            mid_getPendingNumDocs_2e5ae9edcb9b072f,
            mid_getReader_f2740abbecd1a98f,
            mid_getReader_dac5029fd8e538bb,
            mid_getTragicException_4d6e2861e0be5c10,
            mid_hasDeletions_8454bd5aa23fd11e,
            mid_hasPendingMerges_8454bd5aa23fd11e,
            mid_hasUncommittedChanges_8454bd5aa23fd11e,
            mid_incRefDeleter_3f9b7fbda4d2a096,
            mid_isOpen_8454bd5aa23fd11e,
            mid_maybeMerge_f2cc1bce94666404,
            mid_numDeletedDocs_a14757c1f6c5c9ec,
            mid_numDeletesToMerge_a14757c1f6c5c9ec,
            mid_numRamDocs_9972fcc56b44e79d,
            mid_onTragicEvent_787e2f59666235c5,
            mid_prepareCommit_2e5ae9edcb9b072f,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_rollback_f2cc1bce94666404,
            mid_setLiveCommitData_870d7079aa6e0153,
            mid_setLiveCommitData_3bfd7c24ea15c4f1,
            mid_softUpdateDocument_8753404127ccc7aa,
            mid_softUpdateDocuments_8753404127ccc7aa,
            mid_tryDeleteDocument_35f6327da08c6994,
            mid_tryUpdateDocValue_4201c90342c7fff0,
            mid_updateBinaryDocValue_aed0aeed624c551a,
            mid_updateDocValues_71557dfae811995e,
            mid_updateDocument_5937fc584cc14357,
            mid_updateDocuments_5937fc584cc14357,
            mid_updateNumericDocValue_caf04eb0a747d50d,
            mid_doAfterFlush_f2cc1bce94666404,
            mid_doBeforeFlush_f2cc1bce94666404,
            mid_mergeSuccess_b4144ef05f017168,
            mid_isEnableTestPoints_8454bd5aa23fd11e,
            mid_merge_b4144ef05f017168,
            mid_ensureOpen_9d72768e8fdce2b7,
            mid_ensureOpen_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexWriter(const IndexWriter& obj) : ::java::lang::Object(obj) {}

          static jint MAX_DOCS;
          static jint MAX_POSITION;
          static jint MAX_STORED_STRING_LENGTH;
          static jint MAX_TERM_LENGTH;
          static ::java::lang::String *SOURCE;
          static ::java::lang::String *SOURCE_ADDINDEXES_READERS;
          static ::java::lang::String *SOURCE_FLUSH;
          static ::java::lang::String *SOURCE_MERGE;
          static ::java::lang::String *WRITE_LOCK_NAME;

          IndexWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &);

          jlong addDocument(const ::java::lang::Iterable &) const;
          jlong addDocuments(const ::java::lang::Iterable &) const;
          jlong addIndexes(const JArray< ::org::apache::lucene::index::CodecReader > &) const;
          jlong addIndexes(const JArray< ::org::apache::lucene::store::Directory > &) const;
          void advanceSegmentInfosVersion(jlong) const;
          void close() const;
          jlong commit() const;
          void decRefDeleter(const ::org::apache::lucene::index::SegmentInfos &) const;
          jlong deleteAll() const;
          jlong deleteDocuments(const JArray< ::org::apache::lucene::index::Term > &) const;
          jlong deleteDocuments(const JArray< ::org::apache::lucene::search::Query > &) const;
          void deleteUnusedFiles() const;
          void flush() const;
          jboolean flushNextBuffer() const;
          void forceMerge(jint) const;
          void forceMerge(jint, jboolean) const;
          void forceMergeDeletes() const;
          void forceMergeDeletes(jboolean) const;
          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::index::LiveIndexWriterConfig getConfig() const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::org::apache::lucene::index::IndexWriter$DocStats getDocStats() const;
          ::java::util::Set getFieldNames() const;
          jlong getFlushingBytes() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          ::java::lang::Iterable getLiveCommitData() const;
          jlong getMaxCompletedSequenceNumber() const;
          ::java::util::Set getMergingSegments() const;
          jlong getPendingNumDocs() const;
          ::org::apache::lucene::index::DirectoryReader getReader() const;
          ::org::apache::lucene::index::DirectoryReader getReader(jboolean, jboolean) const;
          ::java::lang::Throwable getTragicException() const;
          jboolean hasDeletions() const;
          jboolean hasPendingMerges() const;
          jboolean hasUncommittedChanges() const;
          void incRefDeleter(const ::org::apache::lucene::index::SegmentInfos &) const;
          jboolean isOpen() const;
          void maybeMerge() const;
          jint numDeletedDocs(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jint numDeletesToMerge(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jint numRamDocs() const;
          void onTragicEvent(const ::java::lang::Throwable &, const ::java::lang::String &) const;
          jlong prepareCommit() const;
          jlong ramBytesUsed() const;
          void rollback() const;
          void setLiveCommitData(const ::java::lang::Iterable &) const;
          void setLiveCommitData(const ::java::lang::Iterable &, jboolean) const;
          jlong softUpdateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong softUpdateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong tryDeleteDocument(const ::org::apache::lucene::index::IndexReader &, jint) const;
          jlong tryUpdateDocValue(const ::org::apache::lucene::index::IndexReader &, jint, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong updateBinaryDocValue(const ::org::apache::lucene::index::Term &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &) const;
          jlong updateDocValues(const ::org::apache::lucene::index::Term &, const JArray< ::org::apache::lucene::document::Field > &) const;
          jlong updateDocument(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          jlong updateDocuments(const ::org::apache::lucene::index::Term &, const ::java::lang::Iterable &) const;
          jlong updateNumericDocValue(const ::org::apache::lucene::index::Term &, const ::java::lang::String &, jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexWriter);
        extern PyTypeObject *PY_TYPE(IndexWriter);

        class t_IndexWriter {
        public:
          PyObject_HEAD
          IndexWriter object;
          static PyObject *wrap_Object(const IndexWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
