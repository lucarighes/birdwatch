#ifndef org_apache_lucene_queries_function_valuesource_SortedSetFieldSource_H
#define org_apache_lucene_queries_function_valuesource_SortedSetFieldSource_H

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
        class SortedSetSelector$Type;
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

            class SortedSetFieldSource : public ::org::apache::lucene::queries::function::valuesource::FieldCacheSource {
             public:
              enum {
                mid_init$_9fd2eb66a64e6f0f,
                mid_init$_679a62dbe873358b,
                mid_description_db9b55ba01e03e4b,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getSortField_8a713675264264ba,
                mid_getValues_ede8eccd3e97f32c,
                mid_hashCode_9972fcc56b44e79d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SortedSetFieldSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SortedSetFieldSource(const SortedSetFieldSource& obj) : ::org::apache::lucene::queries::function::valuesource::FieldCacheSource(obj) {}

              SortedSetFieldSource(const ::java::lang::String &);
              SortedSetFieldSource(const ::java::lang::String &, const ::org::apache::lucene::search::SortedSetSelector$Type &);

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
            extern PyType_Def PY_TYPE_DEF(SortedSetFieldSource);
            extern PyTypeObject *PY_TYPE(SortedSetFieldSource);

            class t_SortedSetFieldSource {
            public:
              PyObject_HEAD
              SortedSetFieldSource object;
              static PyObject *wrap_Object(const SortedSetFieldSource&);
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
