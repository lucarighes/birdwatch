#ifndef org_apache_lucene_search_spans_SpanContainingQuery_H
#define org_apache_lucene_search_spans_SpanContainingQuery_H

#include "org/apache/lucene/search/spans/SpanContainQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {
          class SpanQuery;
          class SpanWeight;
        }
        class IndexSearcher;
        class ScoreMode;
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

          class SpanContainingQuery : public ::org::apache::lucene::search::spans::SpanContainQuery {
           public:
            enum {
              mid_init$_5a5cbe5f748d0153,
              mid_createWeight_5baab4cc5ccc46b6,
              mid_toString_9bfa75c9f141b67f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanContainingQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanContainQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanContainingQuery(const SpanContainingQuery& obj) : ::org::apache::lucene::search::spans::SpanContainQuery(obj) {}

            SpanContainingQuery(const ::org::apache::lucene::search::spans::SpanQuery &, const ::org::apache::lucene::search::spans::SpanQuery &);

            ::org::apache::lucene::search::spans::SpanWeight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanContainingQuery);
          extern PyTypeObject *PY_TYPE(SpanContainingQuery);

          class t_SpanContainingQuery {
          public:
            PyObject_HEAD
            SpanContainingQuery object;
            static PyObject *wrap_Object(const SpanContainingQuery&);
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
