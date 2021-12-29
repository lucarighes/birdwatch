#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/BooleanQueryNode.h"

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
              class ProximityQueryNode$Type;
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
  namespace util {
    class List;
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

              class ProximityQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode {
               public:
                enum {
                  mid_init$_51d325d819715a80,
                  mid_init$_6a67167bf68f4ac6,
                  mid_cloneTree_7f4134ae4682ace0,
                  mid_getDistance_9972fcc56b44e79d,
                  mid_getField_ba44900ab7d793b9,
                  mid_getFieldAsString_db9b55ba01e03e4b,
                  mid_getProximityType_e6a06355744fa21c,
                  mid_isInOrder_8454bd5aa23fd11e,
                  mid_setField_4b7f5e38f806ae55,
                  mid_toQueryString_6bb2daa53c506f10,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ProximityQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ProximityQueryNode(const ProximityQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::BooleanQueryNode(obj) {}

                ProximityQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &, jboolean);
                ProximityQueryNode(const ::java::util::List &, const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type &, jint, jboolean);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                jint getDistance() const;
                ::java::lang::CharSequence getField() const;
                ::java::lang::String getFieldAsString() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::ProximityQueryNode$Type getProximityType() const;
                jboolean isInOrder() const;
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
          namespace core {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(ProximityQueryNode);
              extern PyTypeObject *PY_TYPE(ProximityQueryNode);

              class t_ProximityQueryNode {
              public:
                PyObject_HEAD
                ProximityQueryNode object;
                static PyObject *wrap_Object(const ProximityQueryNode&);
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
