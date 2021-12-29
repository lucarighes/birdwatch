#ifndef org_apache_lucene_util_Sorter_H
#define org_apache_lucene_util_Sorter_H

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

        class Sorter : public ::java::lang::Object {
         public:
          enum {
            mid_sort_438c62480c481c65,
            mid_comparePivot_1e143afe1894d213,
            mid_setPivot_040c4cd0390c5aff,
            mid_compare_57a58545eba514db,
            mid_swap_438c62480c481c65,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Sorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Sorter(const Sorter& obj) : ::java::lang::Object(obj) {}

          void sort(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(Sorter);
        extern PyTypeObject *PY_TYPE(Sorter);

        class t_Sorter {
        public:
          PyObject_HEAD
          Sorter object;
          static PyObject *wrap_Object(const Sorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
