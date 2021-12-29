#ifndef java_util_NavigableSet_H
#define java_util_NavigableSet_H

#include "java/util/SortedSet.h"

namespace java {
  namespace util {
    class NavigableSet;
    class Iterator;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NavigableSet : public ::java::util::SortedSet {
     public:
      enum {
        mid_ceiling_e5ae0f8c04795fa9,
        mid_descendingIterator_233a192dadb0917d,
        mid_descendingSet_69a674c200eed505,
        mid_floor_e5ae0f8c04795fa9,
        mid_headSet_53f2bf24b94c5740,
        mid_headSet_18a0ce538fdac12f,
        mid_higher_e5ae0f8c04795fa9,
        mid_iterator_233a192dadb0917d,
        mid_lower_e5ae0f8c04795fa9,
        mid_pollFirst_d6bcd06f3102c4d9,
        mid_pollLast_d6bcd06f3102c4d9,
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

      explicit NavigableSet(jobject obj) : ::java::util::SortedSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NavigableSet(const NavigableSet& obj) : ::java::util::SortedSet(obj) {}

      ::java::lang::Object ceiling(const ::java::lang::Object &) const;
      ::java::util::Iterator descendingIterator() const;
      NavigableSet descendingSet() const;
      ::java::lang::Object floor(const ::java::lang::Object &) const;
      ::java::util::SortedSet headSet(const ::java::lang::Object &) const;
      NavigableSet headSet(const ::java::lang::Object &, jboolean) const;
      ::java::lang::Object higher(const ::java::lang::Object &) const;
      ::java::util::Iterator iterator() const;
      ::java::lang::Object lower(const ::java::lang::Object &) const;
      ::java::lang::Object pollFirst() const;
      ::java::lang::Object pollLast() const;
      ::java::util::SortedSet subSet(const ::java::lang::Object &, const ::java::lang::Object &) const;
      NavigableSet subSet(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedSet tailSet(const ::java::lang::Object &) const;
      NavigableSet tailSet(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(NavigableSet);
    extern PyTypeObject *PY_TYPE(NavigableSet);

    class t_NavigableSet {
    public:
      PyObject_HEAD
      NavigableSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_NavigableSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const NavigableSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const NavigableSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
