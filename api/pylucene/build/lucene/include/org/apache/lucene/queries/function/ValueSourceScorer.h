#ifndef org_apache_lucene_queries_function_ValueSourceScorer_H
#define org_apache_lucene_queries_function_ValueSourceScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
        class TwoPhaseIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class ValueSourceScorer : public ::org::apache::lucene::search::Scorer {
           public:
            enum {
              mid_docID_9972fcc56b44e79d,
              mid_getMaxScore_384f078ef4b8f931,
              mid_iterator_173d81d7b8f93882,
              mid_matches_a1d30e1ee40c89a2,
              mid_score_58aec2b64dff50c8,
              mid_twoPhaseIterator_6458a12a224a1c8a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ValueSourceScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ValueSourceScorer(const ValueSourceScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

            jint docID() const;
            jfloat getMaxScore(jint) const;
            ::org::apache::lucene::search::DocIdSetIterator iterator() const;
            jboolean matches(jint) const;
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
      namespace queries {
        namespace function {
          extern PyType_Def PY_TYPE_DEF(ValueSourceScorer);
          extern PyTypeObject *PY_TYPE(ValueSourceScorer);

          class t_ValueSourceScorer {
          public:
            PyObject_HEAD
            ValueSourceScorer object;
            static PyObject *wrap_Object(const ValueSourceScorer&);
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
