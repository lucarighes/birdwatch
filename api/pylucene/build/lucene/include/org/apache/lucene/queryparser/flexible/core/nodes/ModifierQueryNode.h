#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ModifierQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ModifierQueryNode_H

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
              class ModifierQueryNode$Modifier;
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

              class ModifierQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_3dc2b67c19b336d1,
                  mid_cloneTree_7f4134ae4682ace0,
                  mid_getChild_7f4134ae4682ace0,
                  mid_getModifier_19c2ffd39e124f1c,
                  mid_setChild_f80bf4f68564485e,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ModifierQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ModifierQueryNode(const ModifierQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                ModifierQueryNode(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ModifierQueryNode$Modifier &);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode getChild() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::ModifierQueryNode$Modifier getModifier() const;
                void setChild(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyType_Def PY_TYPE_DEF(ModifierQueryNode);
              extern PyTypeObject *PY_TYPE(ModifierQueryNode);

              class t_ModifierQueryNode {
              public:
                PyObject_HEAD
                ModifierQueryNode object;
                static PyObject *wrap_Object(const ModifierQueryNode&);
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
