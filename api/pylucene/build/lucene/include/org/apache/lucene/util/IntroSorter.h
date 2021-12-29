#ifndef org_apache_lucene_util_IntroSorter_H
#define org_apache_lucene_util_IntroSorter_H

#include "org/apache/lucene/util/Sorter.h"

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

        class IntroSorter : public ::org::apache::lucene::util::Sorter {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_sort_438c62480c481c65,
            mid_comparePivot_1e143afe1894d213,
            mid_setPivot_040c4cd0390c5aff,
            mid_compare_57a58545eba514db,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntroSorter(jobject obj) : ::org::apache::lucene::util::Sorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntroSorter(const IntroSorter& obj) : ::org::apache::lucene::util::Sorter(obj) {}

          IntroSorter();

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
        extern PyType_Def PY_TYPE_DEF(IntroSorter);
        extern PyTypeObject *PY_TYPE(IntroSorter);

        class t_IntroSorter {
        public:
          PyObject_HEAD
          IntroSorter object;
          static PyObject *wrap_Object(const IntroSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
