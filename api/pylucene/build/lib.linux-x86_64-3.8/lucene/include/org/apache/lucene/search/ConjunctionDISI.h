#ifndef org_apache_lucene_search_ConjunctionDISI_H
#define org_apache_lucene_search_ConjunctionDISI_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace util {
    class Collection;
    class List;
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
      namespace search {
        class Scorer;
        namespace spans {
          class Spans;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ConjunctionDISI : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_advance_1e143afe1894d213,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_intersectIterators_b5cd02c6ae5f349e,
            mid_intersectScorers_0c9625fbb0af5641,
            mid_intersectSpans_b5cd02c6ae5f349e,
            mid_nextDoc_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConjunctionDISI(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConjunctionDISI(const ConjunctionDISI& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          static ::org::apache::lucene::search::DocIdSetIterator intersectIterators(const ::java::util::List &);
          static ::org::apache::lucene::search::DocIdSetIterator intersectScorers(const ::java::util::Collection &);
          static ::org::apache::lucene::search::DocIdSetIterator intersectSpans(const ::java::util::List &);
          jint nextDoc() const;
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
        extern PyType_Def PY_TYPE_DEF(ConjunctionDISI);
        extern PyTypeObject *PY_TYPE(ConjunctionDISI);

        class t_ConjunctionDISI {
        public:
          PyObject_HEAD
          ConjunctionDISI object;
          static PyObject *wrap_Object(const ConjunctionDISI&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
