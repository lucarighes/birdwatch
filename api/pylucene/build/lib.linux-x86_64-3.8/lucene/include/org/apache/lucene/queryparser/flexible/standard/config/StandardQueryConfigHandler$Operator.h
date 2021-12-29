#ifndef org_apache_lucene_queryparser_flexible_standard_config_StandardQueryConfigHandler$Operator_H
#define org_apache_lucene_queryparser_flexible_standard_config_StandardQueryConfigHandler$Operator_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace config {
              class StandardQueryConfigHandler$Operator;
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
          namespace standard {
            namespace config {

              class StandardQueryConfigHandler$Operator : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_e419c3e9301ebf77,
                  mid_values_ed8be8b0136cdb70,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardQueryConfigHandler$Operator(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StandardQueryConfigHandler$Operator(const StandardQueryConfigHandler$Operator& obj) : ::java::lang::Enum(obj) {}

                static StandardQueryConfigHandler$Operator *AND;
                static StandardQueryConfigHandler$Operator *OR;

                static StandardQueryConfigHandler$Operator valueOf(const ::java::lang::String &);
                static JArray< StandardQueryConfigHandler$Operator > values();
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
              extern PyType_Def PY_TYPE_DEF(StandardQueryConfigHandler$Operator);
              extern PyTypeObject *PY_TYPE(StandardQueryConfigHandler$Operator);

              class t_StandardQueryConfigHandler$Operator {
              public:
                PyObject_HEAD
                StandardQueryConfigHandler$Operator object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_StandardQueryConfigHandler$Operator *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const StandardQueryConfigHandler$Operator&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const StandardQueryConfigHandler$Operator&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
