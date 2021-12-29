#ifndef org_apache_lucene_util_IntroSelector_H
#define org_apache_lucene_util_IntroSelector_H

#include "org/apache/lucene/util/Selector.h"

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

        class IntroSelector : public ::org::apache::lucene::util::Selector {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_select_db3e97653d3683f3,
            mid_comparePivot_1e143afe1894d213,
            mid_setPivot_040c4cd0390c5aff,
            mid_compare_57a58545eba514db,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntroSelector(jobject obj) : ::org::apache::lucene::util::Selector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntroSelector(const IntroSelector& obj) : ::org::apache::lucene::util::Selector(obj) {}

          IntroSelector();

          void select(jint, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IntroSelector);
        extern PyTypeObject *PY_TYPE(IntroSelector);

        class t_IntroSelector {
        public:
          PyObject_HEAD
          IntroSelector object;
          static PyObject *wrap_Object(const IntroSelector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
