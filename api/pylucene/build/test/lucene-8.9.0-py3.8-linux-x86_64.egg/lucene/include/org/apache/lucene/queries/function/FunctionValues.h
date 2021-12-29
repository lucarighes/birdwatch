#ifndef org_apache_lucene_queries_function_FunctionValues_H
#define org_apache_lucene_queries_function_FunctionValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace util {
        class BytesRefBuilder;
      }
      namespace queries {
        namespace function {
          class ValueSourceScorer;
          class FunctionValues$ValueFiller;
        }
      }
      namespace search {
        class Explanation;
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class FunctionValues : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_boolVal_a1d30e1ee40c89a2,
              mid_byteVal_4d5233a30cda5878,
              mid_byteVal_0ff3bfb1ed512144,
              mid_bytesVal_81393e711d0ebc08,
              mid_doubleVal_f3ddedc0b6f18620,
              mid_doubleVal_a60d9c45cb58b918,
              mid_exists_a1d30e1ee40c89a2,
              mid_explain_9f7396620820dffe,
              mid_floatVal_384f078ef4b8f931,
              mid_floatVal_9105bb5b941e483f,
              mid_getRangeScorer_a2e4107cfe5ff421,
              mid_getScorer_7ebd6e85fb2e2257,
              mid_getValueFiller_e87ccfe6e71ebd5e,
              mid_intVal_1e143afe1894d213,
              mid_intVal_b389acd9aa70d94d,
              mid_longVal_0f1d64a641e8af53,
              mid_longVal_7357cce567af4766,
              mid_numOrd_9972fcc56b44e79d,
              mid_objectVal_b15c79acb15c2870,
              mid_ordVal_1e143afe1894d213,
              mid_shortVal_464e34d67b70dc89,
              mid_shortVal_8bfe273e2c76407f,
              mid_strVal_d7593acad64ef635,
              mid_strVal_fe087eb49c9d0cd4,
              mid_toString_d7593acad64ef635,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FunctionValues(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FunctionValues(const FunctionValues& obj) : ::java::lang::Object(obj) {}

            FunctionValues();

            jboolean boolVal(jint) const;
            jbyte byteVal(jint) const;
            void byteVal(jint, const JArray< jbyte > &) const;
            jboolean bytesVal(jint, const ::org::apache::lucene::util::BytesRefBuilder &) const;
            jdouble doubleVal(jint) const;
            void doubleVal(jint, const JArray< jdouble > &) const;
            jboolean exists(jint) const;
            ::org::apache::lucene::search::Explanation explain(jint) const;
            jfloat floatVal(jint) const;
            void floatVal(jint, const JArray< jfloat > &) const;
            ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
            ::org::apache::lucene::queries::function::ValueSourceScorer getScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
            jint intVal(jint) const;
            void intVal(jint, const JArray< jint > &) const;
            jlong longVal(jint) const;
            void longVal(jint, const JArray< jlong > &) const;
            jint numOrd() const;
            ::java::lang::Object objectVal(jint) const;
            jint ordVal(jint) const;
            jshort shortVal(jint) const;
            void shortVal(jint, const JArray< jshort > &) const;
            ::java::lang::String strVal(jint) const;
            void strVal(jint, const JArray< ::java::lang::String > &) const;
            ::java::lang::String toString(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FunctionValues);
          extern PyTypeObject *PY_TYPE(FunctionValues);

          class t_FunctionValues {
          public:
            PyObject_HEAD
            FunctionValues object;
            static PyObject *wrap_Object(const FunctionValues&);
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
