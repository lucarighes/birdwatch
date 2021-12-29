#ifndef java_util_ArrayList_H
#define java_util_ArrayList_H

#include "java/util/AbstractList.h"

namespace java {
  namespace util {
    namespace function {
      class UnaryOperator;
      class Predicate;
      class Consumer;
    }
    class Collection;
    class RandomAccess;
    class Comparator;
    class Spliterator;
    class Iterator;
    class List;
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

    class ArrayList : public ::java::util::AbstractList {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_040c4cd0390c5aff,
        mid_init$_50bc3ddc62a19f2d,
        mid_add_8b72f2dcdde6fd1d,
        mid_add_cf6732d7dfcfc293,
        mid_addAll_15d9cc2398c22637,
        mid_addAll_8980636bfaaa897b,
        mid_clear_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        mid_contains_8b72f2dcdde6fd1d,
        mid_ensureCapacity_040c4cd0390c5aff,
        mid_forEach_39fdd8ee24bf1a00,
        mid_get_b15c79acb15c2870,
        mid_indexOf_5a4805a36cf611e7,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_iterator_233a192dadb0917d,
        mid_lastIndexOf_5a4805a36cf611e7,
        mid_listIterator_78bda7a3d01214c3,
        mid_listIterator_8204cc66da390272,
        mid_remove_b15c79acb15c2870,
        mid_remove_8b72f2dcdde6fd1d,
        mid_removeAll_15d9cc2398c22637,
        mid_removeIf_bb7983a2fafd563c,
        mid_replaceAll_9d70603eb4010f27,
        mid_retainAll_15d9cc2398c22637,
        mid_set_55e2638f354bbf61,
        mid_size_9972fcc56b44e79d,
        mid_sort_4703504c5d45d50f,
        mid_spliterator_7a761c107a8e14bd,
        mid_subList_e1795bf76fe1346f,
        mid_toArray_6becf78ffd87a9bc,
        mid_toArray_609b05756010dc5d,
        mid_trimToSize_f2cc1bce94666404,
        mid_removeRange_438c62480c481c65,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ArrayList(jobject obj) : ::java::util::AbstractList(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ArrayList(const ArrayList& obj) : ::java::util::AbstractList(obj) {}

      ArrayList();
      ArrayList(jint);
      ArrayList(const ::java::util::Collection &);

      jboolean add(const ::java::lang::Object &) const;
      void add(jint, const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      jboolean addAll(jint, const ::java::util::Collection &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      void ensureCapacity(jint) const;
      void forEach(const ::java::util::function::Consumer &) const;
      ::java::lang::Object get(jint) const;
      jint indexOf(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jint lastIndexOf(const ::java::lang::Object &) const;
      ::java::util::ListIterator listIterator() const;
      ::java::util::ListIterator listIterator(jint) const;
      ::java::lang::Object remove(jint) const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean removeIf(const ::java::util::function::Predicate &) const;
      void replaceAll(const ::java::util::function::UnaryOperator &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      ::java::lang::Object set(jint, const ::java::lang::Object &) const;
      jint size() const;
      void sort(const ::java::util::Comparator &) const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::List subList(jint, jint) const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ArrayList);
    extern PyTypeObject *PY_TYPE(ArrayList);

    class t_ArrayList {
    public:
      PyObject_HEAD
      ArrayList object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_ArrayList *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const ArrayList&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const ArrayList&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
