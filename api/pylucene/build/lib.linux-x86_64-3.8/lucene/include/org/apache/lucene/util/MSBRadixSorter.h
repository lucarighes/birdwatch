#ifndef org_apache_lucene_util_MSBRadixSorter_H
#define org_apache_lucene_util_MSBRadixSorter_H

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

        class MSBRadixSorter : public ::org::apache::lucene::util::Sorter {
         public:
          enum {
            mid_sort_438c62480c481c65,
            mid_getBucket_57a58545eba514db,
            mid_getFallbackSorter_941f3cb31d983b76,
            mid_reorder_50c137e6aaa1731d,
            mid_byteAt_57a58545eba514db,
            mid_compare_57a58545eba514db,
            mid_sort_34ab80131650555f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MSBRadixSorter(jobject obj) : ::org::apache::lucene::util::Sorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MSBRadixSorter(const MSBRadixSorter& obj) : ::org::apache::lucene::util::Sorter(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(MSBRadixSorter);
        extern PyTypeObject *PY_TYPE(MSBRadixSorter);

        class t_MSBRadixSorter {
        public:
          PyObject_HEAD
          MSBRadixSorter object;
          static PyObject *wrap_Object(const MSBRadixSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
