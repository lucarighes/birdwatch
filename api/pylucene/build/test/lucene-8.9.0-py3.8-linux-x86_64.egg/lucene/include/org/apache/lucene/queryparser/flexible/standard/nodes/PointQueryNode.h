#ifndef org_apache_lucene_queryparser_flexible_standard_nodes_PointQueryNode_H
#define org_apache_lucene_queryparser_flexible_standard_nodes_PointQueryNode_H

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
    class Number;
    class Class;
    class String;
    class CharSequence;
  }
  namespace text {
    class NumberFormat;
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

              class PointQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl {
               public:
                enum {
                  mid_init$_6690bc572512e4a7,
                  mid_getField_ba44900ab7d793b9,
                  mid_getNumberFormat_a56386c4cfd9cbe9,
                  mid_getValue_f5813404cc5e3a1e,
                  mid_setField_4b7f5e38f806ae55,
                  mid_setNumberFormat_cd4a218c853203a8,
                  mid_setValue_f5ecd8f3b63e12f5,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  mid_getTermEscaped_6bb2daa53c506f10,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PointQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PointQueryNode(const PointQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNodeImpl(obj) {}

                PointQueryNode(const ::java::lang::CharSequence &, const ::java::lang::Number &, const ::java::text::NumberFormat &);

                ::java::lang::CharSequence getField() const;
                ::java::text::NumberFormat getNumberFormat() const;
                ::java::lang::Number getValue() const;
                void setField(const ::java::lang::CharSequence &) const;
                void setNumberFormat(const ::java::text::NumberFormat &) const;
                void setValue(const ::java::lang::Number &) const;
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
              extern PyType_Def PY_TYPE_DEF(PointQueryNode);
              extern PyTypeObject *PY_TYPE(PointQueryNode);

              class t_PointQueryNode {
              public:
                PyObject_HEAD
                PointQueryNode object;
                static PyObject *wrap_Object(const PointQueryNode&);
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
