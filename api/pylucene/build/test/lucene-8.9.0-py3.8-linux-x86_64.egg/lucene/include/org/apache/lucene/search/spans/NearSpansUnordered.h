#ifndef org_apache_lucene_search_spans_NearSpansUnordered_H
#define org_apache_lucene_search_spans_NearSpansUnordered_H

#include "org/apache/lucene/search/spans/ConjunctionSpans.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class Spans;
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

          class NearSpansUnordered : public ::org::apache::lucene::search::spans::ConjunctionSpans {
           public:
            enum {
              mid_init$_64683aefa58cdb7d,
              mid_collect_810c6539c62abcf6,
              mid_endPosition_9972fcc56b44e79d,
              mid_nextStartPosition_9972fcc56b44e79d,
              mid_startPosition_9972fcc56b44e79d,
              mid_width_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NearSpansUnordered(jobject obj) : ::org::apache::lucene::search::spans::ConjunctionSpans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NearSpansUnordered(const NearSpansUnordered& obj) : ::org::apache::lucene::search::spans::ConjunctionSpans(obj) {}

            NearSpansUnordered(jint, const ::java::util::List &);

            void collect(const ::org::apache::lucene::search::spans::SpanCollector &) const;
            jint endPosition() const;
            jint nextStartPosition() const;
            jint startPosition() const;
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
          extern PyType_Def PY_TYPE_DEF(NearSpansUnordered);
          extern PyTypeObject *PY_TYPE(NearSpansUnordered);

          class t_NearSpansUnordered {
          public:
            PyObject_HEAD
            NearSpansUnordered object;
            static PyObject *wrap_Object(const NearSpansUnordered&);
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
