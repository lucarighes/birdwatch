#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QueryNode_H

#include "java/lang/Object.h"

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
  namespace util {
    class Map;
    class List;
  }
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

              class QueryNode : public ::java::lang::Object {
               public:
                enum {
                  mid_add_d03990be0130160d,
                  mid_add_f80bf4f68564485e,
                  mid_cloneTree_7f4134ae4682ace0,
                  mid_containsTag_145b2d0af0c06b93,
                  mid_getChildren_49ec78390f08338a,
                  mid_getParent_7f4134ae4682ace0,
                  mid_getTag_c0a3c3394484d296,
                  mid_getTagMap_1c3426541413a55d,
                  mid_isLeaf_8454bd5aa23fd11e,
                  mid_removeChildren_f80bf4f68564485e,
                  mid_removeFromParent_f2cc1bce94666404,
                  mid_set_d03990be0130160d,
                  mid_setTag_a814174df0bbb9ee,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  mid_unsetTag_9fd2eb66a64e6f0f,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNode(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNode(const QueryNode& obj) : ::java::lang::Object(obj) {}

                void add(const ::java::util::List &) const;
                void add(const QueryNode &) const;
                QueryNode cloneTree() const;
                jboolean containsTag(const ::java::lang::String &) const;
                ::java::util::List getChildren() const;
                QueryNode getParent() const;
                ::java::lang::Object getTag(const ::java::lang::String &) const;
                ::java::util::Map getTagMap() const;
                jboolean isLeaf() const;
                void removeChildren(const QueryNode &) const;
                void removeFromParent() const;
                void set(const ::java::util::List &) const;
                void setTag(const ::java::lang::String &, const ::java::lang::Object &) const;
                ::java::lang::CharSequence toQueryString(const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax &) const;
                ::java::lang::String toString() const;
                void unsetTag(const ::java::lang::String &) const;
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
              extern PyType_Def PY_TYPE_DEF(QueryNode);
              extern PyTypeObject *PY_TYPE(QueryNode);

              class t_QueryNode {
              public:
                PyObject_HEAD
                QueryNode object;
                static PyObject *wrap_Object(const QueryNode&);
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
