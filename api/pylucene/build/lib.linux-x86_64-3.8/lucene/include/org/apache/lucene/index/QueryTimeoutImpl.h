#ifndef org_apache_lucene_index_QueryTimeoutImpl_H
#define org_apache_lucene_index_QueryTimeoutImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class QueryTimeout;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Long;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class QueryTimeoutImpl : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9c778c9bce6694df,
            mid_getTimeoutAt_24165e10e82b50a8,
            mid_reset_f2cc1bce94666404,
            mid_shouldExit_8454bd5aa23fd11e,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryTimeoutImpl(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryTimeoutImpl(const QueryTimeoutImpl& obj) : ::java::lang::Object(obj) {}

          QueryTimeoutImpl(jlong);

          ::java::lang::Long getTimeoutAt() const;
          void reset() const;
          jboolean shouldExit() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(QueryTimeoutImpl);
        extern PyTypeObject *PY_TYPE(QueryTimeoutImpl);

        class t_QueryTimeoutImpl {
        public:
          PyObject_HEAD
          QueryTimeoutImpl object;
          static PyObject *wrap_Object(const QueryTimeoutImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
