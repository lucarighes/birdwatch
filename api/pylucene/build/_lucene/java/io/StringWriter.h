#ifndef java_io_StringWriter_H
#define java_io_StringWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class StringBuffer;
  }
  namespace io {
    class StringWriter;
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class StringWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_040c4cd0390c5aff,
        mid_append_f3607c00b41833a7,
        mid_append_c7e6573b05b21f21,
        mid_append_7e59d0e0a8eb8c2d,
        mid_close_f2cc1bce94666404,
        mid_flush_f2cc1bce94666404,
        mid_getBuffer_3e74005fd5116584,
        mid_toString_db9b55ba01e03e4b,
        mid_write_9fd2eb66a64e6f0f,
        mid_write_040c4cd0390c5aff,
        mid_write_d5128be76a214037,
        mid_write_08af6957f9159d4d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringWriter(const StringWriter& obj) : ::java::io::Writer(obj) {}

      StringWriter();
      StringWriter(jint);

      StringWriter append(jchar) const;
      StringWriter append(const ::java::lang::CharSequence &) const;
      StringWriter append(const ::java::lang::CharSequence &, jint, jint) const;
      void close() const;
      void flush() const;
      ::java::lang::StringBuffer getBuffer() const;
      ::java::lang::String toString() const;
      void write(const ::java::lang::String &) const;
      void write(jint) const;
      void write(const JArray< jchar > &, jint, jint) const;
      void write(const ::java::lang::String &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(StringWriter);
    extern PyTypeObject *PY_TYPE(StringWriter);

    class t_StringWriter {
    public:
      PyObject_HEAD
      StringWriter object;
      static PyObject *wrap_Object(const StringWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
