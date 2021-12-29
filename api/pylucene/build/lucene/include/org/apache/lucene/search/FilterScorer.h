#ifndef org_apache_lucene_search_FilterScorer_H
#define org_apache_lucene_search_FilterScorer_H

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
        class DocIdSetIterator;
        class Weight;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FilterScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_85e03ccf00a30406,
            mid_init$_5af3f0166e4b059a,
            mid_docID_9972fcc56b44e79d,
            mid_iterator_173d81d7b8f93882,
            mid_score_58aec2b64dff50c8,
            mid_twoPhaseIterator_6458a12a224a1c8a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterScorer(const FilterScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          FilterScorer(const ::org::apache::lucene::search::Scorer &);
          FilterScorer(const ::org::apache::lucene::search::Scorer &, const ::org::apache::lucene::search::Weight &);

          jint docID() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          ::org::apache::lucene::search::TwoPhaseIterator twoPhaseIterator() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FilterScorer);
        extern PyTypeObject *PY_TYPE(FilterScorer);

        class t_FilterScorer {
        public:
          PyObject_HEAD
          FilterScorer object;
          static PyObject *wrap_Object(const FilterScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
