#ifndef java_util_Set_H
#define java_util_Set_H

#include "java/util/Collection.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
  namespace util {
    class Spliterator;
    class Iterator;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Set : public ::java::util::Collection {
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

      explicit Set(jobject obj) : ::java::util::Collection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Set(const Set& obj) : ::java::util::Collection(obj) {}

      jboolean add(const ::java::lang::Object &) const;
      jboolean addAll(const ::java::util::Collection &) const;
      void clear() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsAll(const ::java::util::Collection &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jboolean remove(const ::java::lang::Object &) const;
      jboolean removeAll(const ::java::util::Collection &) const;
      jboolean retainAll(const ::java::util::Collection &) const;
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
    extern PyType_Def PY_TYPE_DEF(Set);
    extern PyTypeObject *PY_TYPE(Set);

    class t_Set {
    public:
      PyObject_HEAD
      Set object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Set *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Set&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Set&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
