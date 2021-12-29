#ifndef java_lang_Class_H
#define java_lang_Class_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class SecurityException;
    class Class;
    class Package;
    class InstantiationException;
    class IllegalAccessException;
    class String;
    class ClassNotFoundException;
    class ClassLoader;
  }
  namespace io {
    class InputStream;
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Class : public ::java::lang::Object {
     public:
      enum {
        mid_asSubclass_d70fa93adb782e25,
        mid_cast_e5ae0f8c04795fa9,
        mid_desiredAssertionStatus_8454bd5aa23fd11e,
        mid_forName_337d52b895d55b49,
        mid_forName_b391b4759aaedbd0,
        mid_getCanonicalName_db9b55ba01e03e4b,
        mid_getClassLoader_62052cb9b95d8b0c,
        mid_getClasses_2e0bbcab33cbe6ec,
        mid_getComponentType_9df2cc6ebce035fe,
        mid_getDeclaredClasses_2e0bbcab33cbe6ec,
        mid_getDeclaringClass_9df2cc6ebce035fe,
        mid_getEnclosingClass_9df2cc6ebce035fe,
        mid_getEnumConstants_6becf78ffd87a9bc,
        mid_getInterfaces_2e0bbcab33cbe6ec,
        mid_getModifiers_9972fcc56b44e79d,
        mid_getName_db9b55ba01e03e4b,
        mid_getPackage_e23660d0b401e60d,
        mid_getResourceAsStream_f9a3577e7bead470,
        mid_getSigners_6becf78ffd87a9bc,
        mid_getSimpleName_db9b55ba01e03e4b,
        mid_getSuperclass_9df2cc6ebce035fe,
        mid_getTypeName_db9b55ba01e03e4b,
        mid_isAnnotation_8454bd5aa23fd11e,
        mid_isAnonymousClass_8454bd5aa23fd11e,
        mid_isArray_8454bd5aa23fd11e,
        mid_isAssignableFrom_a895c7f53785ebe6,
        mid_isEnum_8454bd5aa23fd11e,
        mid_isInstance_8b72f2dcdde6fd1d,
        mid_isInterface_8454bd5aa23fd11e,
        mid_isLocalClass_8454bd5aa23fd11e,
        mid_isMemberClass_8454bd5aa23fd11e,
        mid_isPrimitive_8454bd5aa23fd11e,
        mid_isSynthetic_8454bd5aa23fd11e,
        mid_newInstance_d6bcd06f3102c4d9,
        mid_toGenericString_db9b55ba01e03e4b,
        mid_toString_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Class(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Class(const Class& obj) : ::java::lang::Object(obj) {}

      Class asSubclass(const Class &) const;
      ::java::lang::Object cast(const ::java::lang::Object &) const;
      jboolean desiredAssertionStatus() const;
      static Class forName(const ::java::lang::String &);
      static Class forName(const ::java::lang::String &, jboolean, const ::java::lang::ClassLoader &);
      ::java::lang::String getCanonicalName() const;
      ::java::lang::ClassLoader getClassLoader() const;
      JArray< Class > getClasses() const;
      Class getComponentType() const;
      JArray< Class > getDeclaredClasses() const;
      Class getDeclaringClass() const;
      Class getEnclosingClass() const;
      JArray< ::java::lang::Object > getEnumConstants() const;
      JArray< Class > getInterfaces() const;
      jint getModifiers() const;
      ::java::lang::String getName() const;
      ::java::lang::Package getPackage() const;
      ::java::io::InputStream getResourceAsStream(const ::java::lang::String &) const;
      JArray< ::java::lang::Object > getSigners() const;
      ::java::lang::String getSimpleName() const;
      Class getSuperclass() const;
      ::java::lang::String getTypeName() const;
      jboolean isAnnotation() const;
      jboolean isAnonymousClass() const;
      jboolean isArray() const;
      jboolean isAssignableFrom(const Class &) const;
      jboolean isEnum() const;
      jboolean isInstance(const ::java::lang::Object &) const;
      jboolean isInterface() const;
      jboolean isLocalClass() const;
      jboolean isMemberClass() const;
      jboolean isPrimitive() const;
      jboolean isSynthetic() const;
      ::java::lang::Object newInstance() const;
      ::java::lang::String toGenericString() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Class);
    extern PyTypeObject *PY_TYPE(Class);

    class t_Class {
    public:
      PyObject_HEAD
      Class object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Class *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Class&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Class&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
