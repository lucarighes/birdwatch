#ifndef java_nio_file_DirectoryStream$Filter_H
#define java_nio_file_DirectoryStream$Filter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class DirectoryStream$Filter : public ::java::lang::Object {
       public:
        enum {
          mid_accept_8b72f2dcdde6fd1d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DirectoryStream$Filter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DirectoryStream$Filter(const DirectoryStream$Filter& obj) : ::java::lang::Object(obj) {}

        jboolean accept(const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(DirectoryStream$Filter);
      extern PyTypeObject *PY_TYPE(DirectoryStream$Filter);

      class t_DirectoryStream$Filter {
      public:
        PyObject_HEAD
        DirectoryStream$Filter object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_DirectoryStream$Filter *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const DirectoryStream$Filter&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const DirectoryStream$Filter&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
