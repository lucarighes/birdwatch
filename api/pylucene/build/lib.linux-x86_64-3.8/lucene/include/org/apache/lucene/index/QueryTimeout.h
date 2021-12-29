#ifndef org_apache_lucene_index_QueryTimeout_H
#define org_apache_lucene_index_QueryTimeout_H

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
      namespace index {

        class QueryTimeout : public ::java::lang::Object {
         public:
          enum {
            mid_isTimeoutEnabled_8454bd5aa23fd11e,
            mid_shouldExit_8454bd5aa23fd11e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryTimeout(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryTimeout(const QueryTimeout& obj) : ::java::lang::Object(obj) {}

          jboolean isTimeoutEnabled() const;
          jboolean shouldExit() const;
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
        extern PyType_Def PY_TYPE_DEF(QueryTimeout);
        extern PyTypeObject *PY_TYPE(QueryTimeout);

        class t_QueryTimeout {
        public:
          PyObject_HEAD
          QueryTimeout object;
          static PyObject *wrap_Object(const QueryTimeout&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
