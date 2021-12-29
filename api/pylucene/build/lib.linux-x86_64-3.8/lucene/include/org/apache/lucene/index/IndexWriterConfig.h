#ifndef org_apache_lucene_index_IndexWriterConfig_H
#define org_apache_lucene_index_IndexWriterConfig_H

#include "org/apache/lucene/index/LiveIndexWriterConfig.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class Sort;
      }
      namespace index {
        class IndexWriter$IndexReaderWarmer;
        class IndexCommit;
        class MergePolicy;
        class LeafReader;
        class IndexWriterConfig;
        class IndexWriterConfig$OpenMode;
        class IndexDeletionPolicy;
        class MergeScheduler;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace util {
        class InfoStream;
      }
      namespace codecs {
        class Codec;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexWriterConfig : public ::org::apache::lucene::index::LiveIndexWriterConfig {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_651b708fb3f85e6e,
            mid_getAnalyzer_75a99b097bd64493,
            mid_getCodec_a302ebac25c26553,
            mid_getIndexCommit_4abaa8d830d8ecf1,
            mid_getIndexDeletionPolicy_625a1301ba76cda9,
            mid_getInfoStream_05a6766ae71db614,
            mid_getMaxBufferedDocs_9972fcc56b44e79d,
            mid_getMergePolicy_7169dd5a863dd2a6,
            mid_getMergeScheduler_5b8711e0a4a13251,
            mid_getMergedSegmentWarmer_ec20118a8af94b4b,
            mid_getOpenMode_0d3fdc98e044bb89,
            mid_getRAMBufferSizeMB_8c74b787998ce4bc,
            mid_getRAMPerThreadHardLimitMB_9972fcc56b44e79d,
            mid_getReaderPooling_8454bd5aa23fd11e,
            mid_getSimilarity_35e3c46e8ea97897,
            mid_setCheckPendingFlushUpdate_55d6c68515c37ca7,
            mid_setCodec_aa06151733ac6d4e,
            mid_setCommitOnClose_55d6c68515c37ca7,
            mid_setIndexCommit_d4c7f2d1a5e5016a,
            mid_setIndexCreatedVersionMajor_455e03c7ac3ddc31,
            mid_setIndexDeletionPolicy_bf4e8d3b27097e1f,
            mid_setIndexSort_76d1bdfb5c8d88b2,
            mid_setInfoStream_2249a75331ac1f9d,
            mid_setInfoStream_9df3cc2305ecb5d7,
            mid_setLeafSorter_db9ebbed99bd96b8,
            mid_setMaxBufferedDocs_455e03c7ac3ddc31,
            mid_setMaxFullFlushMergeWaitMillis_155c70cec97a15bb,
            mid_setMergePolicy_afc3d0981a5cd312,
            mid_setMergeScheduler_a8b9afbea5f71956,
            mid_setMergedSegmentWarmer_3470a9710b4c0809,
            mid_setOpenMode_85208b7651de5894,
            mid_setRAMBufferSizeMB_57e2dae80821a612,
            mid_setRAMPerThreadHardLimitMB_455e03c7ac3ddc31,
            mid_setReaderPooling_55d6c68515c37ca7,
            mid_setSimilarity_7ddbb4c0fd2c4ced,
            mid_setSoftDeletesField_c2c6f18454676a3a,
            mid_setUseCompoundFile_55d6c68515c37ca7,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriterConfig(jobject obj) : ::org::apache::lucene::index::LiveIndexWriterConfig(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexWriterConfig(const IndexWriterConfig& obj) : ::org::apache::lucene::index::LiveIndexWriterConfig(obj) {}

          static jboolean DEFAULT_COMMIT_ON_CLOSE;
          static jint DEFAULT_MAX_BUFFERED_DELETE_TERMS;
          static jint DEFAULT_MAX_BUFFERED_DOCS;
          static jlong DEFAULT_MAX_FULL_FLUSH_MERGE_WAIT_MILLIS;
          static jdouble DEFAULT_RAM_BUFFER_SIZE_MB;
          static jint DEFAULT_RAM_PER_THREAD_HARD_LIMIT_MB;
          static jboolean DEFAULT_READER_POOLING;
          static jboolean DEFAULT_USE_COMPOUND_FILE_SYSTEM;
          static jint DISABLE_AUTO_FLUSH;

          IndexWriterConfig();
          IndexWriterConfig(const ::org::apache::lucene::analysis::Analyzer &);

          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          ::org::apache::lucene::index::IndexDeletionPolicy getIndexDeletionPolicy() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          jint getMaxBufferedDocs() const;
          ::org::apache::lucene::index::MergePolicy getMergePolicy() const;
          ::org::apache::lucene::index::MergeScheduler getMergeScheduler() const;
          ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer getMergedSegmentWarmer() const;
          ::org::apache::lucene::index::IndexWriterConfig$OpenMode getOpenMode() const;
          jdouble getRAMBufferSizeMB() const;
          jint getRAMPerThreadHardLimitMB() const;
          jboolean getReaderPooling() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          IndexWriterConfig setCheckPendingFlushUpdate(jboolean) const;
          IndexWriterConfig setCodec(const ::org::apache::lucene::codecs::Codec &) const;
          IndexWriterConfig setCommitOnClose(jboolean) const;
          IndexWriterConfig setIndexCommit(const ::org::apache::lucene::index::IndexCommit &) const;
          IndexWriterConfig setIndexCreatedVersionMajor(jint) const;
          IndexWriterConfig setIndexDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &) const;
          IndexWriterConfig setIndexSort(const ::org::apache::lucene::search::Sort &) const;
          IndexWriterConfig setInfoStream(const ::java::io::PrintStream &) const;
          IndexWriterConfig setInfoStream(const ::org::apache::lucene::util::InfoStream &) const;
          IndexWriterConfig setLeafSorter(const ::java::util::Comparator &) const;
          IndexWriterConfig setMaxBufferedDocs(jint) const;
          IndexWriterConfig setMaxFullFlushMergeWaitMillis(jlong) const;
          IndexWriterConfig setMergePolicy(const ::org::apache::lucene::index::MergePolicy &) const;
          IndexWriterConfig setMergeScheduler(const ::org::apache::lucene::index::MergeScheduler &) const;
          IndexWriterConfig setMergedSegmentWarmer(const ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer &) const;
          IndexWriterConfig setOpenMode(const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &) const;
          IndexWriterConfig setRAMBufferSizeMB(jdouble) const;
          IndexWriterConfig setRAMPerThreadHardLimitMB(jint) const;
          IndexWriterConfig setReaderPooling(jboolean) const;
          IndexWriterConfig setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
          IndexWriterConfig setSoftDeletesField(const ::java::lang::String &) const;
          IndexWriterConfig setUseCompoundFile(jboolean) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexWriterConfig);
        extern PyTypeObject *PY_TYPE(IndexWriterConfig);

        class t_IndexWriterConfig {
        public:
          PyObject_HEAD
          IndexWriterConfig object;
          static PyObject *wrap_Object(const IndexWriterConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
