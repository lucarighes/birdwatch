#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_AbstractRangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_AbstractRangeQueryNode_H

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
              class RangeQueryNode;
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
    class Object;
    class String;
    class CharSequence;
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

              class AbstractRangeQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_getField_ba44900ab7d793b9,
                  mid_getLowerBound_28e9192a65eb7516,
                  mid_getUpperBound_28e9192a65eb7516,
                  mid_isLowerInclusive_8454bd5aa23fd11e,
                  mid_isUpperInclusive_8454bd5aa23fd11e,
                  mid_setBounds_c403cfc42f15ae06,
                  mid_setField_4b7f5e38f806ae55,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AbstractRangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AbstractRangeQueryNode(const AbstractRangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                ::java::lang::CharSequence getField() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getLowerBound() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getUpperBound() const;
                jboolean isLowerInclusive() const;
                jboolean isUpperInclusive() const;
                void setBounds(const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode &, const ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode &, jboolean, jboolean) const;
                void setField(const ::java::lang::CharSequence &) const;
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
              extern PyType_Def PY_TYPE_DEF(AbstractRangeQueryNode);
              extern PyTypeObject *PY_TYPE(AbstractRangeQueryNode);

              class t_AbstractRangeQueryNode {
              public:
                PyObject_HEAD
                AbstractRangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AbstractRangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AbstractRangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AbstractRangeQueryNode&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
