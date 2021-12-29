#ifndef java_util_Deque_H
#define java_util_Deque_H

#include "java/util/Queue.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace util {
    class Iterator;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Deque : public ::java::util::Queue {
     public:
      enum {
        mid_add_8b72f2dcdde6fd1d,
        mid_addFirst_d20f626183f72f7d,
        mid_addLast_d20f626183f72f7d,
        mid_contains_8b72f2dcdde6fd1d,
        mid_descendingIterator_233a192dadb0917d,
        mid_element_d6bcd06f3102c4d9,
        mid_getFirst_d6bcd06f3102c4d9,
        mid_getLast_d6bcd06f3102c4d9,
        mid_iterator_233a192dadb0917d,
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
        mid_remove_8b72f2dcdde6fd1d,
        mid_removeFirst_d6bcd06f3102c4d9,
        mid_removeFirstOccurrence_8b72f2dcdde6fd1d,
        mid_removeLast_d6bcd06f3102c4d9,
        mid_removeLastOccurrence_8b72f2dcdde6fd1d,
        mid_size_9972fcc56b44e79d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Deque(jobject obj) : ::java::util::Queue(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Deque(const Deque& obj) : ::java::util::Queue(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      void addFirst(const ::java::lang::Object &) const;
      void addLast(const ::java::lang::Object &) const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::lang::Object element() const;
      ::java::lang::Object getFirst() const;
      ::java::lang::Object getLast() const;
      ::java::util::Iterator iterator() const;
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
      jboolean remove(const ::java::lang::Object &) const;
      ::java::lang::Object removeFirst() const;
      jboolean removeFirstOccurrence(const ::java::lang::Object &) const;
      ::java::lang::Object removeLast() const;
      jboolean removeLastOccurrence(const ::java::lang::Object &) const;
      jint size() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Deque);
    extern PyTypeObject *PY_TYPE(Deque);

    class t_Deque {
    public:
      PyObject_HEAD
      Deque object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Deque *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Deque&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Deque&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
