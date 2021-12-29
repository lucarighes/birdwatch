#ifndef org_apache_lucene_queryparser_flexible_standard_processors_MatchAllDocsQueryNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_MatchAllDocsQueryNodeProcessor_H

#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorImpl.h"

namespace java {
  namespace lang {
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

              class MatchAllDocsQueryNodeProcessor : public ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl {
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

                explicit MatchAllDocsQueryNodeProcessor(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                MatchAllDocsQueryNodeProcessor(const MatchAllDocsQueryNodeProcessor& obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {}

                MatchAllDocsQueryNodeProcessor();
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
              extern PyType_Def PY_TYPE_DEF(MatchAllDocsQueryNodeProcessor);
              extern PyTypeObject *PY_TYPE(MatchAllDocsQueryNodeProcessor);

              class t_MatchAllDocsQueryNodeProcessor {
              public:
                PyObject_HEAD
                MatchAllDocsQueryNodeProcessor object;
                static PyObject *wrap_Object(const MatchAllDocsQueryNodeProcessor&);
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
