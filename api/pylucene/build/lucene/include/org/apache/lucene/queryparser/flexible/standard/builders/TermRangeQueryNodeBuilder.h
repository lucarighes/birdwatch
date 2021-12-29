#ifndef org_apache_lucene_queryparser_flexible_standard_builders_TermRangeQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_TermRangeQueryNodeBuilder_H

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
        class TermRangeQuery;
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

              class TermRangeQueryNodeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_build_824060876dd685eb,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit TermRangeQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                TermRangeQueryNodeBuilder(const TermRangeQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                TermRangeQueryNodeBuilder();

                ::org::apache::lucene::search::TermRangeQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyType_Def PY_TYPE_DEF(TermRangeQueryNodeBuilder);
              extern PyTypeObject *PY_TYPE(TermRangeQueryNodeBuilder);

              class t_TermRangeQueryNodeBuilder {
              public:
                PyObject_HEAD
                TermRangeQueryNodeBuilder object;
                static PyObject *wrap_Object(const TermRangeQueryNodeBuilder&);
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
