#ifndef java_io_InputStream_H
#define java_io_InputStream_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
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

    class InputStream : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_available_9972fcc56b44e79d,
        mid_close_f2cc1bce94666404,
        mid_mark_040c4cd0390c5aff,
        mid_markSupported_8454bd5aa23fd11e,
        mid_read_9972fcc56b44e79d,
        mid_read_bc39a112ba52f98e,
        mid_read_a974b127529aaf33,
        mid_reset_f2cc1bce94666404,
        mid_skip_d711eecdc469624a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit InputStream(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      InputStream(const InputStream& obj) : ::java::lang::Object(obj) {}

      InputStream();

      jint available() const;
      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jbyte > &) const;
      jint read(const JArray< jbyte > &, jint, jint) const;
      void reset() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(InputStream);
    extern PyTypeObject *PY_TYPE(InputStream);

    class t_InputStream {
    public:
      PyObject_HEAD
      InputStream object;
      static PyObject *wrap_Object(const InputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
