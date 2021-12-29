#ifndef org_apache_lucene_search_spans_FilterSpans_H
#define org_apache_lucene_search_spans_FilterSpans_H

#include "org/apache/lucene/search/spans/Spans.h"

namespace java {
  namespace lang {
    class Class;
    class String;
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
          class SpanCollector;
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
        namespace spans {

          class FilterSpans : public ::org::apache::lucene::search::spans::Spans {
           public:
            enum {
              mid_advance_1e143afe1894d213,
              mid_asTwoPhaseIterator_6458a12a224a1c8a,
              mid_collect_810c6539c62abcf6,
              mid_cost_2e5ae9edcb9b072f,
              mid_docID_9972fcc56b44e79d,
              mid_endPosition_9972fcc56b44e79d,
              mid_nextDoc_9972fcc56b44e79d,
              mid_nextStartPosition_9972fcc56b44e79d,
              mid_positionsCost_58aec2b64dff50c8,
              mid_startPosition_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              mid_width_9972fcc56b44e79d,
              mid_accept_ab707424c19ac906,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilterSpans(jobject obj) : ::org::apache::lucene::search::spans::Spans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FilterSpans(const FilterSpans& obj) : ::org::apache::lucene::search::spans::Spans(obj) {}

            jint advance(jint) const;
            ::org::apache::lucene::search::TwoPhaseIterator asTwoPhaseIterator() const;
            void collect(const ::org::apache::lucene::search::spans::SpanCollector &) const;
            jlong cost() const;
            jint docID() const;
            jint endPosition() const;
            jint nextDoc() const;
            jint nextStartPosition() const;
            jfloat positionsCost() const;
            jint startPosition() const;
            ::java::lang::String toString() const;
            jint width() const;
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
          extern PyType_Def PY_TYPE_DEF(FilterSpans);
          extern PyTypeObject *PY_TYPE(FilterSpans);

          class t_FilterSpans {
          public:
            PyObject_HEAD
            FilterSpans object;
            static PyObject *wrap_Object(const FilterSpans&);
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
