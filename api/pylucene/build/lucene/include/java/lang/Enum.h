#ifndef java_lang_Enum_H
#define java_lang_Enum_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class Enum;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Enum : public ::java::lang::Object {
     public:
      enum {
        mid_compareTo_2b51c450f527b4a3,
        mid_equals_8b72f2dcdde6fd1d,
        mid_getDeclaringClass_9df2cc6ebce035fe,
        mid_hashCode_9972fcc56b44e79d,
        mid_name_db9b55ba01e03e4b,
        mid_ordinal_9972fcc56b44e79d,
        mid_toString_db9b55ba01e03e4b,
        mid_valueOf_69a197ef26214d9f,
        mid_finalize_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Enum(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Enum(const Enum& obj) : ::java::lang::Object(obj) {}

      jint compareTo(const Enum &) const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Class getDeclaringClass() const;
      jint hashCode() const;
      ::java::lang::String name() const;
      jint ordinal() const;
      ::java::lang::String toString() const;
      static Enum valueOf(const ::java::lang::Class &, const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Enum);
    extern PyTypeObject *PY_TYPE(Enum);

    class t_Enum {
    public:
      PyObject_HEAD
      Enum object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Enum *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Enum&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Enum&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
