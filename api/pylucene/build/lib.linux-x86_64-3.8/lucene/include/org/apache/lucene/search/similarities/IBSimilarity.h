#ifndef org_apache_lucene_search_similarities_IBSimilarity_H
#define org_apache_lucene_search_similarities_IBSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Lambda;
          class Distribution;
          class Normalization;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class IBSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_20f20e88b39d704a,
              mid_getDistribution_26eb281901728b3d,
              mid_getLambda_ee00d489addea2bb,
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

            explicit IBSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IBSimilarity(const IBSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            IBSimilarity(const ::org::apache::lucene::search::similarities::Distribution &, const ::org::apache::lucene::search::similarities::Lambda &, const ::org::apache::lucene::search::similarities::Normalization &);

            ::org::apache::lucene::search::similarities::Distribution getDistribution() const;
            ::org::apache::lucene::search::similarities::Lambda getLambda() const;
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
          extern PyType_Def PY_TYPE_DEF(IBSimilarity);
          extern PyTypeObject *PY_TYPE(IBSimilarity);

          class t_IBSimilarity {
          public:
            PyObject_HEAD
            IBSimilarity object;
            static PyObject *wrap_Object(const IBSimilarity&);
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
