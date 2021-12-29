#ifndef java_util_concurrent_AbstractExecutorService_H
#define java_util_concurrent_AbstractExecutorService_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class List;
    namespace concurrent {
      class ExecutionException;
      class ExecutorService;
      class Future;
      class TimeoutException;
      class TimeUnit;
      class Callable;
    }
  }
  namespace lang {
    class Class;
    class Runnable;
    class InterruptedException;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class AbstractExecutorService : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f2cc1bce94666404,
          mid_invokeAll_a71e1c6683cd688a,
          mid_invokeAll_cb2f9bf716428758,
          mid_invokeAny_f186668b4e43c778,
          mid_invokeAny_1d5f23182fbe7c62,
          mid_submit_a65cd5a637725e4b,
          mid_submit_4935160b38dd7a16,
          mid_submit_d0c4b0810c5b0244,
          mid_newTaskFor_20f71611dab304bf,
          mid_newTaskFor_c7475478d72c9c9e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractExecutorService(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractExecutorService(const AbstractExecutorService& obj) : ::java::lang::Object(obj) {}

        AbstractExecutorService();

        ::java::util::List invokeAll(const ::java::util::Collection &) const;
        ::java::util::List invokeAll(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &) const;
        ::java::lang::Object invokeAny(const ::java::util::Collection &, jlong, const ::java::util::concurrent::TimeUnit &) const;
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
      extern PyType_Def PY_TYPE_DEF(AbstractExecutorService);
      extern PyTypeObject *PY_TYPE(AbstractExecutorService);

      class t_AbstractExecutorService {
      public:
        PyObject_HEAD
        AbstractExecutorService object;
        static PyObject *wrap_Object(const AbstractExecutorService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
