#ifndef java_util_ListIterator_H
#define java_util_ListIterator_H

#include "java/util/Iterator.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ListIterator : public ::java::util::Iterator {
     public:
      enum {
        mid_add_d20f626183f72f7d,
        mid_hasNext_8454bd5aa23fd11e,
        mid_hasPrevious_8454bd5aa23fd11e,
        mid_next_d6bcd06f3102c4d9,
        mid_nextIndex_9972fcc56b44e79d,
        mid_previous_d6bcd06f3102c4d9,
        mid_previousIndex_9972fcc56b44e79d,
        mid_remove_f2cc1bce94666404,
        mid_set_d20f626183f72f7d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ListIterator(jobject obj) : ::java::util::Iterator(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ListIterator(const ListIterator& obj) : ::java::util::Iterator(obj) {}

      void add(const ::java::lang::Object &) const;
      jboolean hasNext() const;
      jboolean hasPrevious() const;
      ::java::lang::Object next() const;
      jint nextIndex() const;
      ::java::lang::Object previous() const;
      jint previousIndex() const;
      void remove() const;
      void set(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ListIterator);
    extern PyTypeObject *PY_TYPE(ListIterator);

    class t_ListIterator {
    public:
      PyObject_HEAD
      ListIterator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ListIterator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ListIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ListIterator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
