#ifndef org_apache_lucene_queryparser_xml_ParserException_H
#define org_apache_lucene_queryparser_xml_ParserException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class String;
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class ParserException : public ::java::lang::Exception {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_9fd2eb66a64e6f0f,
              mid_init$_471cfbdb800444a7,
              mid_init$_2e9d196dc293ffe6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParserException(jobject obj) : ::java::lang::Exception(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParserException(const ParserException& obj) : ::java::lang::Exception(obj) {}

            ParserException();
            ParserException(const ::java::lang::String &);
            ParserException(const ::java::lang::Throwable &);
            ParserException(const ::java::lang::String &, const ::java::lang::Throwable &);
          };
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
        namespace xml {
          extern PyType_Def PY_TYPE_DEF(ParserException);
          extern PyTypeObject *PY_TYPE(ParserException);

          class t_ParserException {
          public:
            PyObject_HEAD
            ParserException object;
            static PyObject *wrap_Object(const ParserException&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
