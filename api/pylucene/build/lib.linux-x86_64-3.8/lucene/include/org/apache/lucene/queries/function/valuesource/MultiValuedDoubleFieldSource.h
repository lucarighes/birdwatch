#ifndef org_apache_lucene_queries_function_valuesource_MultiValuedDoubleFieldSource_H
#define org_apache_lucene_queries_function_valuesource_MultiValuedDoubleFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/DoubleFieldSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField;
        class SortedNumericSelector$Type;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class MultiValuedDoubleFieldSource : public ::org::apache::lucene::queries::function::valuesource::DoubleFieldSource {
             public:
              enum {
                mid_init$_eb65f30ff755fcc7,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getSortField_8a713675264264ba,
                mid_hashCode_9972fcc56b44e79d,
                mid_getNumericDocValues_991afb5c8a130516,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiValuedDoubleFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::DoubleFieldSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiValuedDoubleFieldSource(const MultiValuedDoubleFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::DoubleFieldSource(obj) {}

              MultiValuedDoubleFieldSource(const ::java::lang::String &, const ::org::apache::lucene::search::SortedNumericSelector$Type &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::search::SortField getSortField(jboolean) const;
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
            extern PyType_Def PY_TYPE_DEF(MultiValuedDoubleFieldSource);
            extern PyTypeObject *PY_TYPE(MultiValuedDoubleFieldSource);

            class t_MultiValuedDoubleFieldSource {
            public:
              PyObject_HEAD
              MultiValuedDoubleFieldSource object;
              static PyObject *wrap_Object(const MultiValuedDoubleFieldSource&);
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
