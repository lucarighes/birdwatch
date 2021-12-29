#ifndef org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H
#define org_apache_lucene_queries_function_docvalues_DocTermsIndexDocValues_H

#include "org/apache/lucene/queries/function/FunctionValues.h"

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
          class ValueSource;
        }
      }
      namespace search {
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
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
          namespace docvalues {

            class DocTermsIndexDocValues : public ::org::apache::lucene::queries::function::FunctionValues {
             public:
              enum {
                mid_init$_d7341fb0d2a9badf,
                mid_boolVal_a1d30e1ee40c89a2,
                mid_bytesVal_81393e711d0ebc08,
                mid_exists_a1d30e1ee40c89a2,
                mid_getRangeScorer_a2e4107cfe5ff421,
                mid_getValueFiller_e87ccfe6e71ebd5e,
                mid_numOrd_9972fcc56b44e79d,
                mid_objectVal_b15c79acb15c2870,
                mid_ordVal_1e143afe1894d213,
                mid_strVal_d7593acad64ef635,
                mid_toString_d7593acad64ef635,
                mid_getOrdForDoc_1e143afe1894d213,
                mid_toTerm_9bfa75c9f141b67f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DocTermsIndexDocValues(jobject obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DocTermsIndexDocValues(const DocTermsIndexDocValues& obj) : ::org::apache::lucene::queries::function::FunctionValues(obj) {}

              DocTermsIndexDocValues(const ::org::apache::lucene::queries::function::ValueSource &, const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &);

              jboolean boolVal(jint) const;
              jboolean bytesVal(jint, const ::org::apache::lucene::util::BytesRefBuilder &) const;
              jboolean exists(jint) const;
              ::org::apache::lucene::queries::function::ValueSourceScorer getRangeScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::LeafReaderContext &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
              ::org::apache::lucene::queries::function::FunctionValues$ValueFiller getValueFiller() const;
              jint numOrd() const;
              ::java::lang::Object objectVal(jint) const;
              jint ordVal(jint) const;
              ::java::lang::String strVal(jint) const;
              ::java::lang::String toString(jint) const;
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
          namespace docvalues {
            extern PyType_Def PY_TYPE_DEF(DocTermsIndexDocValues);
            extern PyTypeObject *PY_TYPE(DocTermsIndexDocValues);

            class t_DocTermsIndexDocValues {
            public:
              PyObject_HEAD
              DocTermsIndexDocValues object;
              static PyObject *wrap_Object(const DocTermsIndexDocValues&);
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
