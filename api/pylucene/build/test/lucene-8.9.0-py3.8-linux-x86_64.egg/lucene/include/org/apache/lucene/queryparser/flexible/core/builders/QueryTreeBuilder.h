#ifndef org_apache_lucene_queryparser_flexible_core_builders_QueryTreeBuilder_H
#define org_apache_lucene_queryparser_flexible_core_builders_QueryTreeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace builders {
              class QueryBuilder;
            }
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace builders {

              class QueryTreeBuilder : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_build_c3c85cfa8727a936,
                  mid_setBuilder_9750f5ee54cb823e,
                  mid_setBuilder_632ffe435a5760c7,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryTreeBuilder(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryTreeBuilder(const QueryTreeBuilder& obj) : ::java::lang::Object(obj) {}

                static ::java::lang::String *QUERY_TREE_BUILDER_TAGID;

                QueryTreeBuilder();

                ::java::lang::Object build(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void setBuilder(const ::java::lang::Class &, const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &) const;
                void setBuilder(const ::java::lang::CharSequence &, const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &) const;
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
            namespace builders {
              extern PyType_Def PY_TYPE_DEF(QueryTreeBuilder);
              extern PyTypeObject *PY_TYPE(QueryTreeBuilder);

              class t_QueryTreeBuilder {
              public:
                PyObject_HEAD
                QueryTreeBuilder object;
                static PyObject *wrap_Object(const QueryTreeBuilder&);
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
