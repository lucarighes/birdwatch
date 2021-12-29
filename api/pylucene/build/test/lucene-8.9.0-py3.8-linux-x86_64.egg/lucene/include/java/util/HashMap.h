#ifndef java_util_HashMap_H
#define java_util_HashMap_H

#include "java/util/AbstractMap.h"

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

    class HashMap : public ::java::util::AbstractMap {
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
        mid_containsKey_8b72f2dcdde6fd1d,
        mid_containsValue_8b72f2dcdde6fd1d,
        mid_entrySet_7dcf4034c6d1a92a,
        mid_forEach_94704ed6ccc48468,
        mid_get_e5ae0f8c04795fa9,
        mid_getOrDefault_128a89bbc17a8b69,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_keySet_7dcf4034c6d1a92a,
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
        mid_values_d4dfbf7a26ff41df,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit HashMap(jobject obj) : ::java::util::AbstractMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      HashMap(const HashMap& obj) : ::java::util::AbstractMap(obj) {}

      HashMap();
      HashMap(jint);
      HashMap(const ::java::util::Map &);
      HashMap(jint, jfloat);

      void clear() const;
      ::java::lang::Object clone() const;
      ::java::lang::Object compute(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      ::java::lang::Object computeIfAbsent(const ::java::lang::Object &, const ::java::util::function::Function &) const;
      ::java::lang::Object computeIfPresent(const ::java::lang::Object &, const ::java::util::function::BiFunction &) const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
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
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(HashMap);
    extern PyTypeObject *PY_TYPE(HashMap);

    class t_HashMap {
    public:
      PyObject_HEAD
      HashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_HashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const HashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const HashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
