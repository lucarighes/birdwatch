#ifndef java_lang_System_H
#define java_lang_System_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Properties;
  }
  namespace io {
    class Console;
    class InputStream;
    class PrintStream;
  }
  namespace lang {
    class Class;
    class SecurityManager;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System : public ::java::lang::Object {
     public:
      enum {
        mid_arraycopy_50ca941bfe936d37,
        mid_clearProperty_9bfa75c9f141b67f,
        mid_console_622cf7bfce4b2650,
        mid_currentTimeMillis_2e5ae9edcb9b072f,
        mid_exit_040c4cd0390c5aff,
        mid_gc_f2cc1bce94666404,
        mid_getProperties_6a9331fd535ab5ec,
        mid_getProperty_9bfa75c9f141b67f,
        mid_getProperty_04b762e0ad33dcc5,
        mid_getSecurityManager_53ff8c4da1aa4b91,
        mid_getenv_1c3426541413a55d,
        mid_getenv_9bfa75c9f141b67f,
        mid_identityHashCode_5a4805a36cf611e7,
        mid_lineSeparator_db9b55ba01e03e4b,
        mid_load_9fd2eb66a64e6f0f,
        mid_loadLibrary_9fd2eb66a64e6f0f,
        mid_mapLibraryName_9bfa75c9f141b67f,
        mid_nanoTime_2e5ae9edcb9b072f,
        mid_runFinalization_f2cc1bce94666404,
        mid_runFinalizersOnExit_9d72768e8fdce2b7,
        mid_setErr_51d7bcb97eea24e3,
        mid_setIn_a227449bf251faf1,
        mid_setOut_51d7bcb97eea24e3,
        mid_setProperties_5673ab61fe1799fe,
        mid_setProperty_04b762e0ad33dcc5,
        mid_setSecurityManager_3e7f43e60d77f0bc,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      System(const System& obj) : ::java::lang::Object(obj) {}

      static ::java::io::PrintStream *err;
      static ::java::io::InputStream *in;
      static ::java::io::PrintStream *out;

      static void arraycopy(const ::java::lang::Object &, jint, const ::java::lang::Object &, jint, jint);
      static ::java::lang::String clearProperty(const ::java::lang::String &);
      static ::java::io::Console console();
      static jlong currentTimeMillis();
      static void exit(jint);
      static void gc();
      static ::java::util::Properties getProperties();
      static ::java::lang::String getProperty(const ::java::lang::String &);
      static ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &);
      static ::java::lang::SecurityManager getSecurityManager();
      static ::java::util::Map getenv();
      static ::java::lang::String getenv(const ::java::lang::String &);
      static jint identityHashCode(const ::java::lang::Object &);
      static ::java::lang::String lineSeparator();
      static void load(const ::java::lang::String &);
      static void loadLibrary(const ::java::lang::String &);
      static ::java::lang::String mapLibraryName(const ::java::lang::String &);
      static jlong nanoTime();
      static void runFinalization();
      static void runFinalizersOnExit(jboolean);
      static void setErr(const ::java::io::PrintStream &);
      static void setIn(const ::java::io::InputStream &);
      static void setOut(const ::java::io::PrintStream &);
      static void setProperties(const ::java::util::Properties &);
      static ::java::lang::String setProperty(const ::java::lang::String &, const ::java::lang::String &);
      static void setSecurityManager(const ::java::lang::SecurityManager &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(System);
    extern PyTypeObject *PY_TYPE(System);

    class t_System {
    public:
      PyObject_HEAD
      System object;
      static PyObject *wrap_Object(const System&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
