#ifndef org_apache_lucene_index_TieredMergePolicy_H
#define org_apache_lucene_index_TieredMergePolicy_H

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
        class TieredMergePolicy;
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

        class TieredMergePolicy : public ::org::apache::lucene::index::MergePolicy {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_findForcedDeletesMerges_a4b8e92c69858eaa,
            mid_findForcedMerges_7f23fa79bde67ff3,
            mid_findMerges_ce0e45d4a26e56b1,
            mid_getDeletesPctAllowed_8c74b787998ce4bc,
            mid_getFloorSegmentMB_8c74b787998ce4bc,
            mid_getForceMergeDeletesPctAllowed_8c74b787998ce4bc,
            mid_getMaxMergeAtOnce_9972fcc56b44e79d,
            mid_getMaxMergeAtOnceExplicit_9972fcc56b44e79d,
            mid_getMaxMergedSegmentMB_8c74b787998ce4bc,
            mid_getSegmentsPerTier_8c74b787998ce4bc,
            mid_setDeletesPctAllowed_3c8aa5d95a1d3978,
            mid_setFloorSegmentMB_3c8aa5d95a1d3978,
            mid_setForceMergeDeletesPctAllowed_3c8aa5d95a1d3978,
            mid_setMaxMergeAtOnce_ac8920cf4ab713fd,
            mid_setMaxMergeAtOnceExplicit_ac8920cf4ab713fd,
            mid_setMaxMergedSegmentMB_3c8aa5d95a1d3978,
            mid_setSegmentsPerTier_3c8aa5d95a1d3978,
            mid_toString_db9b55ba01e03e4b,
            mid_score_4a4a20051827e2de,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TieredMergePolicy(jobject obj) : ::org::apache::lucene::index::MergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TieredMergePolicy(const TieredMergePolicy& obj) : ::org::apache::lucene::index::MergePolicy(obj) {}

          static jdouble DEFAULT_NO_CFS_RATIO;

          TieredMergePolicy();

          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedDeletesMerges(const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findForcedMerges(const ::org::apache::lucene::index::SegmentInfos &, jint, const ::java::util::Map &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          ::org::apache::lucene::index::MergePolicy$MergeSpecification findMerges(const ::org::apache::lucene::index::MergeTrigger &, const ::org::apache::lucene::index::SegmentInfos &, const ::org::apache::lucene::index::MergePolicy$MergeContext &) const;
          jdouble getDeletesPctAllowed() const;
          jdouble getFloorSegmentMB() const;
          jdouble getForceMergeDeletesPctAllowed() const;
          jint getMaxMergeAtOnce() const;
          jint getMaxMergeAtOnceExplicit() const;
          jdouble getMaxMergedSegmentMB() const;
          jdouble getSegmentsPerTier() const;
          TieredMergePolicy setDeletesPctAllowed(jdouble) const;
          TieredMergePolicy setFloorSegmentMB(jdouble) const;
          TieredMergePolicy setForceMergeDeletesPctAllowed(jdouble) const;
          TieredMergePolicy setMaxMergeAtOnce(jint) const;
          TieredMergePolicy setMaxMergeAtOnceExplicit(jint) const;
          TieredMergePolicy setMaxMergedSegmentMB(jdouble) const;
          TieredMergePolicy setSegmentsPerTier(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(TieredMergePolicy);
        extern PyTypeObject *PY_TYPE(TieredMergePolicy);

        class t_TieredMergePolicy {
        public:
          PyObject_HEAD
          TieredMergePolicy object;
          static PyObject *wrap_Object(const TieredMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
