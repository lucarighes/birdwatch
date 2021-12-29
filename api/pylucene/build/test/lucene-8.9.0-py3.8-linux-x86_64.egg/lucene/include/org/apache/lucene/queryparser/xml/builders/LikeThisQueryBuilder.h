#ifndef org_apache_lucene_queryparser_xml_builders_LikeThisQueryBuilder_H
#define org_apache_lucene_queryparser_xml_builders_LikeThisQueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          class QueryBuilder;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
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
        namespace xml {
          namespace builders {

            class LikeThisQueryBuilder : public ::java::lang::Object {
             public:
              enum {
                mid_init$_836e2f683f228200,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LikeThisQueryBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LikeThisQueryBuilder(const LikeThisQueryBuilder& obj) : ::java::lang::Object(obj) {}

              LikeThisQueryBuilder(const ::org::apache::lucene::analysis::Analyzer &, const JArray< ::java::lang::String > &);
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
            extern PyType_Def PY_TYPE_DEF(LikeThisQueryBuilder);
            extern PyTypeObject *PY_TYPE(LikeThisQueryBuilder);

            class t_LikeThisQueryBuilder {
            public:
              PyObject_HEAD
              LikeThisQueryBuilder object;
              static PyObject *wrap_Object(const LikeThisQueryBuilder&);
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
