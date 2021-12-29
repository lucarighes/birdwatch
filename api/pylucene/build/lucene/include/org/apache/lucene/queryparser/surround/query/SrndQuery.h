#ifndef org_apache_lucene_queryparser_surround_query_SrndQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class SrndQuery;
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
    class Cloneable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class SrndQuery : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_clone_c098c03af75798aa,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getWeight_58aec2b64dff50c8,
                mid_getWeightOperator_db9b55ba01e03e4b,
                mid_getWeightString_db9b55ba01e03e4b,
                mid_hashCode_9972fcc56b44e79d,
                mid_isFieldsSubQueryAcceptable_8454bd5aa23fd11e,
                mid_isWeighted_8454bd5aa23fd11e,
                mid_makeLuceneQueryField_464e180a5423633e,
                mid_makeLuceneQueryFieldNoBoost_464e180a5423633e,
                mid_setWeight_8e1d952dd65cdc3a,
                mid_toString_db9b55ba01e03e4b,
                mid_weightToString_90aa63c10985f260,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndQuery(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndQuery(const SrndQuery& obj) : ::java::lang::Object(obj) {}

              SrndQuery();

              SrndQuery clone() const;
              jboolean equals(const ::java::lang::Object &) const;
              jfloat getWeight() const;
              ::java::lang::String getWeightOperator() const;
              ::java::lang::String getWeightString() const;
              jint hashCode() const;
              jboolean isFieldsSubQueryAcceptable() const;
              jboolean isWeighted() const;
              ::org::apache::lucene::search::Query makeLuceneQueryField(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              void setWeight(jfloat) const;
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
            extern PyType_Def PY_TYPE_DEF(SrndQuery);
            extern PyTypeObject *PY_TYPE(SrndQuery);

            class t_SrndQuery {
            public:
              PyObject_HEAD
              SrndQuery object;
              static PyObject *wrap_Object(const SrndQuery&);
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
