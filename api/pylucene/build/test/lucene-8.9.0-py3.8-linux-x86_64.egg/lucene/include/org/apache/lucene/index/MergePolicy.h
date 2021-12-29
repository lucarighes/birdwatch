#ifndef org_apache_lucene_index_MergePolicy_H
#define org_apache_lucene_index_MergePolicy_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
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

        class MergePolicy : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
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
            mid_useCompoundFile_f4dd668fee1c81b8,
            mid_verbose_6295e9a8b474782c,
            mid_segString_1a4fca4b8b9e1a1e,
            mid_isMerged_f4dd668fee1c81b8,
            mid_assertDelCount_62f94ba84ddd01fa,
            mid_size_ad7dad42a292eb83,
            mid_message_30f817844aa17268,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy(const MergePolicy& obj) : ::java::lang::Object(obj) {}

          MergePolicy();

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
        extern PyType_Def PY_TYPE_DEF(MergePolicy);
        extern PyTypeObject *PY_TYPE(MergePolicy);

        class t_MergePolicy {
        public:
          PyObject_HEAD
          MergePolicy object;
          static PyObject *wrap_Object(const MergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
