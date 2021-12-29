#ifndef org_apache_lucene_search_similarities_Axiomatic_H
#define org_apache_lucene_search_similarities_Axiomatic_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class Axiomatic : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_8e1d952dd65cdc3a,
              mid_init$_3cf0b46cc9375aa7,
              mid_init$_6d2f7945f0f05cec,
              mid_score_761ab1c432346fd0,
              mid_toString_db9b55ba01e03e4b,
              mid_explain_a84367e35a1ef83b,
              mid_explain_f9756f2482a92b24,
              mid_idf_761ab1c432346fd0,
              mid_gamma_761ab1c432346fd0,
              mid_tf_761ab1c432346fd0,
              mid_idfExplain_77a68ba236144920,
              mid_tfln_761ab1c432346fd0,
              mid_tflnExplain_77a68ba236144920,
              mid_ln_761ab1c432346fd0,
              mid_lnExplain_77a68ba236144920,
              mid_tfExplain_77a68ba236144920,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Axiomatic(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Axiomatic(const Axiomatic& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            Axiomatic();
            Axiomatic(jfloat);
            Axiomatic(jfloat, jint);
            Axiomatic(jfloat, jint, jfloat);

            jdouble score(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
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
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(Axiomatic);
          extern PyTypeObject *PY_TYPE(Axiomatic);

          class t_Axiomatic {
          public:
            PyObject_HEAD
            Axiomatic object;
            static PyObject *wrap_Object(const Axiomatic&);
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
