#ifndef java_util_Queue_H
#define java_util_Queue_H

#include "java/util/Collection.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Queue : public ::java::util::Collection {
     public:
      enum {
        mid_add_8b72f2dcdde6fd1d,
        mid_element_d6bcd06f3102c4d9,
        mid_offer_8b72f2dcdde6fd1d,
        mid_peek_d6bcd06f3102c4d9,
        mid_poll_d6bcd06f3102c4d9,
        mid_remove_d6bcd06f3102c4d9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Queue(jobject obj) : ::java::util::Collection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Queue(const Queue& obj) : ::java::util::Collection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      ::java::lang::Object element() const;
      jboolean offer(const ::java::lang::Object &) const;
      ::java::lang::Object peek() const;
      ::java::lang::Object poll() const;
      ::java::lang::Object remove() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Queue);
    extern PyTypeObject *PY_TYPE(Queue);

    class t_Queue {
    public:
      PyObject_HEAD
      Queue object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Queue *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Queue&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Queue&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
