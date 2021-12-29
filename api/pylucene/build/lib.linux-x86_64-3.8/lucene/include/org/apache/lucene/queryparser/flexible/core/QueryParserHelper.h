#ifndef org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H
#define org_apache_lucene_queryparser_flexible_core_QueryParserHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              class SyntaxParser;
            }
            namespace builders {
              class QueryBuilder;
            }
            class QueryNodeException;
            namespace config {
              class QueryConfigHandler;
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
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            class QueryParserHelper : public ::java::lang::Object {
             public:
              enum {
                mid_init$_e8e450d56f67ed2d,
                mid_getQueryBuilder_9658641571f73a7b,
                mid_getQueryConfigHandler_04fdb47806be47b9,
                mid_getQueryNodeProcessor_ec6ac5a997927dc6,
                mid_getSyntaxParser_5da4a996865388c2,
                mid_parse_2f6fb31a87be462e,
                mid_setQueryBuilder_44140a10aae98a11,
                mid_setQueryConfigHandler_ae2484f2d8820041,
                mid_setQueryNodeProcessor_d2c147c43d4bdb60,
                mid_setSyntaxParser_95202750f7c98195,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserHelper(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParserHelper(const QueryParserHelper& obj) : ::java::lang::Object(obj) {}

              QueryParserHelper(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &, const ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser &, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &, const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &);

              ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder getQueryBuilder() const;
              ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
              ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor getQueryNodeProcessor() const;
              ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser getSyntaxParser() const;
              ::java::lang::Object parse(const ::java::lang::String &, const ::java::lang::String &) const;
              void setQueryBuilder(const ::org::apache::lucene::queryparser::flexible::core::builders::QueryBuilder &) const;
              void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
              void setQueryNodeProcessor(const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
              void setSyntaxParser(const ::org::apache::lucene::queryparser::flexible::core::parser::SyntaxParser &) const;
            };
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
            extern PyType_Def PY_TYPE_DEF(QueryParserHelper);
            extern PyTypeObject *PY_TYPE(QueryParserHelper);

            class t_QueryParserHelper {
            public:
              PyObject_HEAD
              QueryParserHelper object;
              static PyObject *wrap_Object(const QueryParserHelper&);
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

#endif
