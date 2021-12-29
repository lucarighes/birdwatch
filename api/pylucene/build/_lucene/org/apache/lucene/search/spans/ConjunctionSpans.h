#ifndef org_apache_lucene_search_spans_ConjunctionSpans_H
#define org_apache_lucene_search_spans_ConjunctionSpans_H

#include "org/apache/lucene/search/spans/Spans.h"

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
        class TwoPhaseIterator;
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

          class ConjunctionSpans : public ::org::apache::lucene::search::spans::Spans {
           public:
            enum {
              mid_advance_1e143afe1894d213,
              mid_asTwoPhaseIterator_6458a12a224a1c8a,
              mid_cost_2e5ae9edcb9b072f,
              mid_docID_9972fcc56b44e79d,
              mid_getSubSpans_28b3d0f8ac88aead,
              mid_nextDoc_9972fcc56b44e79d,
              mid_positionsCost_58aec2b64dff50c8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConjunctionSpans(jobject obj) : ::org::apache::lucene::search::spans::Spans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConjunctionSpans(const ConjunctionSpans& obj) : ::org::apache::lucene::search::spans::Spans(obj) {}

            jint advance(jint) const;
            ::org::apache::lucene::search::TwoPhaseIterator asTwoPhaseIterator() const;
            jlong cost() const;
            jint docID() const;
            JArray< ::org::apache::lucene::search::spans::Spans > getSubSpans() const;
            jint nextDoc() const;
            jfloat positionsCost() const;
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
          extern PyType_Def PY_TYPE_DEF(ConjunctionSpans);
          extern PyTypeObject *PY_TYPE(ConjunctionSpans);

          class t_ConjunctionSpans {
          public:
            PyObject_HEAD
            ConjunctionSpans object;
            static PyObject *wrap_Object(const ConjunctionSpans&);
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
