#ifndef java_io_Writer_H
#define java_io_Writer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Appendable;
  }
  namespace io {
    class Flushable;
    class Closeable;
    class IOException;
    class Writer;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Writer : public ::java::lang::Object {
     public:
      enum {
        mid_append_71d1072f4440a85a,
        mid_append_dfe40db61c173c98,
        mid_append_f5fb2d6ae8419235,
        mid_close_f2cc1bce94666404,
        mid_flush_f2cc1bce94666404,
        mid_write_82dffe1ba55ed767,
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

      explicit Writer(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Writer(const Writer& obj) : ::java::lang::Object(obj) {}

      Writer append(jchar) const;
      Writer append(const ::java::lang::CharSequence &) const;
      Writer append(const ::java::lang::CharSequence &, jint, jint) const;
      void close() const;
      void flush() const;
      void write(const JArray< jchar > &) const;
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
    extern PyType_Def PY_TYPE_DEF(Writer);
    extern PyTypeObject *PY_TYPE(Writer);

    class t_Writer {
    public:
      PyObject_HEAD
      Writer object;
      static PyObject *wrap_Object(const Writer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
