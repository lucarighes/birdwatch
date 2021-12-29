#ifndef java_util_LinkedList_H
#define java_util_LinkedList_H

#include "java/util/AbstractSequentialList.h"

namespace java {
  namespace util {
    class Collection;
    class Spliterator;
    class Iterator;
    class Deque;
    class ListIterator;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class Object;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class LinkedList : public ::java::util::AbstractSequentialList {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_50bc3ddc62a19f2d,
        mid_add_8b72f2dcdde6fd1d,
        mid_add_cf6732d7dfcfc293,
        mid_addAll_15d9cc2398c22637,
        mid_addAll_8980636bfaaa897b,
        mid_addFirst_d20f626183f72f7d,
        mid_addLast_d20f626183f72f7d,
        mid_clear_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        mid_contains_8b72f2dcdde6fd1d,
        mid_descendingIterator_233a192dadb0917d,
        mid_element_d6bcd06f3102c4d9,
        mid_get_b15c79acb15c2870,
        mid_getFirst_d6bcd06f3102c4d9,
        mid_getLast_d6bcd06f3102c4d9,
        mid_indexOf_5a4805a36cf611e7,
        mid_lastIndexOf_5a4805a36cf611e7,
        mid_listIterator_8204cc66da390272,
        mid_offer_8b72f2dcdde6fd1d,
        mid_offerFirst_8b72f2dcdde6fd1d,
        mid_offerLast_8b72f2dcdde6fd1d,
        mid_peek_d6bcd06f3102c4d9,
        mid_peekFirst_d6bcd06f3102c4d9,
        mid_peekLast_d6bcd06f3102c4d9,
        mid_poll_d6bcd06f3102c4d9,
        mid_pollFirst_d6bcd06f3102c4d9,
        mid_pollLast_d6bcd06f3102c4d9,
        mid_pop_d6bcd06f3102c4d9,
        mid_push_d20f626183f72f7d,
        mid_remove_d6bcd06f3102c4d9,
        mid_remove_b15c79acb15c2870,
        mid_remove_8b72f2dcdde6fd1d,
        mid_removeFirst_d6bcd06f3102c4d9,
        mid_removeFirstOccurrence_8b72f2dcdde6fd1d,
        mid_removeLast_d6bcd06f3102c4d9,
        mid_removeLastOccurrence_8b72f2dcdde6fd1d,
        mid_set_55e2638f354bbf61,
        mid_size_9972fcc56b44e79d,
        mid_spliterator_7a761c107a8e14bd,
        mid_toArray_6becf78ffd87a9bc,
        mid_toArray_609b05756010dc5d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit LinkedList(jobject obj) : ::java::util::AbstractSequentialList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      LinkedList(const LinkedList& obj) : ::java::util::AbstractSequentialList(obj) {}

      LinkedList();
      LinkedList(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::lang::Object element() const;
      ::java::lang::Object get(jint) const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      jint indexOf(const ::java::lang::Object &) const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator(jint) const;
      jboolean offer(const ::java::lang::Object &) const;
      jboolean offerFirst(const ::java::lang::Object &) const;
      jboolean offerLast(const ::java::lang::Object &) const;
      ::java::lang::Object peek() const;
      ::java::lang::Object peekFirst() const;
      ::java::lang::Object peekLast() const;
      ::java::lang::Object poll() const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      ::java::lang::Object pop() const;
      void push(const ::java::lang::Object &) const;
      ::java::lang::Object remove() const;
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      ::java::lang::Object removeFirst() const;
      jboolean removeFirstOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object removeLast() const;
      jboolean removeLastOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(LinkedList);
    extern PyTypeObject *PY_TYPE(LinkedList);

    class t_LinkedList {
    public:
      PyObject_HEAD
      LinkedList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_LinkedList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const LinkedList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const LinkedList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
