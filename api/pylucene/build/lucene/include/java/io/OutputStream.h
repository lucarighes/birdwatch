#ifndef java_io_OutputStream_H
#define java_io_OutputStream_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Flushable;
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class OutputStream : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_close_f2cc1bce94666404,
        mid_flush_f2cc1bce94666404,
        mid_write_9ffdf271836656c4,
        mid_write_040c4cd0390c5aff,
        mid_write_43fdd39c09bb2fad,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit OutputStream(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      OutputStream(const OutputStream& obj) : ::java::lang::Object(obj) {}

      OutputStream();

      void close() const;
      void flush() const;
      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(OutputStream);
    extern PyTypeObject *PY_TYPE(OutputStream);

    class t_OutputStream {
    public:
      PyObject_HEAD
      OutputStream object;
      static PyObject *wrap_Object(const OutputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
