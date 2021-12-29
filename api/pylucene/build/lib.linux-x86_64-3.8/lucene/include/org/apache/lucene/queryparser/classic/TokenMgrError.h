#ifndef org_apache_lucene_queryparser_classic_TokenMgrError_H
#define org_apache_lucene_queryparser_classic_TokenMgrError_H

#include "java/lang/Error.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class TokenMgrError : public ::java::lang::Error {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_3fb1dae8d4037984,
              mid_init$_995f32485faba072,
              mid_getMessage_db9b55ba01e03e4b,
              mid_addEscapes_9bfa75c9f141b67f,
              mid_LexicalError_22e55ea20d3997c4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenMgrError(jobject obj) : ::java::lang::Error(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenMgrError(const TokenMgrError& obj) : ::java::lang::Error(obj) {}

            TokenMgrError();
            TokenMgrError(const ::java::lang::String &, jint);
            TokenMgrError(jboolean, jint, jint, jint, const ::java::lang::String &, jchar, jint);

            ::java::lang::String getMessage() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(TokenMgrError);
          extern PyTypeObject *PY_TYPE(TokenMgrError);

          class t_TokenMgrError {
          public:
            PyObject_HEAD
            TokenMgrError object;
            static PyObject *wrap_Object(const TokenMgrError&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
