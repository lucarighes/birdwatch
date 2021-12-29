#ifndef org_apache_lucene_search_spans_SpanWithinQuery$SpanWithinWeight_H
#define org_apache_lucene_search_spans_SpanWithinQuery$SpanWithinWeight_H

#include "org/apache/lucene/search/spans/SpanContainQuery$SpanContainWeight.h"

namespace java {
  namespace util {
    class Map;
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
      namespace index {
        class LeafReaderContext;
        class Term;
        class TermStates;
      }
      namespace search {
        class IndexSearcher;
        namespace spans {
          class SpanWeight$Postings;
          class SpanWeight;
          class Spans;
          class SpanWithinQuery;
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

          class SpanWithinQuery$SpanWithinWeight : public ::org::apache::lucene::search::spans::SpanContainQuery$SpanContainWeight {
           public:
            enum {
              mid_init$_47bcfeddb52a354d,
              mid_getSpans_219c078c64a446fd,
              mid_isCacheable_07cae694a8cf1c6d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanWithinQuery$SpanWithinWeight(jobject obj) : ::org::apache::lucene::search::spans::SpanContainQuery$SpanContainWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanWithinQuery$SpanWithinWeight(const SpanWithinQuery$SpanWithinWeight& obj) : ::org::apache::lucene::search::spans::SpanContainQuery$SpanContainWeight(obj) {}

            SpanWithinQuery$SpanWithinWeight(const ::org::apache::lucene::search::spans::SpanWithinQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::search::spans::SpanWeight &, const ::org::apache::lucene::search::spans::SpanWeight &, jfloat);

            ::org::apache::lucene::search::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::spans::SpanWeight$Postings &) const;
            jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanWithinQuery$SpanWithinWeight);
          extern PyTypeObject *PY_TYPE(SpanWithinQuery$SpanWithinWeight);

          class t_SpanWithinQuery$SpanWithinWeight {
          public:
            PyObject_HEAD
            SpanWithinQuery$SpanWithinWeight object;
            static PyObject *wrap_Object(const SpanWithinQuery$SpanWithinWeight&);
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
