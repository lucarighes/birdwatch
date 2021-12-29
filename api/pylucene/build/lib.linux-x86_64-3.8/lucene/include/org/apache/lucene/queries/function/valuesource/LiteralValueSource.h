#ifndef org_apache_lucene_queries_function_valuesource_LiteralValueSource_H
#define org_apache_lucene_queries_function_valuesource_LiteralValueSource_H

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

            class LiteralValueSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_9fd2eb66a64e6f0f,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getValue_db9b55ba01e03e4b,
                mid_getValues_ede8eccd3e97f32c,
                mid_hashCode_9972fcc56b44e79d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LiteralValueSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LiteralValueSource(const LiteralValueSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              static jint hash;

              LiteralValueSource(const ::java::lang::String &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::java::lang::String getValue() const;
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
            extern PyType_Def PY_TYPE_DEF(LiteralValueSource);
            extern PyTypeObject *PY_TYPE(LiteralValueSource);

            class t_LiteralValueSource {
            public:
              PyObject_HEAD
              LiteralValueSource object;
              static PyObject *wrap_Object(const LiteralValueSource&);
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
