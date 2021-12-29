#ifndef org_apache_lucene_queryparser_surround_query_DistanceQuery_H
#define org_apache_lucene_queryparser_surround_query_DistanceQuery_H

#include "org/apache/lucene/queryparser/surround/query/ComposedQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
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

            class DistanceQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
             public:
              enum {
                mid_init$_2932ce8a7caf0f3d,
                mid_addSpanQueries_121a707f1abd1a95,
                mid_distanceSubQueryNotAllowed_db9b55ba01e03e4b,
                mid_getOpDistance_9972fcc56b44e79d,
                mid_getSpanNearQuery_45b62b4e1b5f8a1c,
                mid_makeLuceneQueryFieldNoBoost_464e180a5423633e,
                mid_subQueriesOrdered_8454bd5aa23fd11e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DistanceQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DistanceQuery(const DistanceQuery& obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {}

              DistanceQuery(const ::java::util::List &, jboolean, jint, const ::java::lang::String &, jboolean);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              jint getOpDistance() const;
              ::org::apache::lucene::search::Query getSpanNearQuery(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              jboolean subQueriesOrdered() const;
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
            extern PyType_Def PY_TYPE_DEF(DistanceQuery);
            extern PyTypeObject *PY_TYPE(DistanceQuery);

            class t_DistanceQuery {
            public:
              PyObject_HEAD
              DistanceQuery object;
              static PyObject *wrap_Object(const DistanceQuery&);
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
