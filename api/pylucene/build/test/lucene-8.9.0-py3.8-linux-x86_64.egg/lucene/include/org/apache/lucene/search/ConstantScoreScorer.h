#ifndef org_apache_lucene_search_ConstantScoreScorer_H
#define org_apache_lucene_search_ConstantScoreScorer_H

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
        class ScoreMode;
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

        class ConstantScoreScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_25e5c5ba5465d59e,
            mid_init$_08a5a2c5834c5277,
            mid_docID_9972fcc56b44e79d,
            mid_getMaxScore_384f078ef4b8f931,
            mid_iterator_173d81d7b8f93882,
            mid_score_58aec2b64dff50c8,
            mid_setMinCompetitiveScore_8e1d952dd65cdc3a,
            mid_twoPhaseIterator_6458a12a224a1c8a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantScoreScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConstantScoreScorer(const ConstantScoreScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          ConstantScoreScorer(const ::org::apache::lucene::search::Weight &, jfloat, const ::org::apache::lucene::search::ScoreMode &, const ::org::apache::lucene::search::DocIdSetIterator &);
          ConstantScoreScorer(const ::org::apache::lucene::search::Weight &, jfloat, const ::org::apache::lucene::search::ScoreMode &, const ::org::apache::lucene::search::TwoPhaseIterator &);

          jint docID() const;
          jfloat getMaxScore(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(ConstantScoreScorer);
        extern PyTypeObject *PY_TYPE(ConstantScoreScorer);

        class t_ConstantScoreScorer {
        public:
          PyObject_HEAD
          ConstantScoreScorer object;
          static PyObject *wrap_Object(const ConstantScoreScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
