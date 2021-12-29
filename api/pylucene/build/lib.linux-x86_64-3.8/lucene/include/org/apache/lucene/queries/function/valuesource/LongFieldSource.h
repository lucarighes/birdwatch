#ifndef org_apache_lucene_queries_function_valuesource_LongFieldSource_H
#define org_apache_lucene_queries_function_valuesource_LongFieldSource_H

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

            class LongFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
             public:
              enum {
                mid_init$_9fd2eb66a64e6f0f,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_externalToLong_b1e05207ec98e246,
                mid_getSortField_8a713675264264ba,
                mid_getValues_ede8eccd3e97f32c,
                mid_hashCode_9972fcc56b44e79d,
                mid_longToObject_d67ffef7256118d2,
                mid_longToString_55e776ffac018431,
                mid_getNumericDocValues_991afb5c8a130516,
                mid_newMutableValueLong_3a57a85aac063d2e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LongFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LongFieldSource(const LongFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              LongFieldSource(const ::java::lang::String &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              jlong externalToLong(const ::java::lang::String &) const;
              ::org::apache::lucene::search::SortField getSortField(jboolean) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
              jint hashCode() const;
              ::java::lang::Object longToObject(jlong) const;
              ::java::lang::String longToString(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(LongFieldSource);
            extern PyTypeObject *PY_TYPE(LongFieldSource);

            class t_LongFieldSource {
            public:
              PyObject_HEAD
              LongFieldSource object;
              static PyObject *wrap_Object(const LongFieldSource&);
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
