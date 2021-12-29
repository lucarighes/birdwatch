#ifndef org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H
#define org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Iterator;
    class List;
    class ListIterator;
  }
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
          namespace core {
            namespace processors {

              class QueryNodeProcessorPipeline : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_init$_ae2484f2d8820041,
                  mid_add_616fb2ff5234e2f1,
                  mid_add_590d2ddfdbda61a1,
                  mid_addAll_15d9cc2398c22637,
                  mid_addAll_8980636bfaaa897b,
                  mid_clear_f2cc1bce94666404,
                  mid_contains_8b72f2dcdde6fd1d,
                  mid_containsAll_15d9cc2398c22637,
                  mid_get_bc496efafd1d673e,
                  mid_getQueryConfigHandler_04fdb47806be47b9,
                  mid_indexOf_5a4805a36cf611e7,
                  mid_isEmpty_8454bd5aa23fd11e,
                  mid_iterator_233a192dadb0917d,
                  mid_lastIndexOf_5a4805a36cf611e7,
                  mid_listIterator_78bda7a3d01214c3,
                  mid_listIterator_8204cc66da390272,
                  mid_process_9b07be8595532de7,
                  mid_remove_bc496efafd1d673e,
                  mid_remove_8b72f2dcdde6fd1d,
                  mid_removeAll_15d9cc2398c22637,
                  mid_retainAll_15d9cc2398c22637,
                  mid_set_0eb89979ac683c24,
                  mid_setQueryConfigHandler_ae2484f2d8820041,
                  mid_size_9972fcc56b44e79d,
                  mid_subList_e1795bf76fe1346f,
                  mid_toArray_6becf78ffd87a9bc,
                  mid_toArray_609b05756010dc5d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeProcessorPipeline(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeProcessorPipeline(const QueryNodeProcessorPipeline& obj) : ::java::lang::Object(obj) {}

                QueryNodeProcessorPipeline();
                QueryNodeProcessorPipeline(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);

                jboolean add(const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                void add(jint, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                jboolean addAll(const ::java::util::Collection &) const;
                jboolean addAll(jint, const ::java::util::Collection &) const;
                void clear() const;
                jboolean contains(const ::java::lang::Object &) const;
                jboolean containsAll(const ::java::util::Collection &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor get(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
                jint indexOf(const ::java::lang::Object &) const;
                jboolean isEmpty() const;
                ::java::util::Iterator iterator() const;
                jint lastIndexOf(const ::java::lang::Object &) const;
                ::java::util::ListIterator listIterator() const;
                ::java::util::ListIterator listIterator(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor remove(jint) const;
                jboolean remove(const ::java::lang::Object &) const;
                jboolean removeAll(const ::java::util::Collection &) const;
                jboolean retainAll(const ::java::util::Collection &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor set(jint, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
                jint size() const;
                ::java::util::List subList(jint, jint) const;
                JArray< ::java::lang::Object > toArray() const;
                JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
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
            namespace processors {
              extern PyType_Def PY_TYPE_DEF(QueryNodeProcessorPipeline);
              extern PyTypeObject *PY_TYPE(QueryNodeProcessorPipeline);

              class t_QueryNodeProcessorPipeline {
              public:
                PyObject_HEAD
                QueryNodeProcessorPipeline object;
                static PyObject *wrap_Object(const QueryNodeProcessorPipeline&);
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
