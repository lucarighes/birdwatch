#ifndef org_apache_lucene_queryparser_flexible_core_nodes_NoTokenFoundQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_NoTokenFoundQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/DeletedQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              class EscapeQuerySyntax;
            }
            namespace nodes {
              class QueryNode;
            }
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
    class CharSequence;
    class CloneNotSupportedException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {

              class NoTokenFoundQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::DeletedQueryNode {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_cloneTree_7f4134ae4682ace0,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit NoTokenFoundQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::DeletedQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                NoTokenFoundQueryNode(const NoTokenFoundQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::DeletedQueryNode(obj) {}

                NoTokenFoundQueryNode();

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
                ::java::lang::String toString() const;
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
          namespace core {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(NoTokenFoundQueryNode);
              extern PyTypeObject *PY_TYPE(NoTokenFoundQueryNode);

              class t_NoTokenFoundQueryNode {
              public:
                PyObject_HEAD
                NoTokenFoundQueryNode object;
                static PyObject *wrap_Object(const NoTokenFoundQueryNode&);
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
