#ifndef org_apache_lucene_queryparser_flexible_standard_QueryParserUtil_H
#define org_apache_lucene_queryparser_flexible_standard_QueryParserUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
          }
        }
      }
      namespace search {
        class BooleanClause$Occur;
        class Query;
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
          namespace standard {

            class QueryParserUtil : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_escape_9bfa75c9f141b67f,
                mid_parse_624f5f0bd2ccc6fd,
                mid_parse_9b8192354815ff88,
                mid_parse_461e1cdcf28c0718,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserUtil(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParserUtil(const QueryParserUtil& obj) : ::java::lang::Object(obj) {}

              QueryParserUtil();

              static ::java::lang::String escape(const ::java::lang::String &);
              static ::org::apache::lucene::search::Query parse(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);
              static ::org::apache::lucene::search::Query parse(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
              static ::org::apache::lucene::search::Query parse(const ::java::lang::String &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
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
          namespace standard {
            extern PyType_Def PY_TYPE_DEF(QueryParserUtil);
            extern PyTypeObject *PY_TYPE(QueryParserUtil);

            class t_QueryParserUtil {
            public:
              PyObject_HEAD
              QueryParserUtil object;
              static PyObject *wrap_Object(const QueryParserUtil&);
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
