#ifndef org_apache_lucene_queryparser_flexible_messages_MessageImpl_H
#define org_apache_lucene_queryparser_flexible_messages_MessageImpl_H

#include "java/lang/Object.h"

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
          namespace messages {

            class MessageImpl : public ::java::lang::Object {
             public:
              enum {
                mid_init$_9fd2eb66a64e6f0f,
                mid_init$_f695dd5de47c6199,
                mid_getArguments_6becf78ffd87a9bc,
                mid_getKey_db9b55ba01e03e4b,
                mid_getLocalizedMessage_db9b55ba01e03e4b,
                mid_getLocalizedMessage_8cbdae2bb55ad99c,
                mid_toString_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MessageImpl(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MessageImpl(const MessageImpl& obj) : ::java::lang::Object(obj) {}

              MessageImpl(const ::java::lang::String &);
              MessageImpl(const ::java::lang::String &, const JArray< ::java::lang::Object > &);

              JArray< ::java::lang::Object > getArguments() const;
              ::java::lang::String getKey() const;
              ::java::lang::String getLocalizedMessage() const;
              ::java::lang::String getLocalizedMessage(const ::java::util::Locale &) const;
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
          namespace messages {
            extern PyType_Def PY_TYPE_DEF(MessageImpl);
            extern PyTypeObject *PY_TYPE(MessageImpl);

            class t_MessageImpl {
            public:
              PyObject_HEAD
              MessageImpl object;
              static PyObject *wrap_Object(const MessageImpl&);
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
