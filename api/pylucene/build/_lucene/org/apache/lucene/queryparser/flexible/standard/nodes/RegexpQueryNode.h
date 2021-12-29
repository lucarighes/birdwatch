#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_RegexpQueryNode_H

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
              class FieldableNode;
              class TextableQueryNode;
            }
          }
          namespace standard {
            namespace nodes {
              class RegexpQueryNode;
            }
          }
        }
      }
      namespace util {
        class BytesRef;
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
          namespace standard {
            namespace nodes {

              class RegexpQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_9cb0cd96f3795799,
                  mid_cloneTree_c91fbc14c65bb82b,
                  mid_getField_ba44900ab7d793b9,
                  mid_getFieldAsString_db9b55ba01e03e4b,
                  mid_getText_ba44900ab7d793b9,
                  mid_setField_4b7f5e38f806ae55,
                  mid_setText_4b7f5e38f806ae55,
                  mid_textToBytesRef_7af2ea2e37ce82b8,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RegexpQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RegexpQueryNode(const RegexpQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                RegexpQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                RegexpQueryNode cloneTree() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                ::java::lang::CharSequence getText() const;
                void setField(const ::java::lang::CharSequence &) const;
                void setText(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::util::BytesRef textToBytesRef() const;
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
          namespace standard {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(RegexpQueryNode);
              extern PyTypeObject *PY_TYPE(RegexpQueryNode);

              class t_RegexpQueryNode {
              public:
                PyObject_HEAD
                RegexpQueryNode object;
                static PyObject *wrap_Object(const RegexpQueryNode&);
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
