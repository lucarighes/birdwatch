#ifndef java_util_AbstractCollection_H
#define java_util_AbstractCollection_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Iterator;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractCollection : public ::java::lang::Object {
     public:
      enum {
        mid_add_8b72f2dcdde6fd1d,
        mid_addAll_15d9cc2398c22637,
        mid_clear_f2cc1bce94666404,
        mid_contains_8b72f2dcdde6fd1d,
        mid_containsAll_15d9cc2398c22637,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_iterator_233a192dadb0917d,
        mid_remove_8b72f2dcdde6fd1d,
        mid_removeAll_15d9cc2398c22637,
        mid_retainAll_15d9cc2398c22637,
        mid_size_9972fcc56b44e79d,
        mid_toArray_6becf78ffd87a9bc,
        mid_toArray_609b05756010dc5d,
        mid_toString_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractCollection(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractCollection(const AbstractCollection& obj) : ::java::lang::Object(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const ::java::util::Collection &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
      jint size() const;
      JArray< ::java::lang::Object > toArray() const;
      JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractCollection);
    extern PyTypeObject *PY_TYPE(AbstractCollection);

    class t_AbstractCollection {
    public:
      PyObject_HEAD
      AbstractCollection object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractCollection *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractCollection&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractCollection&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
