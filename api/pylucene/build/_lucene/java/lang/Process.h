#ifndef java_lang_Process_H
#define java_lang_Process_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Process;
    class Class;
    class InterruptedException;
  }
  namespace io {
    class InputStream;
    class OutputStream;
  }
  namespace util {
    namespace concurrent {
      class TimeUnit;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Process : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_destroy_f2cc1bce94666404,
        mid_destroyForcibly_6d7d150c8055e2eb,
        mid_exitValue_9972fcc56b44e79d,
        mid_getErrorStream_df4bed2fb5ba3ccf,
        mid_getInputStream_df4bed2fb5ba3ccf,
        mid_getOutputStream_c558fff49cac4c0c,
        mid_isAlive_8454bd5aa23fd11e,
        mid_waitFor_9972fcc56b44e79d,
        mid_waitFor_30164a42685760d2,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Process(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Process(const Process& obj) : ::java::lang::Object(obj) {}

      Process();

      void destroy() const;
      Process destroyForcibly() const;
      jint exitValue() const;
      ::java::io::InputStream getErrorStream() const;
      ::java::io::InputStream getInputStream() const;
      ::java::io::OutputStream getOutputStream() const;
      jboolean isAlive() const;
      jint waitFor() const;
      jboolean waitFor(jlong, const ::java::util::concurrent::TimeUnit &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Process);
    extern PyTypeObject *PY_TYPE(Process);

    class t_Process {
    public:
      PyObject_HEAD
      Process object;
      static PyObject *wrap_Object(const Process&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
