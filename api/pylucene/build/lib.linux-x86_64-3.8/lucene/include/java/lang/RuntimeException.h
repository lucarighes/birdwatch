#ifndef java_lang_RuntimeException_H
#define java_lang_RuntimeException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class String;
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class RuntimeException : public ::java::lang::Exception {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_471cfbdb800444a7,
        mid_init$_2e9d196dc293ffe6,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit RuntimeException(jobject obj) : ::java::lang::Exception(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      RuntimeException(const RuntimeException& obj) : ::java::lang::Exception(obj) {}

      RuntimeException();
      RuntimeException(const ::java::lang::String &);
      RuntimeException(const ::java::lang::Throwable &);
      RuntimeException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(RuntimeException);
    extern PyTypeObject *PY_TYPE(RuntimeException);

    class t_RuntimeException {
    public:
      PyObject_HEAD
      RuntimeException object;
      static PyObject *wrap_Object(const RuntimeException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
