#ifndef java_util_TreeSet_H
#define java_util_TreeSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class SortedSet;
    class Collection;
    class Comparator;
    class NavigableSet;
    class Spliterator;
    class Iterator;
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

    class TreeSet : public ::java::util::AbstractSet {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_50bc3ddc62a19f2d,
        mid_init$_4703504c5d45d50f,
        mid_init$_96833f9feb620a6a,
        mid_add_8b72f2dcdde6fd1d,
        mid_addAll_15d9cc2398c22637,
        mid_ceiling_e5ae0f8c04795fa9,
        mid_clear_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        mid_comparator_beb0414e0ec1de00,
        mid_contains_8b72f2dcdde6fd1d,
        mid_descendingIterator_233a192dadb0917d,
        mid_descendingSet_69a674c200eed505,
        mid_first_d6bcd06f3102c4d9,
        mid_floor_e5ae0f8c04795fa9,
        mid_headSet_53f2bf24b94c5740,
        mid_headSet_18a0ce538fdac12f,
        mid_higher_e5ae0f8c04795fa9,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_iterator_233a192dadb0917d,
        mid_last_d6bcd06f3102c4d9,
        mid_lower_e5ae0f8c04795fa9,
        mid_pollFirst_d6bcd06f3102c4d9,
        mid_pollLast_d6bcd06f3102c4d9,
        mid_remove_8b72f2dcdde6fd1d,
        mid_size_9972fcc56b44e79d,
        mid_spliterator_7a761c107a8e14bd,
        mid_subSet_02b9298b38245e1d,
        mid_subSet_f6bf97d8ce23e495,
        mid_tailSet_53f2bf24b94c5740,
        mid_tailSet_18a0ce538fdac12f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit TreeSet(jobject obj) : ::java::util::AbstractSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      TreeSet(const TreeSet& obj) : ::java::util::AbstractSet(obj) {}

      TreeSet();
      TreeSet(const ::java::util::Collection &);
      TreeSet(const ::java::util::Comparator &);
      TreeSet(const ::java::util::SortedSet &);

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      ::java::lang::Object ceiling(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      ::java::util::Comparator comparator() const;
      jboolean contains(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      ::java::util::NavigableSet descendingSet() const;
      ::java::lang::Object first() const;
      ::java::lang::Object floor(const ::java::lang::Object &) const;
      ::java::util::SortedSet headSet(const ::java::lang::Object &) const;
      ::java::util::NavigableSet headSet(const ::java::lang::Object &, jboolean) const;
      ::java::lang::Object higher(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      ::java::lang::Object last() const;
      ::java::lang::Object lower(const ::java::lang::Object &) const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      jboolean remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
      ::java::util::SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::util::NavigableSet subSet(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedSet tailSet(const ::java::lang::Object &) const;
      ::java::util::NavigableSet tailSet(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(TreeSet);
    extern PyTypeObject *PY_TYPE(TreeSet);

    class t_TreeSet {
    public:
      PyObject_HEAD
      TreeSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_TreeSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const TreeSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const TreeSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
