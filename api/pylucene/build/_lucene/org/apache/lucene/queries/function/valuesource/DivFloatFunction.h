#ifndef org_apache_lucene_queries_function_valuesource_DivFloatFunction_H
#define org_apache_lucene_queries_function_valuesource_DivFloatFunction_H

#include "org/apache/lucene/queries/function/valuesource/DualFloatFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class ValueSource;
        }
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
      namespace queries {
        namespace function {
          namespace valuesource {

            class DivFloatFunction : public ::org::apache::lucene::queries::function::valuesource::DualFloatFunction {
             public:
              enum {
                mid_init$_6d73cd8677453118,
                mid_func_328d6b0dd62870d9,
                mid_name_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DivFloatFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::DualFloatFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DivFloatFunction(const DivFloatFunction& obj) : ::org::apache::lucene::queries::function::valuesource::DualFloatFunction(obj) {}

              DivFloatFunction(const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {
            extern PyType_Def PY_TYPE_DEF(DivFloatFunction);
            extern PyTypeObject *PY_TYPE(DivFloatFunction);

            class t_DivFloatFunction {
            public:
              PyObject_HEAD
              DivFloatFunction object;
              static PyObject *wrap_Object(const DivFloatFunction&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
