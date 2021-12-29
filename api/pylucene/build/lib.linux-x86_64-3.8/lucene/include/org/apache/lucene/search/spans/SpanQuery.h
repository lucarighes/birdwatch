#ifndef org_apache_lucene_search_spans_SpanQuery_H
#define org_apache_lucene_search_spans_SpanQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
  }
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
        class IndexSearcher;
        namespace spans {
          class SpanWeight;
        }
        class ScoreMode;
      }
      namespace index {
        class Term;
        class TermStates;
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

          class SpanQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_createWeight_5baab4cc5ccc46b6,
              mid_getField_db9b55ba01e03e4b,
              mid_getTermStates_55ed71d210968db1,
              mid_getTermStates_995d3364c77f1806,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanQuery(const SpanQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            SpanQuery();

            ::org::apache::lucene::search::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            ::java::lang::String getField() const;
            static ::java::util::Map getTermStates(const JArray< ::org::apache::lucene::search::spans::SpanWeight > &);
            static ::java::util::Map getTermStates(const ::java::util::Collection &);
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
          extern PyType_Def PY_TYPE_DEF(SpanQuery);
          extern PyTypeObject *PY_TYPE(SpanQuery);

          class t_SpanQuery {
          public:
            PyObject_HEAD
            SpanQuery object;
            static PyObject *wrap_Object(const SpanQuery&);
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
