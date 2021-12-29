#ifndef org_apache_lucene_queryparser_flexible_core_QueryNodeException_H
#define org_apache_lucene_queryparser_flexible_core_QueryNodeException_H

#include "java/lang/Exception.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {
            class Message;
            class NLSException;
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
    class Throwable;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            class QueryNodeException : public ::java::lang::Exception {
             public:
              enum {
                mid_init$_471cfbdb800444a7,
                mid_init$_26a7a119e2ed968d,
                mid_init$_84e3b301d273e601,
                mid_getLocalizedMessage_db9b55ba01e03e4b,
                mid_getLocalizedMessage_8cbdae2bb55ad99c,
                mid_getMessage_db9b55ba01e03e4b,
                mid_getMessageObject_daa3e60103dc49c2,
                mid_toString_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryNodeException(jobject obj) : ::java::lang::Exception(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryNodeException(const QueryNodeException& obj) : ::java::lang::Exception(obj) {}

              QueryNodeException(const ::java::lang::Throwable &);
              QueryNodeException(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
              QueryNodeException(const ::org::apache::lucene::queryparser::flexible::messages::Message &, const ::java::lang::Throwable &);

              ::java::lang::String getLocalizedMessage() const;
              ::java::lang::String getLocalizedMessage(const ::java::util::Locale &) const;
              ::java::lang::String getMessage() const;
              ::org::apache::lucene::queryparser::flexible::messages::Message getMessageObject() const;
              ::java::lang::String toString() const;
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
            extern PyType_Def PY_TYPE_DEF(QueryNodeException);
            extern PyTypeObject *PY_TYPE(QueryNodeException);

            class t_QueryNodeException {
            public:
              PyObject_HEAD
              QueryNodeException object;
              static PyObject *wrap_Object(const QueryNodeException&);
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
