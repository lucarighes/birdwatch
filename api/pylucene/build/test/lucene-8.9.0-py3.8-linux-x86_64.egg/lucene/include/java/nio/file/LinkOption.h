#ifndef java_nio_file_LinkOption_H
#define java_nio_file_LinkOption_H

#include "java/lang/Enum.h"

namespace java {
  namespace nio {
    namespace file {
      class LinkOption;
      class OpenOption;
      class CopyOption;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class LinkOption : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_2ec90f89a2ce4698,
          mid_values_4475f60e7e8f6d6f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LinkOption(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LinkOption(const LinkOption& obj) : ::java::lang::Enum(obj) {}

        static LinkOption *NOFOLLOW_LINKS;

        static LinkOption valueOf(const ::java::lang::String &);
        static JArray< LinkOption > values();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(LinkOption);
      extern PyTypeObject *PY_TYPE(LinkOption);

      class t_LinkOption {
      public:
        PyObject_HEAD
        LinkOption object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LinkOption *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LinkOption&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LinkOption&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
