#ifndef org_apache_lucene_index_SortedNumericDocValues_H
#define org_apache_lucene_index_SortedNumericDocValues_H

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

        class SortedNumericDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_docValueCount_9972fcc56b44e79d,
            mid_nextValue_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedNumericDocValues(jobject obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedNumericDocValues(const SortedNumericDocValues& obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {}

          jint docValueCount() const;
          jlong nextValue() const;
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
        extern PyType_Def PY_TYPE_DEF(SortedNumericDocValues);
        extern PyTypeObject *PY_TYPE(SortedNumericDocValues);

        class t_SortedNumericDocValues {
        public:
          PyObject_HEAD
          SortedNumericDocValues object;
          static PyObject *wrap_Object(const SortedNumericDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
