#ifndef java_io_BufferedReader_H
#define java_io_BufferedReader_H

#include "java/io/Reader.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class BufferedReader : public ::java::io::Reader {
     public:
      enum {
        mid_init$_b2f3c57f5e6eb3f2,
        mid_init$_4ed213f23bd909e8,
        mid_close_f2cc1bce94666404,
        mid_mark_040c4cd0390c5aff,
        mid_markSupported_8454bd5aa23fd11e,
        mid_read_9972fcc56b44e79d,
        mid_read_644fc0bf0aa7fb26,
        mid_readLine_db9b55ba01e03e4b,
        mid_ready_8454bd5aa23fd11e,
        mid_reset_f2cc1bce94666404,
        mid_skip_d711eecdc469624a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BufferedReader(jobject obj) : ::java::io::Reader(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BufferedReader(const BufferedReader& obj) : ::java::io::Reader(obj) {}

      BufferedReader(const ::java::io::Reader &);
      BufferedReader(const ::java::io::Reader &, jint);

      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jchar > &, jint, jint) const;
      ::java::lang::String readLine() const;
      jboolean ready() const;
      void reset() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(BufferedReader);
    extern PyTypeObject *PY_TYPE(BufferedReader);

    class t_BufferedReader {
    public:
      PyObject_HEAD
      BufferedReader object;
      static PyObject *wrap_Object(const BufferedReader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
