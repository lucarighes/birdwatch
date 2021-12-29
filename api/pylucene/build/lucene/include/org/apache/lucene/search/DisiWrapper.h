#ifndef org_apache_lucene_search_DisiWrapper_H
#define org_apache_lucene_search_DisiWrapper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DisiWrapper;
        class TwoPhaseIterator;
        namespace spans {
          class Spans;
        }
        class Scorer;
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DisiWrapper : public ::java::lang::Object {
         public:
          enum {
            mid_init$_85e03ccf00a30406,
            mid_init$_ad2ce5bf0c6a2883,
            max_mid
          };

          enum {
            fid_approximation,
            fid_cost,
            fid_doc,
            fid_iterator,
            fid_lastApproxMatchDoc,
            fid_lastApproxNonMatchDoc,
            fid_matchCost,
            fid_next,
            fid_scorer,
            fid_spans,
            fid_twoPhaseView,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DisiWrapper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DisiWrapper(const DisiWrapper& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::DocIdSetIterator _get_approximation() const;
          jlong _get_cost() const;
          jint _get_doc() const;
          void _set_doc(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator _get_iterator() const;
          jint _get_lastApproxMatchDoc() const;
          void _set_lastApproxMatchDoc(jint) const;
          jint _get_lastApproxNonMatchDoc() const;
          void _set_lastApproxNonMatchDoc(jint) const;
          jfloat _get_matchCost() const;
          DisiWrapper _get_next() const;
          void _set_next(const DisiWrapper &) const;
          ::org::apache::lucene::search::Scorer _get_scorer() const;
          ::org::apache::lucene::search::spans::Spans _get_spans() const;
          ::org::apache::lucene::search::TwoPhaseIterator _get_twoPhaseView() const;

          DisiWrapper(const ::org::apache::lucene::search::Scorer &);
          DisiWrapper(const ::org::apache::lucene::search::spans::Spans &);
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
        extern PyType_Def PY_TYPE_DEF(DisiWrapper);
        extern PyTypeObject *PY_TYPE(DisiWrapper);

        class t_DisiWrapper {
        public:
          PyObject_HEAD
          DisiWrapper object;
          static PyObject *wrap_Object(const DisiWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
