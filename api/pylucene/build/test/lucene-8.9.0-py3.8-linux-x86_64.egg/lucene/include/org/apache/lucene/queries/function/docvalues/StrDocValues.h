#ifndef org_apache_lucene_queries_function_docvalues_StrDocValues_H
#define org_apache_lucene_queries_function_docvalues_StrDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
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
          class ValueSource;
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
          namespace docvalues {

            class StrDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_31c80a0040f07e19,
                mid_boolVal_a1d30e1ee40c89a2,
                mid_getValueFiller_e87ccfe6e71ebd5e,
                mid_objectVal_b15c79acb15c2870,
                mid_strVal_d7593acad64ef635,
                mid_toString_d7593acad64ef635,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StrDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              StrDocValues(const StrDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              StrDocValues(const ::org::apache::lucene::queries::function::ValueSource &);

              jboolean boolVal(jint) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              ::java::lang::Object objectVal(jint) const;
              ::java::lang::String strVal(jint) const;
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
          namespace docvalues {
            extern PyType_Def PY_TYPE_DEF(StrDocValues);
            extern PyTypeObject *PY_TYPE(StrDocValues);

            class t_StrDocValues {
            public:
              PyObject_HEAD
              StrDocValues object;
              static PyObject *wrap_Object(const StrDocValues&);
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
