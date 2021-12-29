#ifndef java_util_concurrent_Executor_H
#define java_util_concurrent_Executor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Executor : public ::java::lang::Object {
       public:
        enum {
          mid_execute_81586dca3e83f35f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Executor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Executor(const Executor& obj) : ::java::lang::Object(obj) {}

        void execute(const ::java::lang::Runnable &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(Executor);
      extern PyTypeObject *PY_TYPE(Executor);

      class t_Executor {
      public:
        PyObject_HEAD
        Executor object;
        static PyObject *wrap_Object(const Executor&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
