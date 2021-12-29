#ifndef org_apache_lucene_search_similarities_SimilarityBase_H
#define org_apache_lucene_search_similarities_SimilarityBase_H

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
        namespace similarities {

          class SimilarityBase : public ::org::apache::lucene::search::similarities::Similarity {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_computeNorm_6ec3269102920d7a,
              mid_getDiscountOverlaps_8454bd5aa23fd11e,
              mid_log2_d089f34703408a66,
              mid_scorer_a010a2835e08a10c,
              mid_setDiscountOverlaps_9d72768e8fdce2b7,
              mid_toString_db9b55ba01e03e4b,
              mid_score_761ab1c432346fd0,
              mid_explain_f9756f2482a92b24,
              mid_explain_a84367e35a1ef83b,
              mid_newStats_0b411ec39c954c9c,
              mid_fillBasicStats_4a86bd7ff3b2c1a5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimilarityBase(jobject obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimilarityBase(const SimilarityBase& obj) : ::org::apache::lucene::search::similarities::Similarity(obj) {}

            SimilarityBase();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            jboolean getDiscountOverlaps() const;
            static jdouble log2(jdouble);
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
          extern PyType_Def PY_TYPE_DEF(SimilarityBase);
          extern PyTypeObject *PY_TYPE(SimilarityBase);

          class t_SimilarityBase {
          public:
            PyObject_HEAD
            SimilarityBase object;
            static PyObject *wrap_Object(const SimilarityBase&);
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
