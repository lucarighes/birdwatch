#ifndef org_apache_lucene_index_LogMergePolicy_H
#define org_apache_lucene_index_LogMergePolicy_H

#include "org/apache/lucene/index/MergePolicy.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
    class Boolean;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$MergeSpecification;
        class MergeTrigger;
        class MergePolicy$MergeContext;
        class SegmentCommitInfo;
        class SegmentInfos;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LogMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_findForcedDeletesMerges_a4b8e92c69858eaa,
            mid_findForcedMerges_7f23fa79bde67ff3,
            mid_findMerges_ce0e45d4a26e56b1,
            mid_getCalibrateSizeByDeletes_8454bd5aa23fd11e,
            mid_getMaxMergeDocs_9972fcc56b44e79d,
            mid_getMergeFactor_9972fcc56b44e79d,
            mid_setCalibrateSizeByDeletes_9d72768e8fdce2b7,
            mid_setMaxMergeDocs_040c4cd0390c5aff,
            mid_setMergeFactor_040c4cd0390c5aff,
            mid_toString_db9b55ba01e03e4b,
            mid_sizeDocs_ad7dad42a292eb83,
            mid_sizeBytes_ad7dad42a292eb83,
            mid_isMerged_ad9b3d30839f25fc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LogMergePolicy(const LogMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static jint DEFAULT_MAX_MERGE_DOCS;
          static jint DEFAULT_MERGE_FACTOR;
          static jdouble DEFAULT_NO_CFS_RATIO;
          static jdouble LEVEL_LOG_SPAN;

          LogMergePolicy();

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          jboolean getCalibrateSizeByDeletes() const;
          jint getMaxMergeDocs() const;
          jint getMergeFactor() const;
          void setCalibrateSizeByDeletes(jboolean) const;
          void setMaxMergeDocs(jint) const;
          void setMergeFactor(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(LogMergePolicy);
        extern PyTypeObject *PY_TYPE(LogMergePolicy);

        class t_LogMergePolicy {
        public:
          PyObject_HEAD
          LogMergePolicy object;
          static PyObject *wrap_Object(const LogMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
