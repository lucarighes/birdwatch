#ifndef java_util_SortedMap_H
#define java_util_SortedMap_H

#include "java/util/Map.h"

namespace java {
  namespace util {
    class Comparator;
    class Collection;
    class Map$Entry;
    class SortedMap;
    class Set;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class SortedMap : public ::java::util::Map {
     public:
      enum {
        mid_comparator_beb0414e0ec1de00,
        mid_entrySet_7dcf4034c6d1a92a,
        mid_firstKey_d6bcd06f3102c4d9,
        mid_headMap_ebd5eccc289248f0,
        mid_keySet_7dcf4034c6d1a92a,
        mid_lastKey_d6bcd06f3102c4d9,
        mid_subMap_5f2ca92e52d24a87,
        mid_tailMap_ebd5eccc289248f0,
        mid_values_d4dfbf7a26ff41df,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SortedMap(jobject obj) : ::java::util::Map(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SortedMap(const SortedMap& obj) : ::java::util::Map(obj) {}

      ::java::util::Comparator comparator() const;
      ::java::util::Set entrySet() const;
      ::java::lang::Object firstKey() const;
      SortedMap headMap(const ::java::lang::Object &) const;
      ::java::util::Set keySet() const;
      ::java::lang::Object lastKey() const;
      SortedMap subMap(const ::java::lang::Object &, const ::java::lang::Object &) const;
      SortedMap tailMap(const ::java::lang::Object &) const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(SortedMap);
    extern PyTypeObject *PY_TYPE(SortedMap);

    class t_SortedMap {
    public:
      PyObject_HEAD
      SortedMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_SortedMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const SortedMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const SortedMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
