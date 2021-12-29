#ifndef java_nio_file_FileVisitOption_H
#define java_nio_file_FileVisitOption_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace nio {
    namespace file {
      class FileVisitOption;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class FileVisitOption : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_578a31b379eaab48,
          mid_values_2e55ea828d9ee8ed,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FileVisitOption(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FileVisitOption(const FileVisitOption& obj) : ::java::lang::Enum(obj) {}

        static FileVisitOption *FOLLOW_LINKS;

        static FileVisitOption valueOf(const ::java::lang::String &);
        static JArray< FileVisitOption > values();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(FileVisitOption);
      extern PyTypeObject *PY_TYPE(FileVisitOption);

      class t_FileVisitOption {
      public:
        PyObject_HEAD
        FileVisitOption object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FileVisitOption *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FileVisitOption&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FileVisitOption&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
