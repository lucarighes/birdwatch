#ifndef org_apache_lucene_queryparser_flexible_standard_config_NumberDateFormat_H
#define org_apache_lucene_queryparser_flexible_standard_config_NumberDateFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
    class Object;
    class String;
    class StringBuffer;
  }
  namespace text {
    class DateFormat;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace config {

              class NumberDateFormat : public ::java::text::NumberFormat {
               public:
                enum {
                  mid_init$_90c2b1ae19677f13,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit NumberDateFormat(jobject obj) : ::java::text::NumberFormat(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                NumberDateFormat(const NumberDateFormat& obj) : ::java::text::NumberFormat(obj) {}

                NumberDateFormat(const ::java::text::DateFormat &);
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
            namespace config {
              extern PyType_Def PY_TYPE_DEF(NumberDateFormat);
              extern PyTypeObject *PY_TYPE(NumberDateFormat);

              class t_NumberDateFormat {
              public:
                PyObject_HEAD
                NumberDateFormat object;
                static PyObject *wrap_Object(const NumberDateFormat&);
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
