#ifndef org_apache_lucene_queryparser_flexible_core_nodes_BooleanQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_BooleanQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"

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
  namespace util {
    class List;
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

              class BooleanQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_d03990be0130160d,
                  mid_cloneTree_7f4134ae4682ace0,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit BooleanQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                BooleanQueryNode(const BooleanQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                BooleanQueryNode(const ::java::util::List &);

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
              extern PyType_Def PY_TYPE_DEF(BooleanQueryNode);
              extern PyTypeObject *PY_TYPE(BooleanQueryNode);

              class t_BooleanQueryNode {
              public:
                PyObject_HEAD
                BooleanQueryNode object;
                static PyObject *wrap_Object(const BooleanQueryNode&);
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
