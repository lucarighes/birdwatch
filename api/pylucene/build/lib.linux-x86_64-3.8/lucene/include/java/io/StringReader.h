#ifndef java_io_StringReader_H
#define java_io_StringReader_H

#include "java/io/Reader.h"

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

    class StringReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_close_f2cc1bce94666404,
        mid_mark_040c4cd0390c5aff,
        mid_markSupported_8454bd5aa23fd11e,
        mid_read_9972fcc56b44e79d,
        mid_read_644fc0bf0aa7fb26,
        mid_ready_8454bd5aa23fd11e,
        mid_reset_f2cc1bce94666404,
        mid_skip_d711eecdc469624a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringReader(jobject obj) : ::java::io::Reader(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringReader(const StringReader& obj) : ::java::io::Reader(obj) {}

      StringReader(const ::java::lang::String &);

      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jchar > &, jint, jint) const;
      jboolean ready() const;
      void reset() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(StringReader);
    extern PyTypeObject *PY_TYPE(StringReader);

    class t_StringReader {
    public:
      PyObject_HEAD
      StringReader object;
      static PyObject *wrap_Object(const StringReader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
