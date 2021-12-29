#ifndef java_lang_Throwable_H
#define java_lang_Throwable_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class PrintWriter;
    class PrintStream;
    class Serializable;
  }
  namespace lang {
    class Class;
    class StackTraceElement;
    class String;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Throwable : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_2e9d196dc293ffe6,
        mid_addSuppressed_471cfbdb800444a7,
        mid_fillInStackTrace_4d6e2861e0be5c10,
        mid_getCause_4d6e2861e0be5c10,
        mid_getLocalizedMessage_db9b55ba01e03e4b,
        mid_getMessage_db9b55ba01e03e4b,
        mid_getStackTrace_e23550404f2bac73,
        mid_getSuppressed_2475b6565261b7f9,
        mid_initCause_ddb33dca79461a7d,
        mid_printStackTrace_f2cc1bce94666404,
        mid_printStackTrace_51d7bcb97eea24e3,
        mid_printStackTrace_3df1c1d548bf22a4,
        mid_setStackTrace_3545c29583e3dd29,
        mid_toString_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Throwable(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Throwable(const Throwable& obj) : ::java::lang::Object(obj) {}

      Throwable();
      Throwable(const ::java::lang::String &);
      Throwable(const ::java::lang::String &, const Throwable &);

      void addSuppressed(const Throwable &) const;
      Throwable fillInStackTrace() const;
      Throwable getCause() const;
      ::java::lang::String getLocalizedMessage() const;
      ::java::lang::String getMessage() const;
      JArray< ::java::lang::StackTraceElement > getStackTrace() const;
      JArray< Throwable > getSuppressed() const;
      Throwable initCause(const Throwable &) const;
      void printStackTrace() const;
      void printStackTrace(const ::java::io::PrintStream &) const;
      void printStackTrace(const ::java::io::PrintWriter &) const;
      void setStackTrace(const JArray< ::java::lang::StackTraceElement > &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Throwable);
    extern PyTypeObject *PY_TYPE(Throwable);

    class t_Throwable {
    public:
      PyObject_HEAD
      Throwable object;
      static PyObject *wrap_Object(const Throwable&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
