#ifndef org_apache_lucene_queries_function_ValueSource_H
#define org_apache_lucene_queries_function_ValueSource_H

#include "java/lang/Object.h"

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
      namespace search {
        class LongValuesSource;
        class SortField;
        class IndexSearcher;
        class DoubleValuesSource;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
          class ValueSource;
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

          class ValueSource : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_asDoubleValuesSource_ccca60747b1553ac,
              mid_asLongValuesSource_1eae8270233c8b33,
              mid_createWeight_69d322032c5ae159,
              mid_description_db9b55ba01e03e4b,
              mid_equals_8b72f2dcdde6fd1d,
              mid_fromDoubleValuesSource_f12db4e7c1cc53dc,
              mid_getSortField_8a713675264264ba,
              mid_getValues_ede8eccd3e97f32c,
              mid_hashCode_9972fcc56b44e79d,
              mid_newContext_c6a6785e7abaa6c5,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ValueSource(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ValueSource(const ValueSource& obj) : ::java::lang::Object(obj) {}

            ValueSource();

            ::org::apache::lucene::search::DoubleValuesSource asDoubleValuesSource() const;
            ::org::apache::lucene::search::LongValuesSource asLongValuesSource() const;
            void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
            ::java::lang::String description() const;
            jboolean equals(const ::java::lang::Object &) const;
            static ValueSource fromDoubleValuesSource(const ::org::apache::lucene::search::DoubleValuesSource &);
            ::org::apache::lucene::search::SortField getSortField(jboolean) const;
            ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            jint hashCode() const;
            static ::java::util::Map newContext(const ::org::apache::lucene::search::IndexSearcher &);
            ::java::lang::String toString() const;
          };
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
          extern PyType_Def PY_TYPE_DEF(ValueSource);
          extern PyTypeObject *PY_TYPE(ValueSource);

          class t_ValueSource {
          public:
            PyObject_HEAD
            ValueSource object;
            static PyObject *wrap_Object(const ValueSource&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
