#ifndef java_util_NavigableMap_H
#define java_util_NavigableMap_H

#include "java/util/SortedMap.h"

namespace java {
  namespace util {
    class Map$Entry;
    class NavigableMap;
    class NavigableSet;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NavigableMap : public ::java::util::SortedMap {
     public:
      enum {
        mid_ceilingEntry_fff755411ed1529f,
        mid_ceilingKey_e5ae0f8c04795fa9,
        mid_descendingKeySet_69a674c200eed505,
        mid_descendingMap_4e7fc959a77f584b,
        mid_firstEntry_e3cdd83e5947ee54,
        mid_floorEntry_fff755411ed1529f,
        mid_floorKey_e5ae0f8c04795fa9,
        mid_headMap_ebd5eccc289248f0,
        mid_headMap_923f6d78a49e76e5,
        mid_higherEntry_fff755411ed1529f,
        mid_higherKey_e5ae0f8c04795fa9,
        mid_lastEntry_e3cdd83e5947ee54,
        mid_lowerEntry_fff755411ed1529f,
        mid_lowerKey_e5ae0f8c04795fa9,
        mid_navigableKeySet_69a674c200eed505,
        mid_pollFirstEntry_e3cdd83e5947ee54,
        mid_pollLastEntry_e3cdd83e5947ee54,
        mid_subMap_5f2ca92e52d24a87,
        mid_subMap_a8f2bed54a4920ca,
        mid_tailMap_ebd5eccc289248f0,
        mid_tailMap_923f6d78a49e76e5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NavigableMap(jobject obj) : ::java::util::SortedMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NavigableMap(const NavigableMap& obj) : ::java::util::SortedMap(obj) {}

      ::java::util::Map$Entry ceilingEntry(const ::java::lang::Object &) const;
      ::java::lang::Object ceilingKey(const ::java::lang::Object &) const;
      ::java::util::NavigableSet descendingKeySet() const;
      NavigableMap descendingMap() const;
      ::java::util::Map$Entry firstEntry() const;
      ::java::util::Map$Entry floorEntry(const ::java::lang::Object &) const;
      ::java::lang::Object floorKey(const ::java::lang::Object &) const;
      ::java::util::SortedMap headMap(const ::java::lang::Object &) const;
      NavigableMap headMap(const ::java::lang::Object &, jboolean) const;
      ::java::util::Map$Entry higherEntry(const ::java::lang::Object &) const;
      ::java::lang::Object higherKey(const ::java::lang::Object &) const;
      ::java::util::Map$Entry lastEntry() const;
      ::java::util::Map$Entry lowerEntry(const ::java::lang::Object &) const;
      ::java::lang::Object lowerKey(const ::java::lang::Object &) const;
      ::java::util::NavigableSet navigableKeySet() const;
      ::java::util::Map$Entry pollFirstEntry() const;
      ::java::util::Map$Entry pollLastEntry() const;
      ::java::util::SortedMap subMap(const ::java::lang::Object &, const ::java::lang::Object &) const;
      NavigableMap subMap(const ::java::lang::Object &, jboolean, const ::java::lang::Object &, jboolean) const;
      ::java::util::SortedMap tailMap(const ::java::lang::Object &) const;
      NavigableMap tailMap(const ::java::lang::Object &, jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(NavigableMap);
    extern PyTypeObject *PY_TYPE(NavigableMap);

    class t_NavigableMap {
    public:
      PyObject_HEAD
      NavigableMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_NavigableMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const NavigableMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const NavigableMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
