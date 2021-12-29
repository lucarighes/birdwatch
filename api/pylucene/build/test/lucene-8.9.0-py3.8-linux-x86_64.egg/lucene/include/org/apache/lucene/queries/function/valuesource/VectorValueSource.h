#ifndef org_apache_lucene_queries_function_valuesource_VectorValueSource_H
#define org_apache_lucene_queries_function_valuesource_VectorValueSource_H

#include "org/apache/lucene/queries/function/valuesource/MultiValueSource.h"

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
          class ValueSource;
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

            class VectorValueSource : public ::org::apache::lucene::queries::function::valuesource::MultiValueSource {
             public:
              enum {
                mid_init$_d03990be0130160d,
                mid_createWeight_69d322032c5ae159,
                mid_description_db9b55ba01e03e4b,
                mid_dimension_9972fcc56b44e79d,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getSources_49ec78390f08338a,
                mid_getValues_ede8eccd3e97f32c,
                mid_hashCode_9972fcc56b44e79d,
                mid_name_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit VectorValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::MultiValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              VectorValueSource(const VectorValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::MultiValueSource(obj) {}

              VectorValueSource(const ::java::util::List &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jint dimension() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::java::util::List getSources() const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
              jint hashCode() const;
              ::java::lang::String name() const;
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
            extern PyType_Def PY_TYPE_DEF(VectorValueSource);
            extern PyTypeObject *PY_TYPE(VectorValueSource);

            class t_VectorValueSource {
            public:
              PyObject_HEAD
              VectorValueSource object;
              static PyObject *wrap_Object(const VectorValueSource&);
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
