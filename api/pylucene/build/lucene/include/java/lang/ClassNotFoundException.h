#ifndef java_lang_ClassNotFoundException_H
#define java_lang_ClassNotFoundException_H

#include "java/lang/ReflectiveOperationException.h"

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

    class ClassNotFoundException : public ::java::lang::ReflectiveOperationException {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_2e9d196dc293ffe6,
        mid_getCause_4d6e2861e0be5c10,
        mid_getException_4d6e2861e0be5c10,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ClassNotFoundException(jobject obj) : ::java::lang::ReflectiveOperationException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ClassNotFoundException(const ClassNotFoundException& obj) : ::java::lang::ReflectiveOperationException(obj) {}

      ClassNotFoundException();
      ClassNotFoundException(const ::java::lang::String &);
      ClassNotFoundException(const ::java::lang::String &, const ::java::lang::Throwable &);

      ::java::lang::Throwable getCause() const;
      ::java::lang::Throwable getException() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ClassNotFoundException);
    extern PyTypeObject *PY_TYPE(ClassNotFoundException);

    class t_ClassNotFoundException {
    public:
      PyObject_HEAD
      ClassNotFoundException object;
      static PyObject *wrap_Object(const ClassNotFoundException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
