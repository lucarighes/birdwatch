#ifndef org_apache_lucene_queries_function_valuesource_MultiFunction$Values_H
#define org_apache_lucene_queries_function_valuesource_MultiFunction$Values_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class FunctionValues$ValueFiller;
          namespace valuesource {
            class MultiFunction;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class MultiFunction$Values : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_aa3a2f93caeb4705,
                mid_getValueFiller_e87ccfe6e71ebd5e,
                mid_toString_d7593acad64ef635,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiFunction$Values(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiFunction$Values(const MultiFunction$Values& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              MultiFunction$Values(const ::org::apache::lucene::queries::function::valuesource::MultiFunction &, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &);

              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              ::java::lang::String toString(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(MultiFunction$Values);
            extern PyTypeObject *PY_TYPE(MultiFunction$Values);

            class t_MultiFunction$Values {
            public:
              PyObject_HEAD
              MultiFunction$Values object;
              static PyObject *wrap_Object(const MultiFunction$Values&);
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
