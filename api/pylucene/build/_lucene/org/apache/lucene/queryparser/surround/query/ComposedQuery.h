#ifndef org_apache_lucene_queryparser_surround_query_ComposedQuery_H
#define org_apache_lucene_queryparser_surround_query_ComposedQuery_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Iterator;
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class BasicQueryFactory;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class ComposedQuery : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_f3e5aa525cb56d41,
                mid_getNrSubQueries_9972fcc56b44e79d,
                mid_getOperatorName_db9b55ba01e03e4b,
                mid_getSubQueriesIterator_233a192dadb0917d,
                mid_getSubQuery_c6a8d10d287a9d09,
                mid_isFieldsSubQueryAcceptable_8454bd5aa23fd11e,
                mid_isOperatorInfix_8454bd5aa23fd11e,
                mid_makeLuceneSubQueriesField_817b703da32439ca,
                mid_toString_db9b55ba01e03e4b,
                mid_recompose_d03990be0130160d,
                mid_getPrefixSeparator_db9b55ba01e03e4b,
                mid_getBracketOpen_db9b55ba01e03e4b,
                mid_getBracketClose_db9b55ba01e03e4b,
                mid_infixToString_90aa63c10985f260,
                mid_prefixToString_90aa63c10985f260,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ComposedQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ComposedQuery(const ComposedQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              ComposedQuery(const ::java::util::List &, jboolean, const ::java::lang::String &);

              jint getNrSubQueries() const;
              ::java::lang::String getOperatorName() const;
              ::java::util::Iterator getSubQueriesIterator() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery getSubQuery(jint) const;
              jboolean isFieldsSubQueryAcceptable() const;
              jboolean isOperatorInfix() const;
              ::java::util::List makeLuceneSubQueriesField(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::java::lang::String toString() const;
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
            extern PyType_Def PY_TYPE_DEF(ComposedQuery);
            extern PyTypeObject *PY_TYPE(ComposedQuery);

            class t_ComposedQuery {
            public:
              PyObject_HEAD
              ComposedQuery object;
              static PyObject *wrap_Object(const ComposedQuery&);
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
