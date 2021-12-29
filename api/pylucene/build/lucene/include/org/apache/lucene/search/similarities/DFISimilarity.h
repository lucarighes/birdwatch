#ifndef org_apache_lucene_search_similarities_DFISimilarity_H
#define org_apache_lucene_search_similarities_DFISimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Independence;
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

          class DFISimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_fabe01ec74aa5e7a,
              mid_getIndependence_11e5870ace20d03d,
              mid_toString_db9b55ba01e03e4b,
              mid_score_761ab1c432346fd0,
              mid_explain_a84367e35a1ef83b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DFISimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DFISimilarity(const DFISimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            DFISimilarity(const ::org::apache::lucene::search::similarities::Independence &);

            ::org::apache::lucene::search::similarities::Independence getIndependence() const;
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
          extern PyType_Def PY_TYPE_DEF(DFISimilarity);
          extern PyTypeObject *PY_TYPE(DFISimilarity);

          class t_DFISimilarity {
          public:
            PyObject_HEAD
            DFISimilarity object;
            static PyObject *wrap_Object(const DFISimilarity&);
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
