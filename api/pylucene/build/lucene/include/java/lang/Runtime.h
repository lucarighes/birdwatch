#ifndef java_lang_Runtime_H
#define java_lang_Runtime_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Process;
    class Runtime;
    class Class;
    class String;
    class Thread;
  }
  namespace io {
    class InputStream;
    class File;
    class OutputStream;
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Runtime : public ::java::lang::Object {
     public:
      enum {
        mid_addShutdownHook_5d5f76d7c905a26c,
        mid_availableProcessors_9972fcc56b44e79d,
        mid_exec_23688a07bfeb2b04,
        mid_exec_dea555afa5591a5d,
        mid_exec_74019666aa3f376f,
        mid_exec_c371260eb9c9f2c0,
        mid_exec_182f2183e7dfe28b,
        mid_exec_bcd2c02362f3c8d6,
        mid_exit_040c4cd0390c5aff,
        mid_freeMemory_2e5ae9edcb9b072f,
        mid_gc_f2cc1bce94666404,
        mid_getLocalizedInputStream_15a72fc0e28fa2b0,
        mid_getLocalizedOutputStream_9fd02a0c9af5f50a,
        mid_getRuntime_49dbde347a8552ca,
        mid_halt_040c4cd0390c5aff,
        mid_load_9fd2eb66a64e6f0f,
        mid_loadLibrary_9fd2eb66a64e6f0f,
        mid_maxMemory_2e5ae9edcb9b072f,
        mid_removeShutdownHook_fd3c2af4cc70d693,
        mid_runFinalization_f2cc1bce94666404,
        mid_runFinalizersOnExit_9d72768e8fdce2b7,
        mid_totalMemory_2e5ae9edcb9b072f,
        mid_traceInstructions_9d72768e8fdce2b7,
        mid_traceMethodCalls_9d72768e8fdce2b7,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Runtime(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Runtime(const Runtime& obj) : ::java::lang::Object(obj) {}

      void addShutdownHook(const ::java::lang::Thread &) const;
      jint availableProcessors() const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const ::java::lang::String &) const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
      ::java::lang::Process exec(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::java::io::File &) const;
      ::java::lang::Process exec(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::java::io::File &) const;
      void exit(jint) const;
      jlong freeMemory() const;
      void gc() const;
      ::java::io::InputStream getLocalizedInputStream(const ::java::io::InputStream &) const;
      ::java::io::OutputStream getLocalizedOutputStream(const ::java::io::OutputStream &) const;
      static Runtime getRuntime();
      void halt(jint) const;
      void load(const ::java::lang::String &) const;
      void loadLibrary(const ::java::lang::String &) const;
      jlong maxMemory() const;
      jboolean removeShutdownHook(const ::java::lang::Thread &) const;
      void runFinalization() const;
      static void runFinalizersOnExit(jboolean);
      jlong totalMemory() const;
      void traceInstructions(jboolean) const;
      void traceMethodCalls(jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Runtime);
    extern PyTypeObject *PY_TYPE(Runtime);

    class t_Runtime {
    public:
      PyObject_HEAD
      Runtime object;
      static PyObject *wrap_Object(const Runtime&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
