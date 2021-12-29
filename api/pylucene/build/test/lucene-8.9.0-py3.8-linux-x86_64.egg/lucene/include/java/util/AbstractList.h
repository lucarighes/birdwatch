#ifndef java_util_AbstractList_H
#define java_util_AbstractList_H

#include "java/util/AbstractCollection.h"

namespace java {
  namespace util {
    class Collection;
    class Iterator;
    class List;
    class ListIterator;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractList : public ::java::util::AbstractCollection {
     public:
      enum {
        mid_add_8b72f2dcdde6fd1d,
        mid_add_cf6732d7dfcfc293,
        mid_addAll_8980636bfaaa897b,
        mid_clear_f2cc1bce94666404,
        mid_equals_8b72f2dcdde6fd1d,
        mid_get_b15c79acb15c2870,
        mid_hashCode_9972fcc56b44e79d,
        mid_indexOf_5a4805a36cf611e7,
        mid_iterator_233a192dadb0917d,
        mid_lastIndexOf_5a4805a36cf611e7,
        mid_listIterator_78bda7a3d01214c3,
        mid_listIterator_8204cc66da390272,
        mid_remove_b15c79acb15c2870,
        mid_set_55e2638f354bbf61,
        mid_subList_e1795bf76fe1346f,
        mid_removeRange_438c62480c481c65,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractList(jobject obj) : ::java::util::AbstractCollection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractList(const AbstractList& obj) : ::java::util::AbstractCollection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get(jint) const;
      jint hashCode() const;
      jint indexOf(const ::java::lang::Object &) const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      ::java::util::List subList(jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractList);
    extern PyTypeObject *PY_TYPE(AbstractList);

    class t_AbstractList {
    public:
      PyObject_HEAD
      AbstractList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
