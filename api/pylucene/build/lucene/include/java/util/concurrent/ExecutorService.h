#ifndef java_util_concurrent_ExecutorService_H
#define java_util_concurrent_ExecutorService_H

#include "java/util/concurrent/Executor.h"

namespace java {
  namespace util {
    class Collection;
    class List;
    namespace concurrent {
      class ExecutionException;
      class Future;
      class TimeoutException;
      class TimeUnit;
      class Callable;
    }
  }
  namespace lang {
    class Class;
    class Object;
    class Runnable;
    class InterruptedException;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class ExecutorService : public ::java::util::concurrent::Executor {
       public:
        enum {
          mid_awaitTermination_30164a42685760d2,
          mid_invokeAll_a71e1c6683cd688a,
          mid_invokeAll_cb2f9bf716428758,
          mid_invokeAny_f186668b4e43c778,
          mid_invokeAny_1d5f23182fbe7c62,
          mid_isShutdown_8454bd5aa23fd11e,
          mid_isTerminated_8454bd5aa23fd11e,
          mid_shutdown_f2cc1bce94666404,
          mid_shutdownNow_49ec78390f08338a,
          mid_submit_a65cd5a637725e4b,
          mid_submit_4935160b38dd7a16,
          mid_submit_d0c4b0810c5b0244,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ExecutorService(jobject obj) : ::java::util::concurrent::Executor(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ExecutorService(const ExecutorService& obj) : ::java::util::concurrent::Executor(obj) {}

        jboolean awaitTermination(jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        jboolean isShutdown() const;
        jboolean isTerminated() const;
        void shutdown() const;
        ::java::util::List shutdownNow() const;
        ::java::util::concurrent::Future submit(const ::java::lang::Runnable &) const;
        ::java::util::concurrent::Future submit(const ::java::util::concurrent::Callable &) const;
        ::java::util::concurrent::Future submit(const ::java::lang::Runnable &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(ExecutorService);
      extern PyTypeObject *PY_TYPE(ExecutorService);

      class t_ExecutorService {
      public:
        PyObject_HEAD
        ExecutorService object;
        static PyObject *wrap_Object(const ExecutorService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
