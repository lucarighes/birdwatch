#ifndef org_apache_lucene_queries_function_valuesource_SumTotalTermFreqValueSource_H
#define org_apache_lucene_queries_function_valuesource_SumTotalTermFreqValueSource_H

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

            class SumTotalTermFreqValueSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_9fd2eb66a64e6f0f,
                mid_createWeight_69d322032c5ae159,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getValues_ede8eccd3e97f32c,
                mid_hashCode_9972fcc56b44e79d,
                mid_name_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SumTotalTermFreqValueSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SumTotalTermFreqValueSource(const SumTotalTermFreqValueSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              SumTotalTermFreqValueSource(const ::java::lang::String &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
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
            extern PyType_Def PY_TYPE_DEF(SumTotalTermFreqValueSource);
            extern PyTypeObject *PY_TYPE(SumTotalTermFreqValueSource);

            class t_SumTotalTermFreqValueSource {
            public:
              PyObject_HEAD
              SumTotalTermFreqValueSource object;
              static PyObject *wrap_Object(const SumTotalTermFreqValueSource&);
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
