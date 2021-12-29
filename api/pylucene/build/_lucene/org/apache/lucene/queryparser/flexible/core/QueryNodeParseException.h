#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeParseException_H

#include "org/apache/lucene/queryparser/flexible/core/QueryNodeException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {
            class Message;
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
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            class QueryNodeParseException : public ::org::apache::lucene::queryparser::flexible::core::QueryNodeException {
             public:
              enum {
                mid_init$_471cfbdb800444a7,
                mid_init$_26a7a119e2ed968d,
                mid_init$_84e3b301d273e601,
                mid_getBeginColumn_9972fcc56b44e79d,
                mid_getBeginLine_9972fcc56b44e79d,
                mid_getErrorToken_db9b55ba01e03e4b,
                mid_getQuery_ba44900ab7d793b9,
                mid_setNonLocalizedMessage_26a7a119e2ed968d,
                mid_setQuery_4b7f5e38f806ae55,
                mid_setBeginColumn_040c4cd0390c5aff,
                mid_setErrorToken_9fd2eb66a64e6f0f,
                mid_setBeginLine_040c4cd0390c5aff,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryNodeParseException(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeException(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryNodeParseException(const QueryNodeParseException& obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeException(obj) {}

              QueryNodeParseException(const ::java::lang::Throwable &);
              QueryNodeParseException(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
              QueryNodeParseException(const ::org::apache::lucene::queryparser::flexible::messages::Message &, const ::java::lang::Throwable &);

              jint getBeginColumn() const;
              jint getBeginLine() const;
              ::java::lang::String getErrorToken() const;
              ::java::lang::CharSequence getQuery() const;
              void setNonLocalizedMessage(const ::org::apache::lucene::queryparser::flexible::messages::Message &) const;
              void setQuery(const ::java::lang::CharSequence &) const;
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
            extern PyType_Def PY_TYPE_DEF(QueryNodeParseException);
            extern PyTypeObject *PY_TYPE(QueryNodeParseException);

            class t_QueryNodeParseException {
            public:
              PyObject_HEAD
              QueryNodeParseException object;
              static PyObject *wrap_Object(const QueryNodeParseException&);
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
