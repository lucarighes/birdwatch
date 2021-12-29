#ifndef org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H
#define org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Term;
      }
      namespace search {
        namespace spans {
          class SpanQuery;
        }
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
      namespace queryparser {
        namespace surround {
          namespace query {

            class SpanNearClauseFactory : public ::java::lang::Object {
             public:
              enum {
                mid_init$_65ddf5b5d63d92de,
                mid_addSpanQuery_ede25bb9d48237ac,
                mid_addTermWeighted_cbd6f15a00eb0d92,
                mid_clear_f2cc1bce94666404,
                mid_getBasicQueryFactory_eb92ea6d572623b0,
                mid_getFieldName_db9b55ba01e03e4b,
                mid_getIndexReader_3268165ce941bf52,
                mid_makeSpanClause_5a8903ceec80d1b9,
                mid_size_9972fcc56b44e79d,
                mid_addSpanQueryWeighted_d187e1529c821aa4,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanNearClauseFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SpanNearClauseFactory(const SpanNearClauseFactory& obj) : ::java::lang::Object(obj) {}

              SpanNearClauseFactory(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &);

              void addSpanQuery(const ::org::apache::lucene::search::Query &) const;
              void addTermWeighted(const ::org::apache::lucene::index::Term &, jfloat) const;
              void clear() const;
              ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory getBasicQueryFactory() const;
              ::java::lang::String getFieldName() const;
              ::org::apache::lucene::index::IndexReader getIndexReader() const;
              ::org::apache::lucene::search::spans::SpanQuery makeSpanClause() const;
              jint size() const;
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
            extern PyType_Def PY_TYPE_DEF(SpanNearClauseFactory);
            extern PyTypeObject *PY_TYPE(SpanNearClauseFactory);

            class t_SpanNearClauseFactory {
            public:
              PyObject_HEAD
              SpanNearClauseFactory object;
              static PyObject *wrap_Object(const SpanNearClauseFactory&);
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
