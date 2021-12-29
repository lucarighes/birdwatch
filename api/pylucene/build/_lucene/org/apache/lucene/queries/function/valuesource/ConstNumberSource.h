#ifndef org_apache_lucene_queries_function_valuesource_ConstNumberSource_H
#define org_apache_lucene_queries_function_valuesource_ConstNumberSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace lang {
    class Number;
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

            class ConstNumberSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_getBool_8454bd5aa23fd11e,
                mid_getDouble_8c74b787998ce4bc,
                mid_getFloat_58aec2b64dff50c8,
                mid_getInt_9972fcc56b44e79d,
                mid_getLong_2e5ae9edcb9b072f,
                mid_getNumber_f5813404cc5e3a1e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConstNumberSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConstNumberSource(const ConstNumberSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              ConstNumberSource();

              jboolean getBool() const;
              jdouble getDouble() const;
              jfloat getFloat() const;
              jint getInt() const;
              jlong getLong() const;
              ::java::lang::Number getNumber() const;
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
            extern PyType_Def PY_TYPE_DEF(ConstNumberSource);
            extern PyTypeObject *PY_TYPE(ConstNumberSource);

            class t_ConstNumberSource {
            public:
              PyObject_HEAD
              ConstNumberSource object;
              static PyObject *wrap_Object(const ConstNumberSource&);
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
