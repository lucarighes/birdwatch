#ifndef org_apache_lucene_search_similarities_LMJelinekMercerSimilarity_H
#define org_apache_lucene_search_similarities_LMJelinekMercerSimilarity_H

#include "org/apache/lucene/search/similarities/LMSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class LMSimilarity$CollectionModel;
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

          class LMJelinekMercerSimilarity : public ::org::apache::lucene::search::similarities::LMSimilarity {
           public:
            enum {
              mid_init$_8e1d952dd65cdc3a,
              mid_init$_f196124a35795af7,
              mid_getLambda_58aec2b64dff50c8,
              mid_getName_db9b55ba01e03e4b,
              mid_score_761ab1c432346fd0,
              mid_explain_a84367e35a1ef83b,
              mid_explain_f9756f2482a92b24,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMJelinekMercerSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LMJelinekMercerSimilarity(const LMJelinekMercerSimilarity& obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {}

            LMJelinekMercerSimilarity(jfloat);
            LMJelinekMercerSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jfloat);

            jfloat getLambda() const;
            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(LMJelinekMercerSimilarity);
          extern PyTypeObject *PY_TYPE(LMJelinekMercerSimilarity);

          class t_LMJelinekMercerSimilarity {
          public:
            PyObject_HEAD
            LMJelinekMercerSimilarity object;
            static PyObject *wrap_Object(const LMJelinekMercerSimilarity&);
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
