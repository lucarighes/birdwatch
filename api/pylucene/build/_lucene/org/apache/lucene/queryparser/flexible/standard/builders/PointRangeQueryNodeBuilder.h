#ifndef org_apache_lucene_queryparser_flexible_standard_builders_PointRangeQueryNodeBuilder_H
#define org_apache_lucene_queryparser_flexible_standard_builders_PointRangeQueryNodeBuilder_H

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
        class Query;
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

              class PointRangeQueryNodeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_build_266d6dc3b958f456,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PointRangeQueryNodeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PointRangeQueryNodeBuilder(const PointRangeQueryNodeBuilder& obj) : ::java::lang::Object(obj) {}

                PointRangeQueryNodeBuilder();

                ::org::apache::lucene::search::Query build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyType_Def PY_TYPE_DEF(PointRangeQueryNodeBuilder);
              extern PyTypeObject *PY_TYPE(PointRangeQueryNodeBuilder);

              class t_PointRangeQueryNodeBuilder {
              public:
                PyObject_HEAD
                PointRangeQueryNodeBuilder object;
                static PyObject *wrap_Object(const PointRangeQueryNodeBuilder&);
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
