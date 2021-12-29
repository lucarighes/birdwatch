#ifndef org_apache_lucene_search_spans_SpanNotQuery$SpanNotWeight_H
#define org_apache_lucene_search_spans_SpanNotQuery$SpanNotWeight_H

#include "org/apache/lucene/search/spans/SpanWeight.h"

namespace java {
  namespace util {
    class Map;
    class Set;
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
        namespace spans {
          class SpanNotQuery;
          class SpanWeight$Postings;
          class Spans;
        }
        class IndexSearcher;
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

          class SpanNotQuery$SpanNotWeight : public ::org::apache::lucene::search::spans::SpanWeight {
           public:
            enum {
              mid_init$_8cfbe3ad1b441fcc,
              mid_extractTermStates_408bd889ee3beae5,
              mid_extractTerms_d5a4a8d4b806f0ba,
              mid_getSpans_219c078c64a446fd,
              mid_isCacheable_07cae694a8cf1c6d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanNotQuery$SpanNotWeight(jobject obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNotQuery$SpanNotWeight(const SpanNotQuery$SpanNotWeight& obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {}

            SpanNotQuery$SpanNotWeight(const ::org::apache::lucene::search::spans::SpanNotQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::search::spans::SpanWeight &, const ::org::apache::lucene::search::spans::SpanWeight &, jfloat);

            void extractTermStates(const ::java::util::Map &) const;
            void extractTerms(const ::java::util::Set &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanNotQuery$SpanNotWeight);
          extern PyTypeObject *PY_TYPE(SpanNotQuery$SpanNotWeight);

          class t_SpanNotQuery$SpanNotWeight {
          public:
            PyObject_HEAD
            SpanNotQuery$SpanNotWeight object;
            static PyObject *wrap_Object(const SpanNotQuery$SpanNotWeight&);
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
