#ifndef org_apache_lucene_search_spans_SpanContainingQuery$SpanContainingWeight_H
#define org_apache_lucene_search_spans_SpanContainingQuery$SpanContainingWeight_H

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
          class SpanContainingQuery;
          class SpanWeight;
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
        namespace spans {

          class SpanContainingQuery$SpanContainingWeight : public ::org::apache::lucene::search::spans::SpanContainQuery$SpanContainWeight {
           public:
            enum {
              mid_init$_92acb82a86ed74ed,
              mid_getSpans_219c078c64a446fd,
              mid_isCacheable_07cae694a8cf1c6d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainingQuery$SpanContainingWeight(jobject obj) : ::org::apache::lucene::search::spans::SpanContainQuery$SpanContainWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainingQuery$SpanContainingWeight(const SpanContainingQuery$SpanContainingWeight& obj) : ::org::apache::lucene::search::spans::SpanContainQuery$SpanContainWeight(obj) {}

            SpanContainingQuery$SpanContainingWeight(const ::org::apache::lucene::search::spans::SpanContainingQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::search::spans::SpanWeight &, const ::org::apache::lucene::search::spans::SpanWeight &, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(SpanContainingQuery$SpanContainingWeight);
          extern PyTypeObject *PY_TYPE(SpanContainingQuery$SpanContainingWeight);

          class t_SpanContainingQuery$SpanContainingWeight {
          public:
            PyObject_HEAD
            SpanContainingQuery$SpanContainingWeight object;
            static PyObject *wrap_Object(const SpanContainingQuery$SpanContainingWeight&);
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
