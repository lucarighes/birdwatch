#ifndef java_io_BufferedWriter_H
#define java_io_BufferedWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class BufferedWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_86f814b19baecb9d,
        mid_init$_cb6f61479f506b95,
        mid_close_f2cc1bce94666404,
        mid_flush_f2cc1bce94666404,
        mid_newLine_f2cc1bce94666404,
        mid_write_040c4cd0390c5aff,
        mid_write_d5128be76a214037,
        mid_write_08af6957f9159d4d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BufferedWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BufferedWriter(const BufferedWriter& obj) : ::java::io::Writer(obj) {}

      BufferedWriter(const ::java::io::Writer &);
      BufferedWriter(const ::java::io::Writer &, jint);

      void close() const;
      void flush() const;
      void newLine() const;
      void write(jint) const;
      void write(const JArray< jchar > &, jint, jint) const;
      void write(const ::java::lang::String &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(BufferedWriter);
    extern PyTypeObject *PY_TYPE(BufferedWriter);

    class t_BufferedWriter {
    public:
      PyObject_HEAD
      BufferedWriter object;
      static PyObject *wrap_Object(const BufferedWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
