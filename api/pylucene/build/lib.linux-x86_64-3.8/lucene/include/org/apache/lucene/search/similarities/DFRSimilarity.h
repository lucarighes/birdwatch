#ifndef org_apache_lucene_search_similarities_DFRSimilarity_H
#define org_apache_lucene_search_similarities_DFRSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Normalization;
          class BasicModel;
          class AfterEffect;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class DFRSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_e7a42c4b30fe58ca,
              mid_getAfterEffect_e807af5453faacc2,
              mid_getBasicModel_30af8e1889f30d21,
              mid_getNormalization_c47c4a90a93ef116,
              mid_toString_db9b55ba01e03e4b,
              mid_score_761ab1c432346fd0,
              mid_explain_f9756f2482a92b24,
              mid_explain_a84367e35a1ef83b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DFRSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DFRSimilarity(const DFRSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            DFRSimilarity(const ::org::apache::lucene::search::similarities::BasicModel &, const ::org::apache::lucene::search::similarities::AfterEffect &, const ::org::apache::lucene::search::similarities::Normalization &);

            ::org::apache::lucene::search::similarities::AfterEffect getAfterEffect() const;
            ::org::apache::lucene::search::similarities::BasicModel getBasicModel() const;
            ::org::apache::lucene::search::similarities::Normalization getNormalization() const;
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
          extern PyType_Def PY_TYPE_DEF(DFRSimilarity);
          extern PyTypeObject *PY_TYPE(DFRSimilarity);

          class t_DFRSimilarity {
          public:
            PyObject_HEAD
            DFRSimilarity object;
            static PyObject *wrap_Object(const DFRSimilarity&);
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
