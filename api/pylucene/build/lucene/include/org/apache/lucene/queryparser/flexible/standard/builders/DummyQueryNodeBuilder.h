#ifndef org_apache_lucene_queryparser_flexible_standard_builders_DummyQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_DummyQueryNodeBuilder_H

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
        class TermQuery;
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

              class DummyQueryNodeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_build_f6da5efc526c39e2,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit DummyQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                DummyQueryNodeBuilder(const DummyQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                DummyQueryNodeBuilder();

                ::org::apache::lucene::search::TermQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyType_Def PY_TYPE_DEF(DummyQueryNodeBuilder);
              extern PyTypeObject *PY_TYPE(DummyQueryNodeBuilder);

              class t_DummyQueryNodeBuilder {
              public:
                PyObject_HEAD
                DummyQueryNodeBuilder object;
                static PyObject *wrap_Object(const DummyQueryNodeBuilder&);
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
