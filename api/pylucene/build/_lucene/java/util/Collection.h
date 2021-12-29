#ifndef java_util_Collection_H
#define java_util_Collection_H

#include "java/lang/Iterable.h"

namespace java {
  namespace util {
    class Collection;
    namespace function {
      class Predicate;
    }
    class Spliterator;
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

    class Collection : public ::java::lang::Iterable {
     public:
      enum {
        mid_add_8b72f2dcdde6fd1d,
        mid_addAll_15d9cc2398c22637,
        mid_clear_f2cc1bce94666404,
        mid_contains_8b72f2dcdde6fd1d,
        mid_containsAll_15d9cc2398c22637,
        mid_equals_8b72f2dcdde6fd1d,
        mid_hashCode_9972fcc56b44e79d,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_iterator_233a192dadb0917d,
        mid_remove_8b72f2dcdde6fd1d,
        mid_removeAll_15d9cc2398c22637,
        mid_removeIf_bb7983a2fafd563c,
        mid_retainAll_15d9cc2398c22637,
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

      explicit Collection(jobject obj) : ::java::lang::Iterable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collection(const Collection& obj) : ::java::lang::Iterable(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const Collection &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const Collection &) const;
      jboolean removeIf(const ::java::util::function::Predicate &) const;
      jboolean retainAll(const Collection &) const;
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
    extern PyType_Def PY_TYPE_DEF(Collection);
    extern PyTypeObject *PY_TYPE(Collection);

    class t_Collection {
    public:
      PyObject_HEAD
      Collection object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Collection *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Collection&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Collection&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
