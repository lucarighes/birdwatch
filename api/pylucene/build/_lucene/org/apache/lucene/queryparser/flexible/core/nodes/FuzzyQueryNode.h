#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FuzzyQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FuzzyQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldQueryNode.h"

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
              class FuzzyQueryNode;
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

              class FuzzyQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode {
               public:
                enum {
                  mid_init$_e134eb2e8796bd54,
                  mid_cloneTree_aab6ccf12cf83d73,
                  mid_getPrefixLength_9972fcc56b44e79d,
                  mid_getSimilarity_58aec2b64dff50c8,
                  mid_setPrefixLength_040c4cd0390c5aff,
                  mid_setSimilarity_8e1d952dd65cdc3a,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FuzzyQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FuzzyQueryNode(const FuzzyQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldQueryNode(obj) {}

                FuzzyQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jfloat, jint, jint);

                FuzzyQueryNode cloneTree() const;
                jint getPrefixLength() const;
                jfloat getSimilarity() const;
                void setPrefixLength(jint) const;
                void setSimilarity(jfloat) const;
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
              extern PyType_Def PY_TYPE_DEF(FuzzyQueryNode);
              extern PyTypeObject *PY_TYPE(FuzzyQueryNode);

              class t_FuzzyQueryNode {
              public:
                PyObject_HEAD
                FuzzyQueryNode object;
                static PyObject *wrap_Object(const FuzzyQueryNode&);
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
