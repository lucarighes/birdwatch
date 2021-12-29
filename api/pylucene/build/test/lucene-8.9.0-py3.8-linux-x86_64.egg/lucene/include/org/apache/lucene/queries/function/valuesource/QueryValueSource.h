#ifndef org_apache_lucene_queries_function_valuesource_QueryValueSource_H
#define org_apache_lucene_queries_function_valuesource_QueryValueSource_H

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
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class IndexSearcher;
        class Query;
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

            class QueryValueSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_f2d949d9faf0fc5a,
                mid_createWeight_69d322032c5ae159,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getDefaultValue_58aec2b64dff50c8,
                mid_getQuery_cbf839a480265450,
                mid_getValues_ede8eccd3e97f32c,
                mid_hashCode_9972fcc56b44e79d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryValueSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryValueSource(const QueryValueSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              QueryValueSource(const ::org::apache::lucene::search::Query &, jfloat);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jfloat getDefaultValue() const;
              ::org::apache::lucene::search::Query getQuery() const;
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
            extern PyType_Def PY_TYPE_DEF(QueryValueSource);
            extern PyTypeObject *PY_TYPE(QueryValueSource);

            class t_QueryValueSource {
            public:
              PyObject_HEAD
              QueryValueSource object;
              static PyObject *wrap_Object(const QueryValueSource&);
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
