#ifndef org_apache_lucene_search_similarities_TFIDFSimilarity_H
#define org_apache_lucene_search_similarities_TFIDFSimilarity_H

#include "org/apache/lucene/search/similarities/Similarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Similarity$SimScorer;
        }
        class TermStatistics;
        class Explanation;
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

          class TFIDFSimilarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_computeNorm_6ec3269102920d7a,
              mid_getDiscountOverlaps_8454bd5aa23fd11e,
              mid_idf_f850d9cfe8a8e47f,
              mid_idfExplain_a65c9ef6c8dde9e4,
              mid_idfExplain_d7ff9aaf392c6db9,
              mid_lengthNorm_384f078ef4b8f931,
              mid_scorer_a010a2835e08a10c,
              mid_setDiscountOverlaps_9d72768e8fdce2b7,
              mid_tf_8c8518d25218b9c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TFIDFSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TFIDFSimilarity(const TFIDFSimilarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            TFIDFSimilarity();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jboolean getDiscountOverlaps() const;
            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            jfloat lengthNorm(jint) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            void setDiscountOverlaps(jboolean) const;
            jfloat tf(jfloat) const;
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
          extern PyType_Def PY_TYPE_DEF(TFIDFSimilarity);
          extern PyTypeObject *PY_TYPE(TFIDFSimilarity);

          class t_TFIDFSimilarity {
          public:
            PyObject_HEAD
            TFIDFSimilarity object;
            static PyObject *wrap_Object(const TFIDFSimilarity&);
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
