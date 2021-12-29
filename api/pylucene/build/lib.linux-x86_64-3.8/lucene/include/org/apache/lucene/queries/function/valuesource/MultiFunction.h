#ifndef org_apache_lucene_queries_function_valuesource_MultiFunction_H
#define org_apache_lucene_queries_function_valuesource_MultiFunction_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace util {
    class Map;
    class List;
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

            class MultiFunction : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_d03990be0130160d,
                mid_allExists_79d91b981374bcba,
                mid_allExists_d3dc0352a2f5d844,
                mid_anyExists_79d91b981374bcba,
                mid_anyExists_d3dc0352a2f5d844,
                mid_createWeight_69d322032c5ae159,
                mid_description_db9b55ba01e03e4b,
                mid_description_529403107c179f5f,
                mid_equals_8b72f2dcdde6fd1d,
                mid_hashCode_9972fcc56b44e79d,
                mid_toString_b42438aa226c4ff5,
                mid_valsArr_6bca9607e0686ac4,
                mid_name_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiFunction(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiFunction(const MultiFunction& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              MultiFunction(const ::java::util::List &);

              static jboolean allExists(jint, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &);
              static jboolean allExists(jint, const ::org::apache::lucene::queries::function::FunctionValues &, const ::org::apache::lucene::queries::function::FunctionValues &);
              static jboolean anyExists(jint, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &);
              static jboolean anyExists(jint, const ::org::apache::lucene::queries::function::FunctionValues &, const ::org::apache::lucene::queries::function::FunctionValues &);
              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              static ::java::lang::String description(const ::java::lang::String &, const ::java::util::List &);
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              static ::java::lang::String toString(const ::java::lang::String &, const JArray< ::org::apache::lucene::queries::function::FunctionValues > &, jint);
              static JArray< ::org::apache::lucene::queries::function::FunctionValues > valsArr(const ::java::util::List &, const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &);
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
            extern PyType_Def PY_TYPE_DEF(MultiFunction);
            extern PyTypeObject *PY_TYPE(MultiFunction);

            class t_MultiFunction {
            public:
              PyObject_HEAD
              MultiFunction object;
              static PyObject *wrap_Object(const MultiFunction&);
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
