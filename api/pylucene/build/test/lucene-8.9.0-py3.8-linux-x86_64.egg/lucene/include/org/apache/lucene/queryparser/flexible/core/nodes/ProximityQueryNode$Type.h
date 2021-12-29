#ifndef org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode$Type_H
#define org_apache_lucene_queryparser_flexible_core_nodes_ProximityQueryNode$Type_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class ProximityQueryNode$Type;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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
            namespace nodes {

              class ProximityQueryNode$Type : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_01db9b4e32e9249b,
                  mid_values_fc4e4803cacbaf83,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ProximityQueryNode$Type(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ProximityQueryNode$Type(const ProximityQueryNode$Type& obj) : ::java::lang::Enum(obj) {}

                static ProximityQueryNode$Type *NUMBER;
                static ProximityQueryNode$Type *PARAGRAPH;
                static ProximityQueryNode$Type *SENTENCE;

                static ProximityQueryNode$Type valueOf(const ::java::lang::String &);
                static JArray< ProximityQueryNode$Type > values();
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
              extern PyType_Def PY_TYPE_DEF(ProximityQueryNode$Type);
              extern PyTypeObject *PY_TYPE(ProximityQueryNode$Type);

              class t_ProximityQueryNode$Type {
              public:
                PyObject_HEAD
                ProximityQueryNode$Type object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ProximityQueryNode$Type *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ProximityQueryNode$Type&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ProximityQueryNode$Type&, PyTypeObject *);
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
