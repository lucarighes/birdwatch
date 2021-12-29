#ifndef org_apache_lucene_queries_function_valuesource_ConstValueSource_H
#define org_apache_lucene_queries_function_valuesource_ConstValueSource_H

#include "org/apache/lucene/queries/function/valuesource/ConstNumberSource.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Number;
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

            class ConstValueSource : public ::org::apache::lucene::queries::function::valuesource::ConstNumberSource {
             public:
              enum {
                mid_init$_8e1d952dd65cdc3a,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getBool_8454bd5aa23fd11e,
                mid_getDouble_8c74b787998ce4bc,
                mid_getFloat_58aec2b64dff50c8,
                mid_getInt_9972fcc56b44e79d,
                mid_getLong_2e5ae9edcb9b072f,
                mid_getNumber_f5813404cc5e3a1e,
                mid_getValues_ede8eccd3e97f32c,
                mid_hashCode_9972fcc56b44e79d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConstValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConstValueSource(const ConstValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::ConstNumberSource(obj) {}

              ConstValueSource(jfloat);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jboolean getBool() const;
              jdouble getDouble() const;
              jfloat getFloat() const;
              jint getInt() const;
              jlong getLong() const;
              ::java::lang::Number getNumber() const;
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
            extern PyType_Def PY_TYPE_DEF(ConstValueSource);
            extern PyTypeObject *PY_TYPE(ConstValueSource);

            class t_ConstValueSource {
            public:
              PyObject_HEAD
              ConstValueSource object;
              static PyObject *wrap_Object(const ConstValueSource&);
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
