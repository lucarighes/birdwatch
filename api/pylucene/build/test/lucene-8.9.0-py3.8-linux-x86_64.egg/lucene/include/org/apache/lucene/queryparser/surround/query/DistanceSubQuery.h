#ifndef org_apache_lucene_queryparser_surround_query_DistanceSubQuery_H
#define org_apache_lucene_queryparser_surround_query_DistanceSubQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class SpanNearClauseFactory;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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

            class DistanceSubQuery : public ::java::lang::Object {
             public:
              enum {
                mid_addSpanQueries_121a707f1abd1a95,
                mid_distanceSubQueryNotAllowed_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DistanceSubQuery(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DistanceSubQuery(const DistanceSubQuery& obj) : ::java::lang::Object(obj) {}

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
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
            extern PyType_Def PY_TYPE_DEF(DistanceSubQuery);
            extern PyTypeObject *PY_TYPE(DistanceSubQuery);

            class t_DistanceSubQuery {
            public:
              PyObject_HEAD
              DistanceSubQuery object;
              static PyObject *wrap_Object(const DistanceSubQuery&);
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
