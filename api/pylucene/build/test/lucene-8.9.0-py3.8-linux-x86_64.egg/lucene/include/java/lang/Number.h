#ifndef java_lang_Number_H
#define java_lang_Number_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Number : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_byteValue_871cd52a74f26213,
        mid_doubleValue_8c74b787998ce4bc,
        mid_floatValue_58aec2b64dff50c8,
        mid_intValue_9972fcc56b44e79d,
        mid_longValue_2e5ae9edcb9b072f,
        mid_shortValue_ec20af88366b851e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Number(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Number(const Number& obj) : ::java::lang::Object(obj) {}

      Number();

      jbyte byteValue() const;
      jdouble doubleValue() const;
      jfloat floatValue() const;
      jint intValue() const;
      jlong longValue() const;
      jshort shortValue() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Number);
    extern PyTypeObject *PY_TYPE(Number);

    class t_Number {
    public:
      PyObject_HEAD
      Number object;
      static PyObject *wrap_Object(const Number&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
