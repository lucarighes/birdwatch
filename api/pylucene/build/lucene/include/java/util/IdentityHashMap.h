#ifndef java_util_IdentityHashMap_H
#define java_util_IdentityHashMap_H

#include "java/util/AbstractMap.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class Map$Entry;
    namespace function {
      class BiConsumer;
      class BiFunction;
    }
    class Set;
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

    class IdentityHashMap : public ::java::util::AbstractMap {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_040c4cd0390c5aff,
        mid_init$_408bd889ee3beae5,
        mid_clear_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        mid_containsKey_8b72f2dcdde6fd1d,
        mid_containsValue_8b72f2dcdde6fd1d,
        mid_entrySet_7dcf4034c6d1a92a,
        mid_equals_8b72f2dcdde6fd1d,
        mid_forEach_94704ed6ccc48468,
        mid_get_e5ae0f8c04795fa9,
        mid_hashCode_9972fcc56b44e79d,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_keySet_7dcf4034c6d1a92a,
        mid_put_128a89bbc17a8b69,
        mid_putAll_408bd889ee3beae5,
        mid_remove_e5ae0f8c04795fa9,
        mid_replaceAll_22221e328874bd4f,
        mid_size_9972fcc56b44e79d,
        mid_values_d4dfbf7a26ff41df,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IdentityHashMap(jobject obj) : ::java::util::AbstractMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      IdentityHashMap(const IdentityHashMap& obj) : ::java::util::AbstractMap(obj) {}

      IdentityHashMap();
      IdentityHashMap(jint);
      IdentityHashMap(const ::java::util::Map &);

      void clear() const;
      ::java::lang::Object clone() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      jint size() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(IdentityHashMap);
    extern PyTypeObject *PY_TYPE(IdentityHashMap);

    class t_IdentityHashMap {
    public:
      PyObject_HEAD
      IdentityHashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_IdentityHashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const IdentityHashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const IdentityHashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
