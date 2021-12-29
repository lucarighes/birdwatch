#ifndef java_util_LinkedHashMap_H
#define java_util_LinkedHashMap_H

#include "java/util/HashMap.h"

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
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class LinkedHashMap : public ::java::util::HashMap {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_040c4cd0390c5aff,
        mid_init$_408bd889ee3beae5,
        mid_init$_da161bce5801b190,
        mid_init$_288f4efe31babf8a,
        mid_clear_f2cc1bce94666404,
        mid_containsValue_8b72f2dcdde6fd1d,
        mid_entrySet_7dcf4034c6d1a92a,
        mid_forEach_94704ed6ccc48468,
        mid_get_e5ae0f8c04795fa9,
        mid_getOrDefault_128a89bbc17a8b69,
        mid_keySet_7dcf4034c6d1a92a,
        mid_replaceAll_22221e328874bd4f,
        mid_values_d4dfbf7a26ff41df,
        mid_removeEldestEntry_7076d39f0bf8c708,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit LinkedHashMap(jobject obj) : ::java::util::HashMap(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      LinkedHashMap(const LinkedHashMap& obj) : ::java::util::HashMap(obj) {}

      LinkedHashMap();
      LinkedHashMap(jint);
      LinkedHashMap(const ::java::util::Map &);
      LinkedHashMap(jint, jfloat);
      LinkedHashMap(jint, jfloat, jboolean);

      void clear() const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      void forEach(const ::java::util::function::BiConsumer &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      ::java::lang::Object getOrDefault(const ::java::lang::Object &, const ::java::lang::Object &) const;
      ::java::util::Set keySet() const;
      void replaceAll(const ::java::util::function::BiFunction &) const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(LinkedHashMap);
    extern PyTypeObject *PY_TYPE(LinkedHashMap);

    class t_LinkedHashMap {
    public:
      PyObject_HEAD
      LinkedHashMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_LinkedHashMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const LinkedHashMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const LinkedHashMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
