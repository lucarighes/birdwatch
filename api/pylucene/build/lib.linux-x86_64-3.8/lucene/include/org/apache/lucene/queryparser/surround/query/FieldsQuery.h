#ifndef org_apache_lucene_queryparser_surround_query_FieldsQuery_H
#define org_apache_lucene_queryparser_surround_query_FieldsQuery_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
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

            class FieldsQuery : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_07be11e94e0310de,
                mid_init$_96ab657acabd39fc,
                mid_getFieldNames_49ec78390f08338a,
                mid_getFieldOperator_8eea1dd85c3239c3,
                mid_isFieldsSubQueryAcceptable_8454bd5aa23fd11e,
                mid_makeLuceneQueryFieldNoBoost_464e180a5423633e,
                mid_makeLuceneQueryNoBoost_8e3835083753eaea,
                mid_toString_db9b55ba01e03e4b,
                mid_fieldNamesToString_90aa63c10985f260,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldsQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldsQuery(const FieldsQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              FieldsQuery(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &, const ::java::lang::String &, jchar);
              FieldsQuery(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &, const ::java::util::List &, jchar);

              ::java::util::List getFieldNames() const;
              jchar getFieldOperator() const;
              jboolean isFieldsSubQueryAcceptable() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryNoBoost(const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
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
            extern PyType_Def PY_TYPE_DEF(FieldsQuery);
            extern PyTypeObject *PY_TYPE(FieldsQuery);

            class t_FieldsQuery {
            public:
              PyObject_HEAD
              FieldsQuery object;
              static PyObject *wrap_Object(const FieldsQuery&);
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
