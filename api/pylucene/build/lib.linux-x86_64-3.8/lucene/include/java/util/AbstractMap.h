#ifndef java_util_AbstractMap_H
#define java_util_AbstractMap_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class Map$Entry;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractMap : public ::java::lang::Object {
     public:
      enum {
        mid_clear_f2cc1bce94666404,
        mid_containsKey_8b72f2dcdde6fd1d,
        mid_containsValue_8b72f2dcdde6fd1d,
        mid_entrySet_7dcf4034c6d1a92a,
        mid_equals_8b72f2dcdde6fd1d,
        mid_get_e5ae0f8c04795fa9,
        mid_hashCode_9972fcc56b44e79d,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_keySet_7dcf4034c6d1a92a,
        mid_put_128a89bbc17a8b69,
        mid_putAll_408bd889ee3beae5,
        mid_remove_e5ae0f8c04795fa9,
        mid_size_9972fcc56b44e79d,
        mid_toString_db9b55ba01e03e4b,
        mid_values_d4dfbf7a26ff41df,
        mid_clone_d6bcd06f3102c4d9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractMap(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractMap(const AbstractMap& obj) : ::java::lang::Object(obj) {}

      void clear() const;
      jboolean containsKey(const ::java::lang::Object &) const;
      jboolean containsValue(const ::java::lang::Object &) const;
      ::java::util::Set entrySet() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Object get(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean isEmpty() const;
      ::java::util::Set keySet() const;
      ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
      void putAll(const ::java::util::Map &) const;
      ::java::lang::Object remove(const ::java::lang::Object &) const;
      jint size() const;
      ::java::lang::String toString() const;
      ::java::util::Collection values() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractMap);
    extern PyTypeObject *PY_TYPE(AbstractMap);

    class t_AbstractMap {
    public:
      PyObject_HEAD
      AbstractMap object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_AbstractMap *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractMap&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractMap&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
