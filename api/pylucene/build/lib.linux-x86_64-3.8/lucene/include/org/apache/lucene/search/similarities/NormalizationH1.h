#ifndef org_apache_lucene_search_similarities_NormalizationH1_H
#define org_apache_lucene_search_similarities_NormalizationH1_H

#include "org/apache/lucene/search/similarities/Normalization.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
        }
        class Explanation;
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

          class NormalizationH1 : public ::org::apache::lucene::search::similarities::Normalization {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_8e1d952dd65cdc3a,
              mid_explain_77a68ba236144920,
              mid_getC_58aec2b64dff50c8,
              mid_tfn_761ab1c432346fd0,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalizationH1(jobject obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NormalizationH1(const NormalizationH1& obj) : ::org::apache::lucene::search::similarities::Normalization(obj) {}

            NormalizationH1();
            NormalizationH1(jfloat);

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
            jfloat getC() const;
            jdouble tfn(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(NormalizationH1);
          extern PyTypeObject *PY_TYPE(NormalizationH1);

          class t_NormalizationH1 {
          public:
            PyObject_HEAD
            NormalizationH1 object;
            static PyObject *wrap_Object(const NormalizationH1&);
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
