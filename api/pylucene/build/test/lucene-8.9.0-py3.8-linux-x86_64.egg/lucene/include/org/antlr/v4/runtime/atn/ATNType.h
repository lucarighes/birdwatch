#ifndef org_antlr_v4_runtime_atn_ATNType_H
#define org_antlr_v4_runtime_atn_ATNType_H

#include "java/lang/Enum.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNType;
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
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ATNType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_42f33926539db7ec,
              mid_values_d620a1810d3ec011,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNType(const ATNType& obj) : ::java::lang::Enum(obj) {}

            static ATNType *LEXER;
            static ATNType *PARSER;

            static ATNType valueOf(const ::java::lang::String &);
            static JArray< ATNType > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          extern PyType_Def PY_TYPE_DEF(ATNType);
          extern PyTypeObject *PY_TYPE(ATNType);

          class t_ATNType {
          public:
            PyObject_HEAD
            ATNType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ATNType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ATNType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ATNType&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
