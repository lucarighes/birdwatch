#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FieldQueryNode_H

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
              class FieldQueryNode;
              class TextableQueryNode;
              class FieldValuePairQueryNode;
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

              class FieldQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_9cb0cd96f3795799,
                  mid_cloneTree_801604d543702e18,
                  mid_getBegin_9972fcc56b44e79d,
                  mid_getEnd_9972fcc56b44e79d,
                  mid_getField_ba44900ab7d793b9,
                  mid_getFieldAsString_db9b55ba01e03e4b,
                  mid_getPositionIncrement_9972fcc56b44e79d,
                  mid_getText_ba44900ab7d793b9,
                  mid_getTextAsString_db9b55ba01e03e4b,
                  mid_getValue_ba44900ab7d793b9,
                  mid_setBegin_040c4cd0390c5aff,
                  mid_setEnd_040c4cd0390c5aff,
                  mid_setField_4b7f5e38f806ae55,
                  mid_setPositionIncrement_040c4cd0390c5aff,
                  mid_setText_4b7f5e38f806ae55,
                  mid_setValue_4b7f5e38f806ae55,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  mid_getTermEscaped_6bb2daa53c506f10,
                  mid_getTermEscapeQuoted_6bb2daa53c506f10,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FieldQueryNode(const FieldQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                FieldQueryNode(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jint, jint);

                FieldQueryNode cloneTree() const;
                jint getBegin() const;
                jint getEnd() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                jint getPositionIncrement() const;
                ::java::lang::CharSequence getText() const;
                ::java::lang::String getTextAsString() const;
                ::java::lang::CharSequence getValue() const;
                void setBegin(jint) const;
                void setEnd(jint) const;
                void setField(const ::java::lang::CharSequence &) const;
                void setPositionIncrement(jint) const;
                void setText(const ::java::lang::CharSequence &) const;
                void setValue(const ::java::lang::CharSequence &) const;
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
              extern PyType_Def PY_TYPE_DEF(FieldQueryNode);
              extern PyTypeObject *PY_TYPE(FieldQueryNode);

              class t_FieldQueryNode {
              public:
                PyObject_HEAD
                FieldQueryNode object;
                static PyObject *wrap_Object(const FieldQueryNode&);
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
