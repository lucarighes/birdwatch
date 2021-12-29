#ifndef java_lang_Thread_H
#define java_lang_Thread_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class ClassLoader;
    class ThreadGroup;
    class Class;
    class Thread$UncaughtExceptionHandler;
    class StackTraceElement;
    class Thread$State;
    class Runnable;
    class String;
    class InterruptedException;
    class Thread;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_81586dca3e83f35f,
        mid_init$_1dfb4df15ca2768b,
        mid_init$_b5f522c8d8a66ce7,
        mid_init$_7bab04f9bc5e199c,
        mid_init$_6fa1f8e83014b39b,
        mid_init$_f0c22eb6816cc557,
        mid_activeCount_9972fcc56b44e79d,
        mid_checkAccess_f2cc1bce94666404,
        mid_countStackFrames_9972fcc56b44e79d,
        mid_currentThread_a12dfffca9b3641a,
        mid_destroy_f2cc1bce94666404,
        mid_dumpStack_f2cc1bce94666404,
        mid_enumerate_6735bbb14792d0b6,
        mid_getAllStackTraces_1c3426541413a55d,
        mid_getContextClassLoader_62052cb9b95d8b0c,
        mid_getDefaultUncaughtExceptionHandler_4760d5b8472495aa,
        mid_getId_2e5ae9edcb9b072f,
        mid_getName_db9b55ba01e03e4b,
        mid_getPriority_9972fcc56b44e79d,
        mid_getStackTrace_e23550404f2bac73,
        mid_getState_43d69d4a615b2e5a,
        mid_getThreadGroup_04b6c2a69b2c4912,
        mid_getUncaughtExceptionHandler_4760d5b8472495aa,
        mid_holdsLock_8b72f2dcdde6fd1d,
        mid_interrupt_f2cc1bce94666404,
        mid_interrupted_8454bd5aa23fd11e,
        mid_isAlive_8454bd5aa23fd11e,
        mid_isDaemon_8454bd5aa23fd11e,
        mid_isInterrupted_8454bd5aa23fd11e,
        mid_join_f2cc1bce94666404,
        mid_join_9c778c9bce6694df,
        mid_join_7cbcb52ba5068aff,
        mid_resume_f2cc1bce94666404,
        mid_run_f2cc1bce94666404,
        mid_setContextClassLoader_98a876e82795b112,
        mid_setDaemon_9d72768e8fdce2b7,
        mid_setDefaultUncaughtExceptionHandler_178167206395caa2,
        mid_setName_9fd2eb66a64e6f0f,
        mid_setPriority_040c4cd0390c5aff,
        mid_setUncaughtExceptionHandler_178167206395caa2,
        mid_sleep_9c778c9bce6694df,
        mid_sleep_7cbcb52ba5068aff,
        mid_start_f2cc1bce94666404,
        mid_stop_f2cc1bce94666404,
        mid_stop_471cfbdb800444a7,
        mid_suspend_f2cc1bce94666404,
        mid_toString_db9b55ba01e03e4b,
        mid_yield_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Thread(const Thread& obj) : ::java::lang::Object(obj) {}

      static jint MAX_PRIORITY;
      static jint MIN_PRIORITY;
      static jint NORM_PRIORITY;

      Thread();
      Thread(const ::java::lang::String &);
      Thread(const ::java::lang::Runnable &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &);
      Thread(const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &);
      Thread(const ::java::lang::ThreadGroup &, const ::java::lang::Runnable &, const ::java::lang::String &, jlong);

      static jint activeCount();
      void checkAccess() const;
      jint countStackFrames() const;
      static Thread currentThread();
      void destroy() const;
      static void dumpStack();
      static jint enumerate(const JArray< Thread > &);
      static ::java::util::Map getAllStackTraces();
      ::java::lang::ClassLoader getContextClassLoader() const;
      static ::java::lang::Thread$UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
      jlong getId() const;
      ::java::lang::String getName() const;
      jint getPriority() const;
      JArray< ::java::lang::StackTraceElement > getStackTrace() const;
      ::java::lang::Thread$State getState() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
      ::java::lang::Thread$UncaughtExceptionHandler getUncaughtExceptionHandler() const;
      static jboolean holdsLock(const ::java::lang::Object &);
      void interrupt() const;
      static jboolean interrupted();
      jboolean isAlive() const;
      jboolean isDaemon() const;
      jboolean isInterrupted() const;
      void join() const;
      void join(jlong) const;
      void join(jlong, jint) const;
      void resume() const;
      void run() const;
      void setContextClassLoader(const ::java::lang::ClassLoader &) const;
      void setDaemon(jboolean) const;
      static void setDefaultUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &);
      void setName(const ::java::lang::String &) const;
      void setPriority(jint) const;
      void setUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler &) const;
      static void sleep(jlong);
      static void sleep(jlong, jint);
      void start() const;
      void stop() const;
      void stop(const ::java::lang::Throwable &) const;
      void suspend() const;
      ::java::lang::String toString() const;
      static void yield();
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Thread);
    extern PyTypeObject *PY_TYPE(Thread);

    class t_Thread {
    public:
      PyObject_HEAD
      Thread object;
      static PyObject *wrap_Object(const Thread&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
