#ifndef org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H
#define org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        namespace spans {
          class SpanTermQuery;
        }
        class TermQuery;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class TooManyBasicQueries;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class BasicQueryFactory : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_init$_040c4cd0390c5aff,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getMaxBasicQueries_9972fcc56b44e79d,
                mid_getNrQueriesMade_9972fcc56b44e79d,
                mid_hashCode_9972fcc56b44e79d,
                mid_newSpanTermQuery_0193cf0ff30cbd57,
                mid_newTermQuery_cad4074aebeba958,
                mid_toString_db9b55ba01e03e4b,
                mid_checkMax_f2cc1bce94666404,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BasicQueryFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BasicQueryFactory(const BasicQueryFactory& obj) : ::java::lang::Object(obj) {}

              BasicQueryFactory();
              BasicQueryFactory(jint);

              jboolean equals(const ::java::lang::Object &) const;
              jint getMaxBasicQueries() const;
              jint getNrQueriesMade() const;
              jint hashCode() const;
              ::org::apache::lucene::search::spans::SpanTermQuery newSpanTermQuery(const ::org::apache::lucene::index::Term &) const;
              ::org::apache::lucene::search::TermQuery newTermQuery(const ::org::apache::lucene::index::Term &) const;
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
            extern PyType_Def PY_TYPE_DEF(BasicQueryFactory);
            extern PyTypeObject *PY_TYPE(BasicQueryFactory);

            class t_BasicQueryFactory {
            public:
              PyObject_HEAD
              BasicQueryFactory object;
              static PyObject *wrap_Object(const BasicQueryFactory&);
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
