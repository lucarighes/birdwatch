#ifndef org_apache_lucene_search_similarities_AxiomaticF1EXP_H
#define org_apache_lucene_search_similarities_AxiomaticF1EXP_H

#include "org/apache/lucene/search/similarities/Axiomatic.h"

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

          class AxiomaticF1EXP : public ::org::apache::lucene::search::similarities::Axiomatic {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_8e1d952dd65cdc3a,
              mid_init$_5a9245193073da7b,
              mid_toString_db9b55ba01e03e4b,
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

            explicit AxiomaticF1EXP(jobject obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AxiomaticF1EXP(const AxiomaticF1EXP& obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {}

            AxiomaticF1EXP();
            AxiomaticF1EXP(jfloat);
            AxiomaticF1EXP(jfloat, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(AxiomaticF1EXP);
          extern PyTypeObject *PY_TYPE(AxiomaticF1EXP);

          class t_AxiomaticF1EXP {
          public:
            PyObject_HEAD
            AxiomaticF1EXP object;
            static PyObject *wrap_Object(const AxiomaticF1EXP&);
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
