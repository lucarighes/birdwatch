#ifndef java_lang_ThreadGroup_H
#define java_lang_ThreadGroup_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Class;
    class Thread$UncaughtExceptionHandler;
    class String;
    class Thread;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ThreadGroup : public ::java::lang::Object {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_1dfb4df15ca2768b,
        mid_activeCount_9972fcc56b44e79d,
        mid_activeGroupCount_9972fcc56b44e79d,
        mid_allowThreadSuspension_e84cf59305ee1535,
        mid_checkAccess_f2cc1bce94666404,
        mid_destroy_f2cc1bce94666404,
        mid_enumerate_6735bbb14792d0b6,
        mid_enumerate_8010a7e86056d575,
        mid_enumerate_68712d3d484c4348,
        mid_enumerate_047841af37a17082,
        mid_getMaxPriority_9972fcc56b44e79d,
        mid_getName_db9b55ba01e03e4b,
        mid_getParent_04b6c2a69b2c4912,
        mid_interrupt_f2cc1bce94666404,
        mid_isDaemon_8454bd5aa23fd11e,
        mid_isDestroyed_8454bd5aa23fd11e,
        mid_list_f2cc1bce94666404,
        mid_parentOf_5a154170fc1a395d,
        mid_resume_f2cc1bce94666404,
        mid_setDaemon_9d72768e8fdce2b7,
        mid_setMaxPriority_040c4cd0390c5aff,
        mid_stop_f2cc1bce94666404,
        mid_suspend_f2cc1bce94666404,
        mid_toString_db9b55ba01e03e4b,
        mid_uncaughtException_8a0c1817de3dc30e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ThreadGroup(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ThreadGroup(const ThreadGroup& obj) : ::java::lang::Object(obj) {}

      ThreadGroup(const ::java::lang::String &);
      ThreadGroup(const ThreadGroup &, const ::java::lang::String &);

      jint activeCount() const;
      jint activeGroupCount() const;
      jboolean allowThreadSuspension(jboolean) const;
      void checkAccess() const;
      void destroy() const;
      jint enumerate(const JArray< ::java::lang::Thread > &) const;
      jint enumerate(const JArray< ThreadGroup > &) const;
      jint enumerate(const JArray< ::java::lang::Thread > &, jboolean) const;
      jint enumerate(const JArray< ThreadGroup > &, jboolean) const;
      jint getMaxPriority() const;
      ::java::lang::String getName() const;
      ThreadGroup getParent() const;
      void interrupt() const;
      jboolean isDaemon() const;
      jboolean isDestroyed() const;
      void list() const;
      jboolean parentOf(const ThreadGroup &) const;
      void resume() const;
      void setDaemon(jboolean) const;
      void setMaxPriority(jint) const;
      void stop() const;
      void suspend() const;
      ::java::lang::String toString() const;
      void uncaughtException(const ::java::lang::Thread &, const ::java::lang::Throwable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ThreadGroup);
    extern PyTypeObject *PY_TYPE(ThreadGroup);

    class t_ThreadGroup {
    public:
      PyObject_HEAD
      ThreadGroup object;
      static PyObject *wrap_Object(const ThreadGroup&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
