#ifndef org_apache_lucene_search_SortedNumericSelector_H
#define org_apache_lucene_search_SortedNumericSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class NumericDocValues;
      }
      namespace search {
        class SortField$Type;
        class SortedNumericSelector$Type;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SortedNumericSelector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_wrap_00dadb0e0a1988eb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedNumericSelector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedNumericSelector(const SortedNumericSelector& obj) : ::java::lang::Object(obj) {}

          SortedNumericSelector();

          static ::org::apache::lucene::index::NumericDocValues wrap(const ::org::apache::lucene::index::SortedNumericDocValues &, const ::org::apache::lucene::search::SortedNumericSelector$Type &, const ::org::apache::lucene::search::SortField$Type &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SortedNumericSelector);
        extern PyTypeObject *PY_TYPE(SortedNumericSelector);

        class t_SortedNumericSelector {
        public:
          PyObject_HEAD
          SortedNumericSelector object;
          static PyObject *wrap_Object(const SortedNumericSelector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
