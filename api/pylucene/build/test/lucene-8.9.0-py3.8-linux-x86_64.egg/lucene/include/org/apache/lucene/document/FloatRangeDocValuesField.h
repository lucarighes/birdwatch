#ifndef org_apache_lucene_document_FloatRangeDocValuesField_H
#define org_apache_lucene_document_FloatRangeDocValuesField_H

#include "org/apache/lucene/document/BinaryRangeDocValuesField.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class FloatRangeDocValuesField : public ::org::apache::lucene::document::BinaryRangeDocValuesField {
         public:
          enum {
            mid_init$_591dcbe784ecff7c,
            mid_getMax_384f078ef4b8f931,
            mid_getMin_384f078ef4b8f931,
            mid_newSlowIntersectsQuery_a56c233be2e586b6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatRangeDocValuesField(jobject obj) : ::org::apache::lucene::document::BinaryRangeDocValuesField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FloatRangeDocValuesField(const FloatRangeDocValuesField& obj) : ::org::apache::lucene::document::BinaryRangeDocValuesField(obj) {}

          FloatRangeDocValuesField(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);

          jfloat getMax(jint) const;
          jfloat getMin(jint) const;
          static ::org::apache::lucene::search::Query newSlowIntersectsQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(FloatRangeDocValuesField);
        extern PyTypeObject *PY_TYPE(FloatRangeDocValuesField);

        class t_FloatRangeDocValuesField {
        public:
          PyObject_HEAD
          FloatRangeDocValuesField object;
          static PyObject *wrap_Object(const FloatRangeDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
