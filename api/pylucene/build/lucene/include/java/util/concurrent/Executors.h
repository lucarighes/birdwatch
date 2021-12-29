#ifndef java_util_concurrent_Executors_H
#define java_util_concurrent_Executors_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Runnable;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
      class Callable;
      class ScheduledExecutorService;
      class ThreadFactory;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Executors : public ::java::lang::Object {
       public:
        enum {
          mid_callable_de15a97452a52363,
          mid_callable_e7506d15877165e4,
          mid_defaultThreadFactory_09fdd6f85c9842aa,
          mid_newCachedThreadPool_5a7e38a80c9a352f,
          mid_newCachedThreadPool_c107c3b99f9591e0,
          mid_newFixedThreadPool_7c8c126d38cff000,
          mid_newFixedThreadPool_b830323109b9157a,
          mid_newScheduledThreadPool_f26a5b9c99e7ae6e,
          mid_newScheduledThreadPool_6f8baae544eb4d1c,
          mid_newSingleThreadExecutor_5a7e38a80c9a352f,
          mid_newSingleThreadExecutor_c107c3b99f9591e0,
          mid_newSingleThreadScheduledExecutor_2db92c6a9e18c0c4,
          mid_newSingleThreadScheduledExecutor_ef8e7850ead2e158,
          mid_newWorkStealingPool_5a7e38a80c9a352f,
          mid_newWorkStealingPool_7c8c126d38cff000,
          mid_privilegedCallable_fc79c0d8da3e4575,
          mid_privilegedCallableUsingCurrentClassLoader_fc79c0d8da3e4575,
          mid_privilegedThreadFactory_09fdd6f85c9842aa,
          mid_unconfigurableExecutorService_95da0c7a50527427,
          mid_unconfigurableScheduledExecutorService_ff46e4a302ec396e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Executors(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Executors(const Executors& obj) : ::java::lang::Object(obj) {}

        static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable &);
        static ::java::util::concurrent::Callable callable(const ::java::lang::Runnable &, const ::java::lang::Object &);
        static ::java::util::concurrent::ThreadFactory defaultThreadFactory();
        static ::java::util::concurrent::ExecutorService newCachedThreadPool();
        static ::java::util::concurrent::ExecutorService newCachedThreadPool(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newFixedThreadPool(jint);
        static ::java::util::concurrent::ExecutorService newFixedThreadPool(jint, const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(jint);
        static ::java::util::concurrent::ScheduledExecutorService newScheduledThreadPool(jint, const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newSingleThreadExecutor();
        static ::java::util::concurrent::ExecutorService newSingleThreadExecutor(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor();
        static ::java::util::concurrent::ScheduledExecutorService newSingleThreadScheduledExecutor(const ::java::util::concurrent::ThreadFactory &);
        static ::java::util::concurrent::ExecutorService newWorkStealingPool();
        static ::java::util::concurrent::ExecutorService newWorkStealingPool(jint);
        static ::java::util::concurrent::Callable privilegedCallable(const ::java::util::concurrent::Callable &);
        static ::java::util::concurrent::Callable privilegedCallableUsingCurrentClassLoader(const ::java::util::concurrent::Callable &);
        static ::java::util::concurrent::ThreadFactory privilegedThreadFactory();
        static ::java::util::concurrent::ExecutorService unconfigurableExecutorService(const ::java::util::concurrent::ExecutorService &);
        static ::java::util::concurrent::ScheduledExecutorService unconfigurableScheduledExecutorService(const ::java::util::concurrent::ScheduledExecutorService &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(Executors);
      extern PyTypeObject *PY_TYPE(Executors);

      class t_Executors {
      public:
        PyObject_HEAD
        Executors object;
        static PyObject *wrap_Object(const Executors&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
