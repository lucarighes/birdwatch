#ifndef java_lang_Package_H
#define java_lang_Package_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Package;
    class String;
    class NumberFormatException;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Package : public ::java::lang::Object {
     public:
      enum {
        mid_getImplementationTitle_db9b55ba01e03e4b,
        mid_getImplementationVendor_db9b55ba01e03e4b,
        mid_getImplementationVersion_db9b55ba01e03e4b,
        mid_getName_db9b55ba01e03e4b,
        mid_getPackage_3e5bdfd63170837b,
        mid_getPackages_83e3803d8c61a052,
        mid_getSpecificationTitle_db9b55ba01e03e4b,
        mid_getSpecificationVendor_db9b55ba01e03e4b,
        mid_getSpecificationVersion_db9b55ba01e03e4b,
        mid_hashCode_9972fcc56b44e79d,
        mid_isCompatibleWith_145b2d0af0c06b93,
        mid_isSealed_8454bd5aa23fd11e,
        mid_toString_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Package(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Package(const Package& obj) : ::java::lang::Object(obj) {}

      ::java::lang::String getImplementationTitle() const;
      ::java::lang::String getImplementationVendor() const;
      ::java::lang::String getImplementationVersion() const;
      ::java::lang::String getName() const;
      static Package getPackage(const ::java::lang::String &);
      static JArray< Package > getPackages();
      ::java::lang::String getSpecificationTitle() const;
      ::java::lang::String getSpecificationVendor() const;
      ::java::lang::String getSpecificationVersion() const;
      jint hashCode() const;
      jboolean isCompatibleWith(const ::java::lang::String &) const;
      jboolean isSealed() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Package);
    extern PyTypeObject *PY_TYPE(Package);

    class t_Package {
    public:
      PyObject_HEAD
      Package object;
      static PyObject *wrap_Object(const Package&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
