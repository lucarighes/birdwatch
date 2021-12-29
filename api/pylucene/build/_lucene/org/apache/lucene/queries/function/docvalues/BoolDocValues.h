#ifndef org_apache_lucene_queries_function_docvalues_BoolDocValues_H
#define org_apache_lucene_queries_function_docvalues_BoolDocValues_H

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

            class BoolDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_31c80a0040f07e19,
                mid_boolVal_a1d30e1ee40c89a2,
                mid_byteVal_4d5233a30cda5878,
                mid_doubleVal_f3ddedc0b6f18620,
                mid_floatVal_384f078ef4b8f931,
                mid_getValueFiller_e87ccfe6e71ebd5e,
                mid_intVal_1e143afe1894d213,
                mid_longVal_0f1d64a641e8af53,
                mid_objectVal_b15c79acb15c2870,
                mid_shortVal_464e34d67b70dc89,
                mid_strVal_d7593acad64ef635,
                mid_toString_d7593acad64ef635,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BoolDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BoolDocValues(const BoolDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              BoolDocValues(const ::org::apache::lucene::queries::function::ValueSource &);

              jboolean boolVal(jint) const;
              jbyte byteVal(jint) const;
              jdouble doubleVal(jint) const;
              jfloat floatVal(jint) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              jint intVal(jint) const;
              jlong longVal(jint) const;
              ::java::lang::Object objectVal(jint) const;
              jshort shortVal(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(BoolDocValues);
            extern PyTypeObject *PY_TYPE(BoolDocValues);

            class t_BoolDocValues {
            public:
              PyObject_HEAD
              BoolDocValues object;
              static PyObject *wrap_Object(const BoolDocValues&);
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
