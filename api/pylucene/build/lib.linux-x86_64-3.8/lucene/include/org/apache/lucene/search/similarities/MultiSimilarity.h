#ifndef org_apache_lucene_search_similarities_MultiSimilarity_H
#define org_apache_lucene_search_similarities_MultiSimilarity_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Similarity$SimScorer;
        }
        class TermStatistics;
        class CollectionStatistics;
      }
      namespace index {
        class FieldInvertState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class MultiSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_900c50e712ff6bd8,
              mid_computeNorm_6ec3269102920d7a,
              mid_scorer_a010a2835e08a10c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiSimilarity(const MultiSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            MultiSimilarity(const JArray< ::org::apache::lucene::search::similarities::Similarity > &);

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
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
          extern PyType_Def PY_TYPE_DEF(MultiSimilarity);
          extern PyTypeObject *PY_TYPE(MultiSimilarity);

          class t_MultiSimilarity {
          public:
            PyObject_HEAD
            MultiSimilarity object;
            static PyObject *wrap_Object(const MultiSimilarity&);
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
