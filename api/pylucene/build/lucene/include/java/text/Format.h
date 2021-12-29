#ifndef java_text_Format_H
#define java_text_Format_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
    class StringBuffer;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class Format : public ::java::lang::Object {
     public:
      enum {
        mid_clone_d6bcd06f3102c4d9,
        mid_format_8f886c83a83356f0,
        mid_parseObject_c0a3c3394484d296,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Format(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Format(const Format& obj) : ::java::lang::Object(obj) {}

      ::java::lang::Object clone() const;
      ::java::lang::String format(const ::java::lang::Object &) const;
      ::java::lang::Object parseObject(const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(Format);
    extern PyTypeObject *PY_TYPE(Format);

    class t_Format {
    public:
      PyObject_HEAD
      Format object;
      static PyObject *wrap_Object(const Format&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
