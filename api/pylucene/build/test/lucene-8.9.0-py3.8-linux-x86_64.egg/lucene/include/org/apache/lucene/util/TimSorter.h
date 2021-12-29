#ifndef org_apache_lucene_util_TimSorter_H
#define org_apache_lucene_util_TimSorter_H

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

        class TimSorter : public ::org::apache::lucene::util::Sorter {
         public:
          enum {
            mid_sort_438c62480c481c65,
            mid_restore_438c62480c481c65,
            mid_compareSaved_57a58545eba514db,
            mid_save_438c62480c481c65,
            mid_copy_438c62480c481c65,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimSorter(jobject obj) : ::org::apache::lucene::util::Sorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimSorter(const TimSorter& obj) : ::org::apache::lucene::util::Sorter(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(TimSorter);
        extern PyTypeObject *PY_TYPE(TimSorter);

        class t_TimSorter {
        public:
          PyObject_HEAD
          TimSorter object;
          static PyObject *wrap_Object(const TimSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
