#ifndef org_apache_lucene_analysis_ko_POS$Type_H
#define org_apache_lucene_analysis_ko_POS$Type_H

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
      namespace analysis {
        namespace ko {
          class POS$Type;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class POS$Type : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_6c89cd379c969f98,
              mid_values_baad864b4f439dae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit POS$Type(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            POS$Type(const POS$Type& obj) : ::java::lang::Enum(obj) {}

            static POS$Type *COMPOUND;
            static POS$Type *INFLECT;
            static POS$Type *MORPHEME;
            static POS$Type *PREANALYSIS;

            static POS$Type valueOf(const ::java::lang::String &);
            static JArray< POS$Type > values();
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
      namespace analysis {
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(POS$Type);
          extern PyTypeObject *PY_TYPE(POS$Type);

          class t_POS$Type {
          public:
            PyObject_HEAD
            POS$Type object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_POS$Type *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const POS$Type&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const POS$Type&, PyTypeObject *);
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
