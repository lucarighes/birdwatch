#ifndef org_apache_lucene_search_Scorer_H
#define org_apache_lucene_search_Scorer_H

#include "org/apache/lucene/search/Scorable.h"

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

        class Scorer : public ::org::apache::lucene::search::Scorable {
         public:
          enum {
            mid_advanceShallow_1e143afe1894d213,
            mid_getMaxScore_384f078ef4b8f931,
            mid_getWeight_f9ac4832bc7a84ae,
            mid_iterator_173d81d7b8f93882,
            mid_twoPhaseIterator_6458a12a224a1c8a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorer(jobject obj) : ::org::apache::lucene::search::Scorable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Scorer(const Scorer& obj) : ::org::apache::lucene::search::Scorable(obj) {}

          jint advanceShallow(jint) const;
          jfloat getMaxScore(jint) const;
          ::org::apache::lucene::search::Weight getWeight() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
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
        extern PyType_Def PY_TYPE_DEF(Scorer);
        extern PyTypeObject *PY_TYPE(Scorer);

        class t_Scorer {
        public:
          PyObject_HEAD
          Scorer object;
          static PyObject *wrap_Object(const Scorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
