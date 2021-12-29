#ifndef org_apache_lucene_queries_function_valuesource_DoubleFieldSource_H
#define org_apache_lucene_queries_function_valuesource_DoubleFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"

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
        class SortField;
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

            class DoubleFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
             public:
              enum {
                mid_init$_9fd2eb66a64e6f0f,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getSortField_8a713675264264ba,
                mid_getValues_ede8eccd3e97f32c,
                mid_hashCode_9972fcc56b44e79d,
                mid_getNumericDocValues_991afb5c8a130516,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DoubleFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DoubleFieldSource(const DoubleFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              DoubleFieldSource(const ::java::lang::String &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::search::SortField getSortField(jboolean) const;
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
            extern PyType_Def PY_TYPE_DEF(DoubleFieldSource);
            extern PyTypeObject *PY_TYPE(DoubleFieldSource);

            class t_DoubleFieldSource {
            public:
              PyObject_HEAD
              DoubleFieldSource object;
              static PyObject *wrap_Object(const DoubleFieldSource&);
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
