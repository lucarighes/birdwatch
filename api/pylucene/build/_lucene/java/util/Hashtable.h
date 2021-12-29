#ifndef java_util_Hashtable_H
#define java_util_Hashtable_H

#include "java/util/Dictionary.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class Map$Entry;
    namespace function {
      class BiConsumer;
      class Function;
      class BiFunction;
    }
    class Enumeration;
    class Set;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Hashtable : public ::java::util::Dictionary {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_040c4cd0390c5aff,
        mid_init$_408bd889ee3beae5,
        mid_init$_da161bce5801b190,
        mid_clear_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        mid_compute_a077e9e27d3c234f,
        mid_computeIfAbsent_d6f5a32db425833f,
        mid_computeIfPresent_a077e9e27d3c234f,
        mid_contains_8b72f2dcdde6fd1d,
        mid_containsKey_8b72f2dcdde6fd1d,
        mid_containsValue_8b72f2dcdde6fd1d,
        mid_elements_f270cc1d2d4072a8,
        mid_entrySet_7dcf4034c6d1a92a,
        mid_equals_8b72f2dcdde6fd1d,
        mid_forEach_94704ed6ccc48468,
        mid_get_e5ae0f8c04795fa9,
        mid_getOrDefault_128a89bbc17a8b69,
        mid_hashCode_9972fcc56b44e79d,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_keySet_7dcf4034c6d1a92a,
        mid_keys_f270cc1d2d4072a8,
        mid_merge_74daa8a3464479e0,
        mid_put_128a89bbc17a8b69,
        mid_putAll_408bd889ee3beae5,
        mid_putIfAbsent_128a89bbc17a8b69,
        mid_remove_e5ae0f8c04795fa9,
        mid_remove_b06c7be184b2a9ad,
        mid_replace_128a89bbc17a8b69,
        mid_replace_fe62c765dba52df0,
        mid_replaceAll_22221e328874bd4f,
        mid_size_9972fcc56b44e79d,
        mid_toString_db9b55ba01e03e4b,
        mid_values_d4dfbf7a26ff41df,
        mid_rehash_f2cc1bce94666404,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Hashtable(jobject obj) : ::java::util::Dictionary(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Hashtable(const Hashtable& obj) : ::java::util::Dictionary(obj) {}

      Hashtable();
      Hashtable(jint);
      Hashtable(const ::java::util::Map &);
      Hashtable(jint, jfloat);

      void clear() const;
      ::java::lang::Object clone() const;
      ::java::lang::Object compute(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object computeIfAbsent(const ::java::lang::Object &, const ::java::util::function::Function &) const;
      ::java::lang::Object computeIfPresent(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      jboolean contains(const ::java::lang::Object &) const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Enumeration elements() const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::util::Enumeration keys() const;
      ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object putIfAbsent(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jboolean remove(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::lang::Object replace(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean replace(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      jint size() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Hashtable);
    extern PyTypeObject *PY_TYPE(Hashtable);

    class t_Hashtable {
    public:
      PyObject_HEAD
      Hashtable object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_Hashtable *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Hashtable&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Hashtable&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
