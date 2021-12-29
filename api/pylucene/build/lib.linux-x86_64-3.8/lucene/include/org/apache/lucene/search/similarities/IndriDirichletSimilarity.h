#ifndef org_apache_lucene_search_similarities_IndriDirichletSimilarity_H
#define org_apache_lucene_search_similarities_IndriDirichletSimilarity_H

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

          class IndriDirichletSimilarity : public ::org::apache::lucene::search::similarities::LMSimilarity {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_8e1d952dd65cdc3a,
              mid_init$_070af2e40388d15d,
              mid_init$_f196124a35795af7,
              mid_getMu_58aec2b64dff50c8,
              mid_getName_db9b55ba01e03e4b,
              mid_score_761ab1c432346fd0,
              mid_explain_f9756f2482a92b24,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndriDirichletSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndriDirichletSimilarity(const IndriDirichletSimilarity& obj) : ::org::apache::lucene::search::similarities::LMSimilarity(obj) {}

            IndriDirichletSimilarity();
            IndriDirichletSimilarity(jfloat);
            IndriDirichletSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &);
            IndriDirichletSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &, jfloat);

            jfloat getMu() const;
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
          extern PyType_Def PY_TYPE_DEF(IndriDirichletSimilarity);
          extern PyTypeObject *PY_TYPE(IndriDirichletSimilarity);

          class t_IndriDirichletSimilarity {
          public:
            PyObject_HEAD
            IndriDirichletSimilarity object;
            static PyObject *wrap_Object(const IndriDirichletSimilarity&);
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
