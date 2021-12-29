#ifndef java_io_EOFException_H
#define java_io_EOFException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class EOFException : public ::java::io::IOException {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit EOFException(jobject obj) : ::java::io::IOException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      EOFException(const EOFException& obj) : ::java::io::IOException(obj) {}

      EOFException();
      EOFException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(EOFException);
    extern PyTypeObject *PY_TYPE(EOFException);

    class t_EOFException {
    public:
      PyObject_HEAD
      EOFException object;
      static PyObject *wrap_Object(const EOFException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
