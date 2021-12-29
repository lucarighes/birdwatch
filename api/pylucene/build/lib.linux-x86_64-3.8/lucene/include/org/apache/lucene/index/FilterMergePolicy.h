#ifndef org_apache_lucene_index_FilterMergePolicy_H
#define org_apache_lucene_index_FilterMergePolicy_H

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
        class CodecReader;
        class MergeTrigger;
        class MergePolicy$MergeContext;
        class SegmentCommitInfo;
        class SegmentInfos;
      }
      namespace util {
        class IOSupplier;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FilterMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_b609897b5fb3e0bb,
            mid_findForcedDeletesMerges_a4b8e92c69858eaa,
            mid_findForcedMerges_7f23fa79bde67ff3,
            mid_findFullFlushMerges_ce0e45d4a26e56b1,
            mid_findMerges_ce0e45d4a26e56b1,
            mid_getMaxCFSSegmentSizeMB_8c74b787998ce4bc,
            mid_getNoCFSRatio_8c74b787998ce4bc,
            mid_keepFullyDeletedSegment_df61ce79f6884854,
            mid_numDeletesToMerge_38410daa12d7ee1e,
            mid_setMaxCFSSegmentSizeMB_3c435f10a3b1e038,
            mid_setNoCFSRatio_3c435f10a3b1e038,
            mid_toString_db9b55ba01e03e4b,
            mid_useCompoundFile_f4dd668fee1c81b8,
            mid_size_ad7dad42a292eb83,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterMergePolicy(const FilterMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          FilterMergePolicy(const ::org::apache::lucene::index::MergePolicy &);

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findFullFlushMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          jdouble getMaxCFSSegmentSizeMB() const;
          jdouble getNoCFSRatio() const;
          jboolean keepFullyDeletedSegment(const ::org::apache::lucene::util::IOSupplier &) const;
          jint numDeletesToMerge(const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::util::IOSupplier &) const;
          void setMaxCFSSegmentSizeMB(jdouble) const;
          void setNoCFSRatio(jdouble) const;
          ::java::lang::String toString() const;
          jboolean useCompoundFile(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::SegmentCommitInfo &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(FilterMergePolicy);
        extern PyTypeObject *PY_TYPE(FilterMergePolicy);

        class t_FilterMergePolicy {
        public:
          PyObject_HEAD
          FilterMergePolicy object;
          static PyObject *wrap_Object(const FilterMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
