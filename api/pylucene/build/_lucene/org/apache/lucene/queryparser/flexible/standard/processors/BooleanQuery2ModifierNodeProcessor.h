#ifndef org_apache_lucene_queryparser_flexible_standard_processors_BooleanQuery2ModifierNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_BooleanQuery2ModifierNodeProcessor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace config {
              class QueryConfigHandler;
            }
            namespace nodes {
              class QueryNode;
            }
            namespace processors {
              class QueryNodeProcessor;
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
            namespace processors {

              class BooleanQuery2ModifierNodeProcessor : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_getQueryConfigHandler_04fdb47806be47b9,
                  mid_process_9b07be8595532de7,
                  mid_setQueryConfigHandler_ae2484f2d8820041,
                  mid_processChildren_f80bf4f68564485e,
                  mid_preProcessNode_9b07be8595532de7,
                  mid_postProcessNode_9b07be8595532de7,
                  mid_fillChildrenBufferAndApplyModifiery_f80bf4f68564485e,
                  mid_isDefaultBooleanQueryNode_1b9aa8e4e92416d1,
                  mid_tagModifierButDoNotOverride_3dc2b67c19b336d1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit BooleanQuery2ModifierNodeProcessor(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                BooleanQuery2ModifierNodeProcessor(const BooleanQuery2ModifierNodeProcessor& obj) : ::java::lang::Object(obj) {}

                BooleanQuery2ModifierNodeProcessor();

                ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
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
            namespace processors {
              extern PyType_Def PY_TYPE_DEF(BooleanQuery2ModifierNodeProcessor);
              extern PyTypeObject *PY_TYPE(BooleanQuery2ModifierNodeProcessor);

              class t_BooleanQuery2ModifierNodeProcessor {
              public:
                PyObject_HEAD
                BooleanQuery2ModifierNodeProcessor object;
                static PyObject *wrap_Object(const BooleanQuery2ModifierNodeProcessor&);
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
