#ifndef org_apache_lucene_queryparser_flexible_standard_processors_MultiTermRewriteMethodProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_MultiTermRewriteMethodProcessor_H

#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorImpl.h"

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
          namespace standard {
            namespace processors {

              class MultiTermRewriteMethodProcessor : public ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_preProcessNode_9b07be8595532de7,
                  mid_postProcessNode_9b07be8595532de7,
                  mid_setChildrenOrder_e420eeaadf0bcd20,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit MultiTermRewriteMethodProcessor(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                MultiTermRewriteMethodProcessor(const MultiTermRewriteMethodProcessor& obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {}

                static ::java::lang::String *TAG_ID;

                MultiTermRewriteMethodProcessor();
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
              extern PyType_Def PY_TYPE_DEF(MultiTermRewriteMethodProcessor);
              extern PyTypeObject *PY_TYPE(MultiTermRewriteMethodProcessor);

              class t_MultiTermRewriteMethodProcessor {
              public:
                PyObject_HEAD
                MultiTermRewriteMethodProcessor object;
                static PyObject *wrap_Object(const MultiTermRewriteMethodProcessor&);
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
