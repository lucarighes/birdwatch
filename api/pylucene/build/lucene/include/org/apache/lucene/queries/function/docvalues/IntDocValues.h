#ifndef org_apache_lucene_queries_function_docvalues_IntDocValues_H
#define org_apache_lucene_queries_function_docvalues_IntDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace queries {
        namespace function {
          class ValueSourceScorer;
          class FunctionValues$ValueFiller;
          class ValueSource;
        }
      }
      namespace search {
        class Weight;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace docvalues {

            class IntDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_31c80a0040f07e19,
                mid_byteVal_4d5233a30cda5878,
                mid_doubleVal_f3ddedc0b6f18620,
                mid_floatVal_384f078ef4b8f931,
                mid_getRangeScorer_a2e4107cfe5ff421,
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

              explicit IntDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IntDocValues(const IntDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              IntDocValues(const ::org::apache::lucene::queries::function::ValueSource &);

              jbyte byteVal(jint) const;
              jdouble doubleVal(jint) const;
              jfloat floatVal(jint) const;
              ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
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
            extern PyType_Def PY_TYPE_DEF(IntDocValues);
            extern PyTypeObject *PY_TYPE(IntDocValues);

            class t_IntDocValues {
            public:
              PyObject_HEAD
              IntDocValues object;
              static PyObject *wrap_Object(const IntDocValues&);
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
