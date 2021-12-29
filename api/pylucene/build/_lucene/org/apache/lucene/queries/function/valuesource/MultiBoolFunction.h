#ifndef org_apache_lucene_queries_function_valuesource_MultiBoolFunction_H
#define org_apache_lucene_queries_function_valuesource_MultiBoolFunction_H

#include "org/apache/lucene/queries/function/valuesource/BoolFunction.h"

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
          namespace docvalues {
            class BoolDocValues;
          }
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

            class MultiBoolFunction : public ::org::apache::lucene::queries::function::valuesource::BoolFunction {
             public:
              enum {
                mid_init$_d03990be0130160d,
                mid_createWeight_69d322032c5ae159,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getValues_0fa993d09586181d,
                mid_hashCode_9972fcc56b44e79d,
                mid_func_79d91b981374bcba,
                mid_name_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiBoolFunction(jobject obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiBoolFunction(const MultiBoolFunction& obj) : ::org::apache::lucene::queries::function::valuesource::BoolFunction(obj) {}

              MultiBoolFunction(const ::java::util::List &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::docvalues::BoolDocValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(MultiBoolFunction);
            extern PyTypeObject *PY_TYPE(MultiBoolFunction);

            class t_MultiBoolFunction {
            public:
              PyObject_HEAD
              MultiBoolFunction object;
              static PyObject *wrap_Object(const MultiBoolFunction&);
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
