#ifndef java_util_concurrent_ThreadFactory_H
#define java_util_concurrent_ThreadFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Thread;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class ThreadFactory : public ::java::lang::Object {
       public:
        enum {
          mid_newThread_2808e07b368f4be8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ThreadFactory(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ThreadFactory(const ThreadFactory& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Thread newThread(const ::java::lang::Runnable &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(ThreadFactory);
      extern PyTypeObject *PY_TYPE(ThreadFactory);

      class t_ThreadFactory {
      public:
        PyObject_HEAD
        ThreadFactory object;
        static PyObject *wrap_Object(const ThreadFactory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
