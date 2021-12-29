#ifndef org_apache_lucene_queryparser_surround_query_OrQuery_H
#define org_apache_lucene_queryparser_surround_query_OrQuery_H

#include "org/apache/lucene/queryparser/surround/query/ComposedQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class SrndQuery;
            class DistanceSubQuery;
            class SpanNearClauseFactory;
            class BasicQueryFactory;
          }
        }
      }
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
      namespace queryparser {
        namespace surround {
          namespace query {

            class OrQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
             public:
              enum {
                mid_init$_f3e5aa525cb56d41,
                mid_addSpanQueries_121a707f1abd1a95,
                mid_distanceSubQueryNotAllowed_db9b55ba01e03e4b,
                mid_makeLuceneQueryFieldNoBoost_464e180a5423633e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OrQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OrQuery(const OrQuery& obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {}

              OrQuery(const ::java::util::List &, jboolean, const ::java::lang::String &);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            extern PyType_Def PY_TYPE_DEF(OrQuery);
            extern PyTypeObject *PY_TYPE(OrQuery);

            class t_OrQuery {
            public:
              PyObject_HEAD
              OrQuery object;
              static PyObject *wrap_Object(const OrQuery&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
