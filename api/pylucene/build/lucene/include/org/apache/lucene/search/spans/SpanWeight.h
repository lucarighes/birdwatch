#ifndef org_apache_lucene_search_spans_SpanWeight_H
#define org_apache_lucene_search_spans_SpanWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace java {
  namespace util {
    class Map;
  }
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
      namespace index {
        class LeafReaderContext;
        class Term;
        class TermStates;
      }
      namespace search {
        namespace spans {
          class SpanQuery;
          class SpanWeight$Postings;
          class Spans;
          class SpanScorer;
        }
        class IndexSearcher;
        class Explanation;
        class LeafSimScorer;
        class Matches;
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

          class SpanWeight : public ::org::apache::lucene::search::Weight {
           public:
            enum {
              mid_init$_bc4ce9437bbc9edf,
              mid_explain_4cf8bab0b7954f4a,
              mid_extractTermStates_408bd889ee3beae5,
              mid_getSimScorer_b7b613d5394933ba,
              mid_getSpans_219c078c64a446fd,
              mid_matches_a177ac6f01316d86,
              mid_scorer_bf17eef266ac3994,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanWeight(const SpanWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

            SpanWeight(const ::org::apache::lucene::search::spans::SpanQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, jfloat);

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            void extractTermStates(const ::java::util::Map &) const;
            ::org::apache::lucene::search::LeafSimScorer getSimScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::spans::SpanWeight$Postings &) const;
            ::org::apache::lucene::search::Matches matches(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            ::org::apache::lucene::search::spans::SpanScorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanWeight);
          extern PyTypeObject *PY_TYPE(SpanWeight);

          class t_SpanWeight {
          public:
            PyObject_HEAD
            SpanWeight object;
            static PyObject *wrap_Object(const SpanWeight&);
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
