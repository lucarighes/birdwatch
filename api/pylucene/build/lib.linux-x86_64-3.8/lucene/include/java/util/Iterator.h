#ifndef java_util_Iterator_H
#define java_util_Iterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Consumer;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Iterator : public ::java::lang::Object {
     public:
      enum {
        mid_forEachRemaining_39fdd8ee24bf1a00,
        mid_hasNext_8454bd5aa23fd11e,
        mid_next_d6bcd06f3102c4d9,
        mid_remove_f2cc1bce94666404,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Iterator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Iterator(const Iterator& obj) : ::java::lang::Object(obj) {}

      void forEachRemaining(const ::java::util::function::Consumer &) const;
      jboolean hasNext() const;
      ::java::lang::Object next() const;
      void remove() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Iterator);
    extern PyTypeObject *PY_TYPE(Iterator);

    class t_Iterator {
    public:
      PyObject_HEAD
      Iterator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Iterator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Iterator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Iterator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
