#ifndef org_apache_lucene_index_LiveIndexWriterConfig_H
#define org_apache_lucene_index_LiveIndexWriterConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LiveIndexWriterConfig;
        class IndexWriter$IndexReaderWarmer;
        class IndexCommit;
        class MergePolicy;
        class LeafReader;
        class IndexWriterConfig$OpenMode;
        class IndexDeletionPolicy;
        class MergeScheduler;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class Sort;
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
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LiveIndexWriterConfig : public ::java::lang::Object {
         public:
          enum {
            mid_getAnalyzer_75a99b097bd64493,
            mid_getCodec_a302ebac25c26553,
            mid_getCommitOnClose_8454bd5aa23fd11e,
            mid_getIndexCommit_4abaa8d830d8ecf1,
            mid_getIndexCreatedVersionMajor_9972fcc56b44e79d,
            mid_getIndexDeletionPolicy_625a1301ba76cda9,
            mid_getIndexSort_f58d0196b42aaee4,
            mid_getIndexSortFields_7dcf4034c6d1a92a,
            mid_getInfoStream_05a6766ae71db614,
            mid_getLeafSorter_beb0414e0ec1de00,
            mid_getMaxBufferedDocs_9972fcc56b44e79d,
            mid_getMaxFullFlushMergeWaitMillis_2e5ae9edcb9b072f,
            mid_getMergePolicy_7169dd5a863dd2a6,
            mid_getMergeScheduler_5b8711e0a4a13251,
            mid_getMergedSegmentWarmer_ec20118a8af94b4b,
            mid_getOpenMode_0d3fdc98e044bb89,
            mid_getRAMBufferSizeMB_8c74b787998ce4bc,
            mid_getRAMPerThreadHardLimitMB_9972fcc56b44e79d,
            mid_getReaderPooling_8454bd5aa23fd11e,
            mid_getSimilarity_35e3c46e8ea97897,
            mid_getSoftDeletesField_db9b55ba01e03e4b,
            mid_getUseCompoundFile_8454bd5aa23fd11e,
            mid_isCheckPendingFlushOnUpdate_8454bd5aa23fd11e,
            mid_setCheckPendingFlushUpdate_1cdee334d24391e1,
            mid_setMaxBufferedDocs_9186928ca837d49b,
            mid_setMergePolicy_41adb590d7054121,
            mid_setMergedSegmentWarmer_08367819d772a219,
            mid_setRAMBufferSizeMB_211daae2a264b809,
            mid_setUseCompoundFile_1cdee334d24391e1,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LiveIndexWriterConfig(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LiveIndexWriterConfig(const LiveIndexWriterConfig& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          jboolean getCommitOnClose() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jint getIndexCreatedVersionMajor() const;
          ::org::apache::lucene::index::IndexDeletionPolicy getIndexDeletionPolicy() const;
          ::org::apache::lucene::search::Sort getIndexSort() const;
          ::java::util::Set getIndexSortFields() const;
          ::org::apache::lucene::util::InfoStream getInfoStream() const;
          ::java::util::Comparator getLeafSorter() const;
          jint getMaxBufferedDocs() const;
          jlong getMaxFullFlushMergeWaitMillis() const;
          ::org::apache::lucene::index::MergePolicy getMergePolicy() const;
          ::org::apache::lucene::index::MergeScheduler getMergeScheduler() const;
          ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer getMergedSegmentWarmer() const;
          ::org::apache::lucene::index::IndexWriterConfig$OpenMode getOpenMode() const;
          jdouble getRAMBufferSizeMB() const;
          jint getRAMPerThreadHardLimitMB() const;
          jboolean getReaderPooling() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          ::java::lang::String getSoftDeletesField() const;
          jboolean getUseCompoundFile() const;
          jboolean isCheckPendingFlushOnUpdate() const;
          LiveIndexWriterConfig setCheckPendingFlushUpdate(jboolean) const;
          LiveIndexWriterConfig setMaxBufferedDocs(jint) const;
          LiveIndexWriterConfig setMergePolicy(const ::org::apache::lucene::index::MergePolicy &) const;
          LiveIndexWriterConfig setMergedSegmentWarmer(const ::org::apache::lucene::index::IndexWriter$IndexReaderWarmer &) const;
          LiveIndexWriterConfig setRAMBufferSizeMB(jdouble) const;
          LiveIndexWriterConfig setUseCompoundFile(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(LiveIndexWriterConfig);
        extern PyTypeObject *PY_TYPE(LiveIndexWriterConfig);

        class t_LiveIndexWriterConfig {
        public:
          PyObject_HEAD
          LiveIndexWriterConfig object;
          static PyObject *wrap_Object(const LiveIndexWriterConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
