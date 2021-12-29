#ifndef org_apache_lucene_queryparser_surround_query_SimpleTerm_H
#define org_apache_lucene_queryparser_surround_query_SimpleTerm_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class SimpleTerm;
            class SimpleTerm$MatchingTermVisitor;
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
  namespace lang {
    class Comparable;
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

            class SimpleTerm : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_9d72768e8fdce2b7,
                mid_addSpanQueries_121a707f1abd1a95,
                mid_compareTo_d4ee376ea22394bf,
                mid_distanceSubQueryNotAllowed_db9b55ba01e03e4b,
                mid_getFieldOperator_db9b55ba01e03e4b,
                mid_getQuote_db9b55ba01e03e4b,
                mid_makeLuceneQueryFieldNoBoost_464e180a5423633e,
                mid_toString_db9b55ba01e03e4b,
                mid_toStringUnquoted_db9b55ba01e03e4b,
                mid_visitMatchingTerms_dbcd50bd393e5e56,
                mid_suffixToString_90aa63c10985f260,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimpleTerm(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SimpleTerm(const SimpleTerm& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              SimpleTerm(jboolean);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              jint compareTo(const SimpleTerm &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              ::java::lang::String getFieldOperator() const;
              ::java::lang::String getQuote() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::java::lang::String toString() const;
              ::java::lang::String toStringUnquoted() const;
              void visitMatchingTerms(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::SimpleTerm$MatchingTermVisitor &) const;
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
            extern PyType_Def PY_TYPE_DEF(SimpleTerm);
            extern PyTypeObject *PY_TYPE(SimpleTerm);

            class t_SimpleTerm {
            public:
              PyObject_HEAD
              SimpleTerm object;
              static PyObject *wrap_Object(const SimpleTerm&);
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
