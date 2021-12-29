#ifndef org_apache_lucene_search_similarities_LMSimilarity_H
#define org_apache_lucene_search_similarities_LMSimilarity_H

#include "org/apache/lucene/search/similarities/SimilarityBase.h"

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

          class LMSimilarity : public ::org::apache::lucene::search::similarities::SimilarityBase {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_070af2e40388d15d,
              mid_getName_db9b55ba01e03e4b,
              mid_toString_db9b55ba01e03e4b,
              mid_explain_f9756f2482a92b24,
              mid_newStats_0b411ec39c954c9c,
              mid_fillBasicStats_4a86bd7ff3b2c1a5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LMSimilarity(const LMSimilarity& obj) : ::org::apache::lucene::search::similarities::SimilarityBase(obj) {}

            LMSimilarity();
            LMSimilarity(const ::org::apache::lucene::search::similarities::LMSimilarity$CollectionModel &);

            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(LMSimilarity);
          extern PyTypeObject *PY_TYPE(LMSimilarity);

          class t_LMSimilarity {
          public:
            PyObject_HEAD
            LMSimilarity object;
            static PyObject *wrap_Object(const LMSimilarity&);
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
