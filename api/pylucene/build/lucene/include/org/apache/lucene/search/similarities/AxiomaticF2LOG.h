#ifndef org_apache_lucene_search_similarities_AxiomaticF2LOG_H
#define org_apache_lucene_search_similarities_AxiomaticF2LOG_H

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

          class AxiomaticF2LOG : public ::org::apache::lucene::search::similarities::Axiomatic {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_8e1d952dd65cdc3a,
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

            explicit AxiomaticF2LOG(jobject obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AxiomaticF2LOG(const AxiomaticF2LOG& obj) : ::org::apache::lucene::search::similarities::Axiomatic(obj) {}

            AxiomaticF2LOG();
            AxiomaticF2LOG(jfloat);

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
          extern PyType_Def PY_TYPE_DEF(AxiomaticF2LOG);
          extern PyTypeObject *PY_TYPE(AxiomaticF2LOG);

          class t_AxiomaticF2LOG {
          public:
            PyObject_HEAD
            AxiomaticF2LOG object;
            static PyObject *wrap_Object(const AxiomaticF2LOG&);
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
