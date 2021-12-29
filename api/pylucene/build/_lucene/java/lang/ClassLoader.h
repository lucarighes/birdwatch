#ifndef java_lang_ClassLoader_H
#define java_lang_ClassLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
    class ClassNotFoundException;
    class ClassLoader;
  }
  namespace util {
    class Enumeration;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class ClassLoader : public ::java::lang::Object {
     public:
      enum {
        mid_clearAssertionStatus_f2cc1bce94666404,
        mid_getParent_62052cb9b95d8b0c,
        mid_getResourceAsStream_f9a3577e7bead470,
        mid_getSystemClassLoader_62052cb9b95d8b0c,
        mid_getSystemResourceAsStream_f9a3577e7bead470,
        mid_loadClass_337d52b895d55b49,
        mid_setClassAssertionStatus_b1180807b87ba737,
        mid_setDefaultAssertionStatus_9d72768e8fdce2b7,
        mid_setPackageAssertionStatus_b1180807b87ba737,
        mid_loadClass_07cacfd51914a29b,
        mid_getPackage_3e5bdfd63170837b,
        mid_setSigners_95e87f089eee7e59,
        mid_getClassLoadingLock_c0a3c3394484d296,
        mid_findClass_337d52b895d55b49,
        mid_defineClass_ddd9b40425608e2d,
        mid_defineClass_440c7446fa471578,
        mid_defineClass_a79265bc4665fb67,
        mid_defineClass_ebc2298a3275b0c9,
        mid_resolveClass_67ec072891501dcc,
        mid_findSystemClass_337d52b895d55b49,
        mid_findLoadedClass_337d52b895d55b49,
        mid_findResource_4fb0b493534ff9d9,
        mid_findResources_2b96784a99c14cfc,
        mid_registerAsParallelCapable_8454bd5aa23fd11e,
        mid_definePackage_b972141526a39935,
        mid_getPackages_83e3803d8c61a052,
        mid_findLibrary_9bfa75c9f141b67f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ClassLoader(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ClassLoader(const ClassLoader& obj) : ::java::lang::Object(obj) {}

      void clearAssertionStatus() const;
      ClassLoader getParent() const;
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      static ClassLoader getSystemClassLoader();
      static ::java::io::InputStream getSystemResourceAsStream(const ::java::lang::String &);
      ::java::lang::Class loadClass(const ::java::lang::String &) const;
      void setClassAssertionStatus(const ::java::lang::String &, jboolean) const;
      void setDefaultAssertionStatus(jboolean) const;
      void setPackageAssertionStatus(const ::java::lang::String &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ClassLoader);
    extern PyTypeObject *PY_TYPE(ClassLoader);

    class t_ClassLoader {
    public:
      PyObject_HEAD
      ClassLoader object;
      static PyObject *wrap_Object(const ClassLoader&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
