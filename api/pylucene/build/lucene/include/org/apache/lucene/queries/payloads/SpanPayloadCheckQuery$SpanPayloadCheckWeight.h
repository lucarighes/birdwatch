#ifndef org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$SpanPayloadCheckWeight_H
#define org_apache_lucene_queries_payloads_SpanPayloadCheckQuery$SpanPayloadCheckWeight_H

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
      namespace queries {
        namespace payloads {
          class SpanPayloadCheckQuery;
        }
      }
      namespace search {
        class IndexSearcher;
        namespace spans {
          class SpanWeight$Postings;
          class Spans;
          class SpanScorer;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {

          class SpanPayloadCheckQuery$SpanPayloadCheckWeight : public ::org::apache::lucene::search::spans::SpanWeight {
           public:
            enum {
              mid_init$_4c49e6169f6fb74a,
              mid_extractTermStates_408bd889ee3beae5,
              mid_extractTerms_d5a4a8d4b806f0ba,
              mid_getSpans_219c078c64a446fd,
              mid_isCacheable_07cae694a8cf1c6d,
              mid_scorer_bf17eef266ac3994,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPayloadCheckQuery$SpanPayloadCheckWeight(jobject obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPayloadCheckQuery$SpanPayloadCheckWeight(const SpanPayloadCheckQuery$SpanPayloadCheckWeight& obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {}

            SpanPayloadCheckQuery$SpanPayloadCheckWeight(const ::org::apache::lucene::queries::payloads::SpanPayloadCheckQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::search::spans::SpanWeight &, jfloat);

            void extractTermStates(const ::java::util::Map &) const;
            void extractTerms(const ::java::util::Set &) const;
            ::org::apache::lucene::search::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::spans::SpanWeight$Postings &) const;
            jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::search::spans::SpanScorer scorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
      namespace queries {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(SpanPayloadCheckQuery$SpanPayloadCheckWeight);
          extern PyTypeObject *PY_TYPE(SpanPayloadCheckQuery$SpanPayloadCheckWeight);

          class t_SpanPayloadCheckQuery$SpanPayloadCheckWeight {
          public:
            PyObject_HEAD
            SpanPayloadCheckQuery$SpanPayloadCheckWeight object;
            static PyObject *wrap_Object(const SpanPayloadCheckQuery$SpanPayloadCheckWeight&);
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
