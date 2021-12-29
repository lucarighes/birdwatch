#ifndef java_util_concurrent_ExecutionException_H
#define java_util_concurrent_ExecutionException_H

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
  namespace util {
    namespace concurrent {

      class ExecutionException : public ::java::lang::Exception {
       public:
        enum {
          mid_init$_471cfbdb800444a7,
          mid_init$_2e9d196dc293ffe6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ExecutionException(jobject obj) : ::java::lang::Exception(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ExecutionException(const ExecutionException& obj) : ::java::lang::Exception(obj) {}

        ExecutionException(const ::java::lang::Throwable &);
        ExecutionException(const ::java::lang::String &, const ::java::lang::Throwable &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(ExecutionException);
      extern PyTypeObject *PY_TYPE(ExecutionException);

      class t_ExecutionException {
      public:
        PyObject_HEAD
        ExecutionException object;
        static PyObject *wrap_Object(const ExecutionException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
