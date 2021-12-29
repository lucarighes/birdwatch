#ifndef org_apache_lucene_search_spans_SpanContainQuery$SpanContainWeight_H
#define org_apache_lucene_search_spans_SpanContainQuery$SpanContainWeight_H

#include "org/apache/lucene/search/spans/SpanWeight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanContainQuery;
        }
        class IndexSearcher;
      }
      namespace index {
        class Term;
        class TermStates;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {

          class SpanContainQuery$SpanContainWeight : public ::org::apache::lucene::search::spans::SpanWeight {
           public:
            enum {
              mid_init$_46ad6f4c51e52670,
              mid_extractTermStates_408bd889ee3beae5,
              mid_extractTerms_d5a4a8d4b806f0ba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainQuery$SpanContainWeight(jobject obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainQuery$SpanContainWeight(const SpanContainQuery$SpanContainWeight& obj) : ::org::apache::lucene::search::spans::SpanWeight(obj) {}

            SpanContainQuery$SpanContainWeight(const ::org::apache::lucene::search::spans::SpanContainQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, const ::org::apache::lucene::search::spans::SpanWeight &, const ::org::apache::lucene::search::spans::SpanWeight &, jfloat);

            void extractTermStates(const ::java::util::Map &) const;
            void extractTerms(const ::java::util::Set &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanContainQuery$SpanContainWeight);
          extern PyTypeObject *PY_TYPE(SpanContainQuery$SpanContainWeight);

          class t_SpanContainQuery$SpanContainWeight {
          public:
            PyObject_HEAD
            SpanContainQuery$SpanContainWeight object;
            static PyObject *wrap_Object(const SpanContainQuery$SpanContainWeight&);
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
