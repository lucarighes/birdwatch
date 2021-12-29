#ifndef java_io_Reader_H
#define java_io_Reader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Readable;
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Reader : public ::java::lang::Object {
     public:
      enum {
        mid_close_f2cc1bce94666404,
        mid_mark_040c4cd0390c5aff,
        mid_markSupported_8454bd5aa23fd11e,
        mid_read_9972fcc56b44e79d,
        mid_read_946cc819d92a7347,
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

      explicit Reader(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Reader(const Reader& obj) : ::java::lang::Object(obj) {}

      void close() const;
      void mark(jint) const;
      jboolean markSupported() const;
      jint read() const;
      jint read(const JArray< jchar > &) const;
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
    extern PyType_Def PY_TYPE_DEF(Reader);
    extern PyTypeObject *PY_TYPE(Reader);

    class t_Reader {
    public:
      PyObject_HEAD
      Reader object;
      static PyObject *wrap_Object(const Reader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
