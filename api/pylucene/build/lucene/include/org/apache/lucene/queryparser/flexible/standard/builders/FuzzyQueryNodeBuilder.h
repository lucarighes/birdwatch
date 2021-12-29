#ifndef org_apache_lucene_queryparser_flexible_standard_builders_FuzzyQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_FuzzyQueryNodeBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
            }
          }
          namespace standard {
            namespace builders {
              class StandardQueryBuilder;
            }
          }
        }
      }
      namespace search {
        class FuzzyQuery;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace builders {

              class FuzzyQueryNodeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_build_ac9d0204ceba3a7a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FuzzyQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FuzzyQueryNodeBuilder(const FuzzyQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                FuzzyQueryNodeBuilder();

                ::org::apache::lucene::search::FuzzyQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
              };
            }
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
        namespace flexible {
          namespace standard {
            namespace builders {
              extern PyType_Def PY_TYPE_DEF(FuzzyQueryNodeBuilder);
              extern PyTypeObject *PY_TYPE(FuzzyQueryNodeBuilder);

              class t_FuzzyQueryNodeBuilder {
              public:
                PyObject_HEAD
                FuzzyQueryNodeBuilder object;
                static PyObject *wrap_Object(const FuzzyQueryNodeBuilder&);
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
}

#endif
