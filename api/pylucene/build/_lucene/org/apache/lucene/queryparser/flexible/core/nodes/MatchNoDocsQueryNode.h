#ifndef org_apache_lucene_queryparser_flexible_core_nodes_MatchNoDocsQueryNode_H
#define org_apache_lucene_queryparser_flexible_core_nodes_MatchNoDocsQueryNode_H

#include "org/apache/lucene/queryparser/flexible/core/nodes/DeletedQueryNode.h"

namespace java {
  namespace lang {
    class String;
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

              class MatchNoDocsQueryNode : public ::org::apache::lucene::queryparser::flexible::core::nodes::DeletedQueryNode {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit MatchNoDocsQueryNode(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::DeletedQueryNode(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                MatchNoDocsQueryNode(const MatchNoDocsQueryNode& obj) : ::org::apache::lucene::queryparser::flexible::core::nodes::DeletedQueryNode(obj) {}

                MatchNoDocsQueryNode();

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
              extern PyType_Def PY_TYPE_DEF(MatchNoDocsQueryNode);
              extern PyTypeObject *PY_TYPE(MatchNoDocsQueryNode);

              class t_MatchNoDocsQueryNode {
              public:
                PyObject_HEAD
                MatchNoDocsQueryNode object;
                static PyObject *wrap_Object(const MatchNoDocsQueryNode&);
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
