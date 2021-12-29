#ifndef org_apache_lucene_util_bkd_BKDReader_H
#define org_apache_lucene_util_bkd_BKDReader_H

#include "org/apache/lucene/index/PointValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$IntersectVisitor;
      }
      namespace store {
        class IndexInput;
      }
      namespace util {
        namespace bkd {
          class BKDReader$IntersectState;
          class BKDReader$IndexTree;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDReader : public ::org::apache::lucene::index::PointValues {
           public:
            enum {
              mid_init$_1a5d98264aabb7b4,
              mid_estimatePointCount_c36ecfcc70f1a802,
              mid_getBytesPerDimension_9972fcc56b44e79d,
              mid_getDocCount_9972fcc56b44e79d,
              mid_getIntersectState_f2834e2ca4654669,
              mid_getMaxPackedValue_cf386cdb1bbd339f,
              mid_getMinPackedValue_cf386cdb1bbd339f,
              mid_getNumDimensions_9972fcc56b44e79d,
              mid_getNumIndexDimensions_9972fcc56b44e79d,
              mid_intersect_9cdd639f530ebf3c,
              mid_isLeafNode_a1d30e1ee40c89a2,
              mid_size_2e5ae9edcb9b072f,
              mid_visitLeafBlockValues_ab735c107bcea1e1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDReader(jobject obj) : ::org::apache::lucene::index::PointValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDReader(const BKDReader& obj) : ::org::apache::lucene::index::PointValues(obj) {}

            BKDReader(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::store::IndexInput &);

            jlong estimatePointCount(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
            jint getBytesPerDimension() const;
            jint getDocCount() const;
            ::org::apache::lucene::util::bkd::BKDReader$IntersectState getIntersectState(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
            JArray< jbyte > getMaxPackedValue() const;
            JArray< jbyte > getMinPackedValue() const;
            jint getNumDimensions() const;
            jint getNumIndexDimensions() const;
            void intersect(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
            jboolean isLeafNode(jint) const;
            jlong size() const;
            void visitLeafBlockValues(const ::org::apache::lucene::util::bkd::BKDReader$IndexTree &, const ::org::apache::lucene::util::bkd::BKDReader$IntersectState &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(BKDReader);
          extern PyTypeObject *PY_TYPE(BKDReader);

          class t_BKDReader {
          public:
            PyObject_HEAD
            BKDReader object;
            static PyObject *wrap_Object(const BKDReader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
