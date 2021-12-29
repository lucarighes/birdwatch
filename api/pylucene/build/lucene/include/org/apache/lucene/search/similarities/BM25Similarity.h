#ifndef org_apache_lucene_search_similarities_BM25Similarity_H
#define org_apache_lucene_search_similarities_BM25Similarity_H

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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class BM25Similarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_5a9245193073da7b,
              mid_computeNorm_6ec3269102920d7a,
              mid_getB_58aec2b64dff50c8,
              mid_getDiscountOverlaps_8454bd5aa23fd11e,
              mid_getK1_58aec2b64dff50c8,
              mid_idfExplain_a65c9ef6c8dde9e4,
              mid_idfExplain_d7ff9aaf392c6db9,
              mid_scorer_a010a2835e08a10c,
              mid_setDiscountOverlaps_9d72768e8fdce2b7,
              mid_toString_db9b55ba01e03e4b,
              mid_idf_f850d9cfe8a8e47f,
              mid_avgFieldLength_4a638050489d339d,
              mid_scorePayload_3a38a999339f77c9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BM25Similarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BM25Similarity(const BM25Similarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            BM25Similarity();
            BM25Similarity(jfloat, jfloat);

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jfloat getB() const;
            jboolean getDiscountOverlaps() const;
            jfloat getK1() const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            void setDiscountOverlaps(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(BM25Similarity);
          extern PyTypeObject *PY_TYPE(BM25Similarity);

          class t_BM25Similarity {
          public:
            PyObject_HEAD
            BM25Similarity object;
            static PyObject *wrap_Object(const BM25Similarity&);
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
