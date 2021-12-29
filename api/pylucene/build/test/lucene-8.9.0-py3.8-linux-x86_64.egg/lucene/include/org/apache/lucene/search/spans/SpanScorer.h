#ifndef org_apache_lucene_search_spans_SpanScorer_H
#define org_apache_lucene_search_spans_SpanScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
        namespace spans {
          class SpanWeight;
          class Spans;
        }
        class DocIdSetIterator;
        class LeafSimScorer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {

          class SpanScorer : public ::org::apache::lucene::search::Scorer {
           public:
            enum {
              mid_init$_9a4bce2e1839f54e,
              mid_docID_9972fcc56b44e79d,
              mid_getMaxScore_384f078ef4b8f931,
              mid_getSpans_849621887de963d0,
              mid_iterator_173d81d7b8f93882,
              mid_score_58aec2b64dff50c8,
              mid_twoPhaseIterator_6458a12a224a1c8a,
              mid_scoreCurrentDoc_58aec2b64dff50c8,
              mid_setFreqCurrentDoc_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanScorer(const SpanScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

            SpanScorer(const ::org::apache::lucene::search::spans::SpanWeight &, const ::org::apache::lucene::search::spans::Spans &, const ::org::apache::lucene::search::LeafSimScorer &);

            jint docID() const;
            jfloat getMaxScore(jint) const;
            ::org::apache::lucene::search::spans::Spans getSpans() const;
            ::org::apache::lucene::search::DocIdSetIterator iterator() const;
            jfloat score() const;
            ::org::apache::lucene::search::TwoPhaseIterator twoPhaseIterator() const;
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
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanScorer);
          extern PyTypeObject *PY_TYPE(SpanScorer);

          class t_SpanScorer {
          public:
            PyObject_HEAD
            SpanScorer object;
            static PyObject *wrap_Object(const SpanScorer&);
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
