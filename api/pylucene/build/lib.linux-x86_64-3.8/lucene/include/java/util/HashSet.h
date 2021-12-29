#ifndef java_util_HashSet_H
#define java_util_HashSet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Collection;
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

    class HashSet : public ::java::util::AbstractSet {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_040c4cd0390c5aff,
        mid_init$_50bc3ddc62a19f2d,
        mid_init$_da161bce5801b190,
        mid_add_8b72f2dcdde6fd1d,
        mid_clear_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        mid_contains_8b72f2dcdde6fd1d,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_iterator_233a192dadb0917d,
        mid_remove_8b72f2dcdde6fd1d,
        mid_size_9972fcc56b44e79d,
        mid_spliterator_7a761c107a8e14bd,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit HashSet(jobject obj) : ::java::util::AbstractSet(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      HashSet(const HashSet& obj) : ::java::util::AbstractSet(obj) {}

      HashSet();
      HashSet(jint);
      HashSet(const ::java::util::Collection &);
      HashSet(jint, jfloat);

      jboolean add(const ::java::lang::Object &) const;
      void clear() const;
      ::java::lang::Object clone() const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Iterator iterator() const;
      jboolean remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::util::Spliterator spliterator() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(HashSet);
    extern PyTypeObject *PY_TYPE(HashSet);

    class t_HashSet {
    public:
      PyObject_HEAD
      HashSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_HashSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const HashSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const HashSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
