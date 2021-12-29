#ifndef org_apache_lucene_index_NumericDocValues_H
#define org_apache_lucene_index_NumericDocValues_H

#include "org/apache/lucene/index/DocValuesIterator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class NumericDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_longValue_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericDocValues(jobject obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NumericDocValues(const NumericDocValues& obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {}

          jlong longValue() const;
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
        extern PyType_Def PY_TYPE_DEF(NumericDocValues);
        extern PyTypeObject *PY_TYPE(NumericDocValues);

        class t_NumericDocValues {
        public:
          PyObject_HEAD
          NumericDocValues object;
          static PyObject *wrap_Object(const NumericDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
