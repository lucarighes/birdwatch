#ifndef org_apache_lucene_search_similarity_LegacyBM25Similarity_H
#define org_apache_lucene_search_similarity_LegacyBM25Similarity_H

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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarity {

          class LegacyBM25Similarity : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_5a9245193073da7b,
              mid_computeNorm_6ec3269102920d7a,
              mid_getB_58aec2b64dff50c8,
              mid_getDiscountOverlaps_8454bd5aa23fd11e,
              mid_getK1_58aec2b64dff50c8,
              mid_scorer_a010a2835e08a10c,
              mid_setDiscountOverlaps_9d72768e8fdce2b7,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegacyBM25Similarity(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegacyBM25Similarity(const LegacyBM25Similarity& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            LegacyBM25Similarity();
            LegacyBM25Similarity(jfloat, jfloat);

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jfloat getB() const;
            jboolean getDiscountOverlaps() const;
            jfloat getK1() const;
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
        namespace similarity {
          extern PyType_Def PY_TYPE_DEF(LegacyBM25Similarity);
          extern PyTypeObject *PY_TYPE(LegacyBM25Similarity);

          class t_LegacyBM25Similarity {
          public:
            PyObject_HEAD
            LegacyBM25Similarity object;
            static PyObject *wrap_Object(const LegacyBM25Similarity&);
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
