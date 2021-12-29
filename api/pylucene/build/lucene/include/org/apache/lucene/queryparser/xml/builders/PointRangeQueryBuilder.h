#ifndef org_apache_lucene_queryparser_xml_builders_PointRangeQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_PointRangeQueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class QueryBuilder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {

            class PointRangeQueryBuilder : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PointRangeQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PointRangeQueryBuilder(const PointRangeQueryBuilder& obj) : ::java::lang::Object(obj) {}

              PointRangeQueryBuilder();
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
        namespace xml {
          namespace builders {
            extern PyType_Def PY_TYPE_DEF(PointRangeQueryBuilder);
            extern PyTypeObject *PY_TYPE(PointRangeQueryBuilder);

            class t_PointRangeQueryBuilder {
            public:
              PyObject_HEAD
              PointRangeQueryBuilder object;
              static PyObject *wrap_Object(const PointRangeQueryBuilder&);
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
