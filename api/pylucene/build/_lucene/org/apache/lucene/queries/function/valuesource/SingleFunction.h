#ifndef org_apache_lucene_queries_function_valuesource_SingleFunction_H
#define org_apache_lucene_queries_function_valuesource_SingleFunction_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace util {
    class Map;
  }
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
      namespace search {
        class IndexSearcher;
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

            class SingleFunction : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_31c80a0040f07e19,
                mid_createWeight_69d322032c5ae159,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_hashCode_9972fcc56b44e79d,
                mid_name_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SingleFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SingleFunction(const SingleFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              SingleFunction(const ::org::apache::lucene::queries::function::ValueSource &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
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
            extern PyType_Def PY_TYPE_DEF(SingleFunction);
            extern PyTypeObject *PY_TYPE(SingleFunction);

            class t_SingleFunction {
            public:
              PyObject_HEAD
              SingleFunction object;
              static PyObject *wrap_Object(const SingleFunction&);
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
