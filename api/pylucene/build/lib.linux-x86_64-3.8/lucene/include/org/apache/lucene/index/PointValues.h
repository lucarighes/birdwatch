#ifndef org_apache_lucene_index_PointValues_H
#define org_apache_lucene_index_PointValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class PointValues$IntersectVisitor;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PointValues : public ::java::lang::Object {
         public:
          enum {
            mid_estimateDocCount_c36ecfcc70f1a802,
            mid_estimatePointCount_c36ecfcc70f1a802,
            mid_getBytesPerDimension_9972fcc56b44e79d,
            mid_getDocCount_9972fcc56b44e79d,
            mid_getDocCount_22884bb4916a685a,
            mid_getMaxPackedValue_cf386cdb1bbd339f,
            mid_getMaxPackedValue_747bccda0867faeb,
            mid_getMinPackedValue_cf386cdb1bbd339f,
            mid_getMinPackedValue_747bccda0867faeb,
            mid_getNumDimensions_9972fcc56b44e79d,
            mid_getNumIndexDimensions_9972fcc56b44e79d,
            mid_intersect_9cdd639f530ebf3c,
            mid_size_2e5ae9edcb9b072f,
            mid_size_06957b5fdb6e3629,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointValues(const PointValues& obj) : ::java::lang::Object(obj) {}

          static jint MAX_DIMENSIONS;
          static jint MAX_INDEX_DIMENSIONS;
          static jint MAX_NUM_BYTES;

          jlong estimateDocCount(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          jlong estimatePointCount(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          jint getBytesPerDimension() const;
          jint getDocCount() const;
          static jint getDocCount(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          JArray< jbyte > getMaxPackedValue() const;
          static JArray< jbyte > getMaxPackedValue(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          JArray< jbyte > getMinPackedValue() const;
          static JArray< jbyte > getMinPackedValue(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          jint getNumDimensions() const;
          jint getNumIndexDimensions() const;
          void intersect(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          jlong size() const;
          static jlong size(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(PointValues);
        extern PyTypeObject *PY_TYPE(PointValues);

        class t_PointValues {
        public:
          PyObject_HEAD
          PointValues object;
          static PyObject *wrap_Object(const PointValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
