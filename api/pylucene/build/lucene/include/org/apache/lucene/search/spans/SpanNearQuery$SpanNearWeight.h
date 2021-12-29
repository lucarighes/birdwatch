#ifndef org_apache_lucene_search_spans_SpanNearQuery$SpanNearWeight_H
#define org_apache_lucene_search_spans_SpanNearQuery$SpanNearWeight_H

#include "org/apache/lucene/search/spans/SpanWeight.h"

namespace java {
  namespace util {
    class Map;
    class Set;
    class List;
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
          class SpanNearQuery;
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

          class SpanNearQuery$SpanNearWeight : public ::org::apache::lucene::search::spans::SpanWeight {
           public:
            enum {
              mid_init$_5d195f7f863db449,
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

            explicit SpanNearQuery$SpanNearWeight(jobject obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanNearQuery$SpanNearWeight(const SpanNearQuery$SpanNearWeight& obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {}

            SpanNearQuery$SpanNearWeight(const ::org::apache::lucene::search::spans::SpanNearQuery &, const ::java::util::List &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, jfloat);

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
          extern PyType_Def PY_TYPE_DEF(SpanNearQuery$SpanNearWeight);
          extern PyTypeObject *PY_TYPE(SpanNearQuery$SpanNearWeight);

          class t_SpanNearQuery$SpanNearWeight {
          public:
            PyObject_HEAD
            SpanNearQuery$SpanNearWeight object;
            static PyObject *wrap_Object(const SpanNearQuery$SpanNearWeight&);
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
