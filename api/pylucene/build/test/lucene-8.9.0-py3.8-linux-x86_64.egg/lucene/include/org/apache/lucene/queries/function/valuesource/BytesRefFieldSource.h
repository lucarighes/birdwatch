#ifndef org_apache_lucene_queries_function_valuesource_BytesRefFieldSource_H
#define org_apache_lucene_queries_function_valuesource_BytesRefFieldSource_H

#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
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

            class BytesRefFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
             public:
              enum {
                mid_init$_9fd2eb66a64e6f0f,
                mid_getValues_ede8eccd3e97f32c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BytesRefFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BytesRefFieldSource(const BytesRefFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              BytesRefFieldSource(const ::java::lang::String &);

              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(BytesRefFieldSource);
            extern PyTypeObject *PY_TYPE(BytesRefFieldSource);

            class t_BytesRefFieldSource {
            public:
              PyObject_HEAD
              BytesRefFieldSource object;
              static PyObject *wrap_Object(const BytesRefFieldSource&);
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
