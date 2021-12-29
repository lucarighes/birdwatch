#ifndef java_lang_SecurityManager_H
#define java_lang_SecurityManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ThreadGroup;
    class Class;
    class String;
    class Thread;
  }
  namespace io {
    class FileDescriptor;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class SecurityManager : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_checkAccept_3fb1dae8d4037984,
        mid_checkAccess_5d5f76d7c905a26c,
        mid_checkAccess_b520c93262c91c59,
        mid_checkAwtEventQueueAccess_f2cc1bce94666404,
        mid_checkConnect_3fb1dae8d4037984,
        mid_checkConnect_d6d4bb87abff9d3d,
        mid_checkCreateClassLoader_f2cc1bce94666404,
        mid_checkDelete_9fd2eb66a64e6f0f,
        mid_checkExec_9fd2eb66a64e6f0f,
        mid_checkExit_040c4cd0390c5aff,
        mid_checkLink_9fd2eb66a64e6f0f,
        mid_checkListen_040c4cd0390c5aff,
        mid_checkMemberAccess_b4da22b11eb3f6cc,
        mid_checkPackageAccess_9fd2eb66a64e6f0f,
        mid_checkPackageDefinition_9fd2eb66a64e6f0f,
        mid_checkPrintJobAccess_f2cc1bce94666404,
        mid_checkPropertiesAccess_f2cc1bce94666404,
        mid_checkPropertyAccess_9fd2eb66a64e6f0f,
        mid_checkRead_777cb188f5616fc7,
        mid_checkRead_9fd2eb66a64e6f0f,
        mid_checkRead_a814174df0bbb9ee,
        mid_checkSecurityAccess_9fd2eb66a64e6f0f,
        mid_checkSetFactory_f2cc1bce94666404,
        mid_checkSystemClipboardAccess_f2cc1bce94666404,
        mid_checkTopLevelWindow_8b72f2dcdde6fd1d,
        mid_checkWrite_777cb188f5616fc7,
        mid_checkWrite_9fd2eb66a64e6f0f,
        mid_getInCheck_8454bd5aa23fd11e,
        mid_getSecurityContext_d6bcd06f3102c4d9,
        mid_getThreadGroup_04b6c2a69b2c4912,
        mid_getClassContext_2e0bbcab33cbe6ec,
        mid_currentClassLoader_62052cb9b95d8b0c,
        mid_currentLoadedClass_9df2cc6ebce035fe,
        mid_classDepth_a5a7d1128e9e2bb7,
        mid_classLoaderDepth_9972fcc56b44e79d,
        mid_inClass_145b2d0af0c06b93,
        mid_inClassLoader_8454bd5aa23fd11e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SecurityManager(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SecurityManager(const SecurityManager& obj) : ::java::lang::Object(obj) {}

      SecurityManager();

      void checkAccept(const ::java::lang::String &, jint) const;
      void checkAccess(const ::java::lang::Thread &) const;
      void checkAccess(const ::java::lang::ThreadGroup &) const;
      void checkAwtEventQueueAccess() const;
      void checkConnect(const ::java::lang::String &, jint) const;
      void checkConnect(const ::java::lang::String &, jint, const ::java::lang::Object &) const;
      void checkCreateClassLoader() const;
      void checkDelete(const ::java::lang::String &) const;
      void checkExec(const ::java::lang::String &) const;
      void checkExit(jint) const;
      void checkLink(const ::java::lang::String &) const;
      void checkListen(jint) const;
      void checkMemberAccess(const ::java::lang::Class &, jint) const;
      void checkPackageAccess(const ::java::lang::String &) const;
      void checkPackageDefinition(const ::java::lang::String &) const;
      void checkPrintJobAccess() const;
      void checkPropertiesAccess() const;
      void checkPropertyAccess(const ::java::lang::String &) const;
      void checkRead(const ::java::io::FileDescriptor &) const;
      void checkRead(const ::java::lang::String &) const;
      void checkRead(const ::java::lang::String &, const ::java::lang::Object &) const;
      void checkSecurityAccess(const ::java::lang::String &) const;
      void checkSetFactory() const;
      void checkSystemClipboardAccess() const;
      jboolean checkTopLevelWindow(const ::java::lang::Object &) const;
      void checkWrite(const ::java::io::FileDescriptor &) const;
      void checkWrite(const ::java::lang::String &) const;
      jboolean getInCheck() const;
      ::java::lang::Object getSecurityContext() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(SecurityManager);
    extern PyTypeObject *PY_TYPE(SecurityManager);

    class t_SecurityManager {
    public:
      PyObject_HEAD
      SecurityManager object;
      static PyObject *wrap_Object(const SecurityManager&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
