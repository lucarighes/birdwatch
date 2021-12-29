#ifndef org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H
#define org_apache_lucene_queryparser_flexible_core_nodes_QueryNodeImpl_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class String;
    class CloneNotSupportedException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
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

              class QueryNodeImpl : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_add_d03990be0130160d,
                  mid_add_f80bf4f68564485e,
                  mid_clone_7f4134ae4682ace0,
                  mid_cloneTree_7f4134ae4682ace0,
                  mid_containsTag_145b2d0af0c06b93,
                  mid_getChildren_49ec78390f08338a,
                  mid_getParent_7f4134ae4682ace0,
                  mid_getTag_c0a3c3394484d296,
                  mid_getTagMap_1c3426541413a55d,
                  mid_isLeaf_8454bd5aa23fd11e,
                  mid_removeChildren_f80bf4f68564485e,
                  mid_removeFromParent_f2cc1bce94666404,
                  mid_set_d03990be0130160d,
                  mid_setTag_a814174df0bbb9ee,
                  mid_toString_db9b55ba01e03e4b,
                  mid_unsetTag_9fd2eb66a64e6f0f,
                  mid_setLeaf_9d72768e8fdce2b7,
                  mid_isRoot_8454bd5aa23fd11e,
                  mid_isDefaultField_2cd6b83cb18fe093,
                  mid_allocate_f2cc1bce94666404,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeImpl(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeImpl(const QueryNodeImpl& obj) : ::java::lang::Object(obj) {}

                static ::java::lang::String *PLAINTEXT_FIELD_NAME;

                QueryNodeImpl();

                void add(const ::java::util::List &) const;
                void add(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode clone() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode cloneTree() const;
                jboolean containsTag(const ::java::lang::String &) const;
                ::java::util::List getChildren() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode getParent() const;
                ::java::lang::Object getTag(const ::java::lang::String &) const;
                ::java::util::Map getTagMap() const;
                jboolean isLeaf() const;
                void removeChildren(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void removeFromParent() const;
                void set(const ::java::util::List &) const;
                void setTag(const ::java::lang::String &, const ::java::lang::Object &) const;
                ::java::lang::String toString() const;
                void unsetTag(const ::java::lang::String &) const;
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
              extern PyType_Def PY_TYPE_DEF(QueryNodeImpl);
              extern PyTypeObject *PY_TYPE(QueryNodeImpl);

              class t_QueryNodeImpl {
              public:
                PyObject_HEAD
                QueryNodeImpl object;
                static PyObject *wrap_Object(const QueryNodeImpl&);
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
