#ifndef org_apache_lucene_queryparser_flexible_core_nodes_RangeQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_RangeQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldableNode.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class FieldValuePairQueryNode;
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
          namespace core {
            namespace nodes {

              class RangeQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode {
               public:
                enum {
                  mid_getLowerBound_28e9192a65eb7516,
                  mid_getUpperBound_28e9192a65eb7516,
                  mid_isLowerInclusive_8454bd5aa23fd11e,
                  mid_isUpperInclusive_8454bd5aa23fd11e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RangeQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RangeQueryNode(const RangeQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::FieldableNode(obj) {}

                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getLowerBound() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::FieldValuePairQueryNode getUpperBound() const;
                jboolean isLowerInclusive() const;
                jboolean isUpperInclusive() const;
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
              extern PyType_Def PY_TYPE_DEF(RangeQueryNode);
              extern PyTypeObject *PY_TYPE(RangeQueryNode);

              class t_RangeQueryNode {
              public:
                PyObject_HEAD
                RangeQueryNode object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_RangeQueryNode *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const RangeQueryNode&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const RangeQueryNode&, PyTypeObject *);
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
