#ifndef org_apache_lucene_search_spans_Spans_H
#define org_apache_lucene_search_spans_Spans_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

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

          class Spans : public ::org::apache::lucene::search::DocIdSetIterator {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_asTwoPhaseIterator_6458a12a224a1c8a,
              mid_collect_810c6539c62abcf6,
              mid_endPosition_9972fcc56b44e79d,
              mid_nextStartPosition_9972fcc56b44e79d,
              mid_positionsCost_58aec2b64dff50c8,
              mid_startPosition_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              mid_width_9972fcc56b44e79d,
              mid_doStartCurrentDoc_f2cc1bce94666404,
              mid_doCurrentSpans_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Spans(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Spans(const Spans& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

            static jint NO_MORE_POSITIONS;

            Spans();

            ::org::apache::lucene::search::TwoPhaseIterator asTwoPhaseIterator() const;
            void collect(const ::org::apache::lucene::search::spans::SpanCollector &) const;
            jint endPosition() const;
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
          extern PyType_Def PY_TYPE_DEF(Spans);
          extern PyTypeObject *PY_TYPE(Spans);

          class t_Spans {
          public:
            PyObject_HEAD
            Spans object;
            static PyObject *wrap_Object(const Spans&);
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
