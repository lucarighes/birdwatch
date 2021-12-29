#ifndef java_lang_Object_H
#define java_lang_Object_H

#include "JObject.h"

namespace java {
  namespace lang {
    class Object;
    class String;
    class InterruptedException;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Object : public ::JObject {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_equals_8b72f2dcdde6fd1d,
        mid_getClass_9df2cc6ebce035fe,
        mid_hashCode_9972fcc56b44e79d,
        mid_notify_f2cc1bce94666404,
        mid_notifyAll_f2cc1bce94666404,
        mid_toString_db9b55ba01e03e4b,
        mid_wait_f2cc1bce94666404,
        mid_wait_9c778c9bce6694df,
        mid_wait_7cbcb52ba5068aff,
        mid_finalize_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Object(jobject obj) : ::JObject(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Object(const Object& obj) : ::JObject(obj) {}

      Object();

      jboolean equals(const Object &) const;
      ::java::lang::Class getClass() const;
      jint hashCode() const;
      void notify() const;
      void notifyAll() const;
      ::java::lang::String toString() const;
      void wait() const;
      void wait(jlong) const;
      void wait(jlong, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Object);
    extern PyTypeObject *PY_TYPE(Object);

    class t_Object {
    public:
      PyObject_HEAD
      Object object;
      static PyObject *wrap_Object(const Object&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
