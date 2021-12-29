#ifndef org_apache_lucene_queries_function_valuesource_IfFunction_H
#define org_apache_lucene_queries_function_valuesource_IfFunction_H

#include "org/apache/lucene/queries/function/valuesource/BoolFunction.h"

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
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class IndexSearcher;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
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
          namespace valuesource {

            class IfFunction : public ::org::apache::lucene::queries::function::valuesource::BoolFunction {
             public:
              enum {
                mid_init$_8dd37325f7cb7128,
                mid_createWeight_69d322032c5ae159,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getValues_ede8eccd3e97f32c,
                mid_hashCode_9972fcc56b44e79d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IfFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IfFunction(const IfFunction& obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {}

              IfFunction(const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::queries::function::ValueSource &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(IfFunction);
            extern PyTypeObject *PY_TYPE(IfFunction);

            class t_IfFunction {
            public:
              PyObject_HEAD
              IfFunction object;
              static PyObject *wrap_Object(const IfFunction&);
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
