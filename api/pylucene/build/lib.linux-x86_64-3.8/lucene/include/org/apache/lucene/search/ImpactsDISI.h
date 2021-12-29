#ifndef org_apache_lucene_search_ImpactsDISI_H
#define org_apache_lucene_search_ImpactsDISI_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Similarity$SimScorer;
        }
      }
      namespace index {
        class ImpactsSource;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ImpactsDISI : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_6bcada475ee35b7c,
            mid_advance_1e143afe1894d213,
            mid_advanceShallow_1e143afe1894d213,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_getMaxScore_384f078ef4b8f931,
            mid_nextDoc_9972fcc56b44e79d,
            mid_setMinCompetitiveScore_8e1d952dd65cdc3a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ImpactsDISI(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ImpactsDISI(const ImpactsDISI& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          ImpactsDISI(const ::org::apache::lucene::search::DocIdSetIterator &, const ::org::apache::lucene::index::ImpactsSource &, const ::org::apache::lucene::search::similarities::Similarity$SimScorer &);

          jint advance(jint) const;
          jint advanceShallow(jint) const;
          jlong cost() const;
          jint docID() const;
          jfloat getMaxScore(jint) const;
          jint nextDoc() const;
          void setMinCompetitiveScore(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(ImpactsDISI);
        extern PyTypeObject *PY_TYPE(ImpactsDISI);

        class t_ImpactsDISI {
        public:
          PyObject_HEAD
          ImpactsDISI object;
          static PyObject *wrap_Object(const ImpactsDISI&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
