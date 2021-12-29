#ifndef org_apache_lucene_queryparser_flexible_core_nodes_FieldableNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_FieldableNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNode.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
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

              class FieldableNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode {
               public:
                enum {
                  mid_getField_ba44900ab7d793b9,
                  mid_setField_4b7f5e38f806ae55,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldableNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FieldableNode(const FieldableNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode(obj) {}

                ::java::lang::CharSequence getField() const;
                void setField(const ::java::lang::CharSequence &) const;
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
              extern PyType_Def PY_TYPE_DEF(FieldableNode);
              extern PyTypeObject *PY_TYPE(FieldableNode);

              class t_FieldableNode {
              public:
                PyObject_HEAD
                FieldableNode object;
                static PyObject *wrap_Object(const FieldableNode&);
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
