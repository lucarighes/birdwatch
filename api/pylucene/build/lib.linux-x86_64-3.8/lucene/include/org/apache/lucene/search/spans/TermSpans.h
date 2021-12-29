#ifndef org_apache_lucene_search_spans_TermSpans_H
#define org_apache_lucene_search_spans_TermSpans_H

#include "org/apache/lucene/search/spans/Spans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class PostingsEnum;
      }
      namespace search {
        namespace spans {
          class SpanCollector;
        }
        class LeafSimScorer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
        namespace spans {

          class TermSpans : public ::org::apache::lucene::search::spans::Spans {
           public:
            enum {
              mid_init$_7c1f9da66d9024d7,
              mid_advance_1e143afe1894d213,
              mid_collect_810c6539c62abcf6,
              mid_cost_2e5ae9edcb9b072f,
              mid_docID_9972fcc56b44e79d,
              mid_endPosition_9972fcc56b44e79d,
              mid_getPostings_f6f6440dd886c6cd,
              mid_nextDoc_9972fcc56b44e79d,
              mid_nextStartPosition_9972fcc56b44e79d,
              mid_positionsCost_58aec2b64dff50c8,
              mid_startPosition_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              mid_width_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermSpans(jobject obj) : ::org::apache::lucene::search::spans::Spans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermSpans(const TermSpans& obj) : ::org::apache::lucene::search::spans::Spans(obj) {}

            TermSpans(const ::org::apache::lucene::search::LeafSimScorer &, const ::org::apache::lucene::index::PostingsEnum &, const ::org::apache::lucene::index::Term &, jfloat);

            jint advance(jint) const;
            void collect(const ::org::apache::lucene::search::spans::SpanCollector &) const;
            jlong cost() const;
            jint docID() const;
            jint endPosition() const;
            ::org::apache::lucene::index::PostingsEnum getPostings() const;
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
          extern PyType_Def PY_TYPE_DEF(TermSpans);
          extern PyTypeObject *PY_TYPE(TermSpans);

          class t_TermSpans {
          public:
            PyObject_HEAD
            TermSpans object;
            static PyObject *wrap_Object(const TermSpans&);
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
