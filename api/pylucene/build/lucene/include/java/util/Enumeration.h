#ifndef java_util_Enumeration_H
#define java_util_Enumeration_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Enumeration : public ::java::lang::Object {
     public:
      enum {
        mid_hasMoreElements_8454bd5aa23fd11e,
        mid_nextElement_d6bcd06f3102c4d9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Enumeration(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Enumeration(const Enumeration& obj) : ::java::lang::Object(obj) {}

      jboolean hasMoreElements() const;
      ::java::lang::Object nextElement() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Enumeration);
    extern PyTypeObject *PY_TYPE(Enumeration);

    class t_Enumeration {
    public:
      PyObject_HEAD
      Enumeration object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Enumeration *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Enumeration&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Enumeration&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
