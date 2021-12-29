#ifndef org_apache_lucene_queries_function_valuesource_FieldCacheSource_H
#define org_apache_lucene_queries_function_valuesource_FieldCacheSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace lang {
    class Object;
    class String;
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

            class FieldCacheSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_9fd2eb66a64e6f0f,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getField_db9b55ba01e03e4b,
                mid_hashCode_9972fcc56b44e79d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldCacheSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldCacheSource(const FieldCacheSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              FieldCacheSource(const ::java::lang::String &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::java::lang::String getField() const;
              jint hashCode() const;
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
            extern PyType_Def PY_TYPE_DEF(FieldCacheSource);
            extern PyTypeObject *PY_TYPE(FieldCacheSource);

            class t_FieldCacheSource {
            public:
              PyObject_HEAD
              FieldCacheSource object;
              static PyObject *wrap_Object(const FieldCacheSource&);
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
