#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_PrefixWildcardQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_PrefixWildcardQueryNode_H

#include "org/apache/lucene/queryparser/flexible/standard/nodes/WildcardQueryNode.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class CloneNotSupportedException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {
              class PrefixWildcardQueryNode;
            }
          }
          namespace core {
            namespace nodes {
              class FieldQueryNode;
            }
          }
        }
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
            namespace nodes {

              class PrefixWildcardQueryNode : public ::org::apache::lucene::queryparser::flexible::standard::nodes::WildcardQueryNode {
               public:
                enum {
                  mid_init$_67dc800ef31d2ab2,
                  mid_init$_9cb0cd96f3795799,
                  mid_cloneTree_7e82dea5d5b2b9da,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PrefixWildcardQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::WildcardQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PrefixWildcardQueryNode(const PrefixWildcardQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::standard::nodes::WildcardQueryNode(obj) {}

                PrefixWildcardQueryNode(const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode &);
                PrefixWildcardQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                PrefixWildcardQueryNode cloneTree() const;
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
          namespace standard {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(PrefixWildcardQueryNode);
              extern PyTypeObject *PY_TYPE(PrefixWildcardQueryNode);

              class t_PrefixWildcardQueryNode {
              public:
                PyObject_HEAD
                PrefixWildcardQueryNode object;
                static PyObject *wrap_Object(const PrefixWildcardQueryNode&);
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
