#ifndef org_apache_lucene_util_LSBRadixSorter_H
#define org_apache_lucene_util_LSBRadixSorter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class LSBRadixSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_sort_52d22eea34ac033a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LSBRadixSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LSBRadixSorter(const LSBRadixSorter& obj) : ::java::lang::Object(obj) {}

          LSBRadixSorter();

          void sort(jint, const JArray< jint > &, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(LSBRadixSorter);
        extern PyTypeObject *PY_TYPE(LSBRadixSorter);

        class t_LSBRadixSorter {
        public:
          PyObject_HEAD
          LSBRadixSorter object;
          static PyObject *wrap_Object(const LSBRadixSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
