#ifndef org_apache_lucene_queryparser_flexible_standard_builders_MultiPhraseQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_MultiPhraseQueryNodeBuilder_H

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
            namespace nodes {
              class QueryNode;
            }
          }
          namespace standard {
            namespace builders {
              class StandardQueryBuilder;
            }
          }
        }
      }
      namespace search {
        class MultiPhraseQuery;
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
            namespace builders {

              class MultiPhraseQueryNodeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_build_eb271355bc1b2869,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit MultiPhraseQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                MultiPhraseQueryNodeBuilder(const MultiPhraseQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                MultiPhraseQueryNodeBuilder();

                ::org::apache::lucene::search::MultiPhraseQuery build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
            namespace builders {
              extern PyType_Def PY_TYPE_DEF(MultiPhraseQueryNodeBuilder);
              extern PyTypeObject *PY_TYPE(MultiPhraseQueryNodeBuilder);

              class t_MultiPhraseQueryNodeBuilder {
              public:
                PyObject_HEAD
                MultiPhraseQueryNodeBuilder object;
                static PyObject *wrap_Object(const MultiPhraseQueryNodeBuilder&);
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
