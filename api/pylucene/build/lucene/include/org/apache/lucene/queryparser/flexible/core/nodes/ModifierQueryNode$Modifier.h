#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ModifierQueryNode$Modifier_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ModifierQueryNode$Modifier_H

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
          namespace core {
            namespace nodes {
              class ModifierQueryNode$Modifier;
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
            namespace nodes {

              class ModifierQueryNode$Modifier : public ::java::lang::Enum {
               public:
                enum {
                  mid_toDigitString_db9b55ba01e03e4b,
                  mid_toLargeString_db9b55ba01e03e4b,
                  mid_toString_db9b55ba01e03e4b,
                  mid_valueOf_d7d151a2d85280cd,
                  mid_values_b1e4ed25bbe09e2e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ModifierQueryNode$Modifier(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ModifierQueryNode$Modifier(const ModifierQueryNode$Modifier& obj) : ::java::lang::Enum(obj) {}

                static ModifierQueryNode$Modifier *MOD_NONE;
                static ModifierQueryNode$Modifier *MOD_NOT;
                static ModifierQueryNode$Modifier *MOD_REQ;

                ::java::lang::String toDigitString() const;
                ::java::lang::String toLargeString() const;
                ::java::lang::String toString() const;
                static ModifierQueryNode$Modifier valueOf(const ::java::lang::String &);
                static JArray< ModifierQueryNode$Modifier > values();
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
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(ModifierQueryNode$Modifier);
              extern PyTypeObject *PY_TYPE(ModifierQueryNode$Modifier);

              class t_ModifierQueryNode$Modifier {
              public:
                PyObject_HEAD
                ModifierQueryNode$Modifier object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ModifierQueryNode$Modifier *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ModifierQueryNode$Modifier&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ModifierQueryNode$Modifier&, PyTypeObject *);
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
