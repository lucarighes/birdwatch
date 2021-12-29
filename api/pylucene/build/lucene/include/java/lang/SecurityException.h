#ifndef java_lang_SecurityException_H
#define java_lang_SecurityException_H

#include "java/lang/RuntimeException.h"

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

    class SecurityException : public ::java::lang::RuntimeException {
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

      explicit SecurityException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SecurityException(const SecurityException& obj) : ::java::lang::RuntimeException(obj) {}

      SecurityException();
      SecurityException(const ::java::lang::String &);
      SecurityException(const ::java::lang::Throwable &);
      SecurityException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(SecurityException);
    extern PyTypeObject *PY_TYPE(SecurityException);

    class t_SecurityException {
    public:
      PyObject_HEAD
      SecurityException object;
      static PyObject *wrap_Object(const SecurityException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
