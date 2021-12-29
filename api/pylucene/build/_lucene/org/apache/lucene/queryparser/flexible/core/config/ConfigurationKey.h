#ifndef org_apache_lucene_queryparser_flexible_core_config_ConfigurationKey_H
#define org_apache_lucene_queryparser_flexible_core_config_ConfigurationKey_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class ConfigurationKey;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {

              class ConfigurationKey : public ::java::lang::Object {
               public:
                enum {
                  mid_newInstance_f7c8c6962157d839,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ConfigurationKey(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ConfigurationKey(const ConfigurationKey& obj) : ::java::lang::Object(obj) {}

                static ConfigurationKey newInstance();
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
            namespace config {
              extern PyType_Def PY_TYPE_DEF(ConfigurationKey);
              extern PyTypeObject *PY_TYPE(ConfigurationKey);

              class t_ConfigurationKey {
              public:
                PyObject_HEAD
                ConfigurationKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ConfigurationKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ConfigurationKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ConfigurationKey&, PyTypeObject *);
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
