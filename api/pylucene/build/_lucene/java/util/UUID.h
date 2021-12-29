#ifndef java_util_UUID_H
#define java_util_UUID_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
  namespace util {
    class UUID;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class UUID : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0248b6e53dc27ea3,
        mid_clockSequence_9972fcc56b44e79d,
        mid_compareTo_7969dcadf75b6ebc,
        mid_equals_8b72f2dcdde6fd1d,
        mid_fromString_125cc66c0fdeb636,
        mid_getLeastSignificantBits_2e5ae9edcb9b072f,
        mid_getMostSignificantBits_2e5ae9edcb9b072f,
        mid_hashCode_9972fcc56b44e79d,
        mid_nameUUIDFromBytes_3c41660c5d90db43,
        mid_node_2e5ae9edcb9b072f,
        mid_randomUUID_c2ec84b97895b92f,
        mid_timestamp_2e5ae9edcb9b072f,
        mid_toString_db9b55ba01e03e4b,
        mid_variant_9972fcc56b44e79d,
        mid_version_9972fcc56b44e79d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit UUID(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      UUID(const UUID& obj) : ::java::lang::Object(obj) {}

      UUID(jlong, jlong);

      jint clockSequence() const;
      jint compareTo(const UUID &) const;
      jboolean equals(const ::java::lang::Object &) const;
      static UUID fromString(const ::java::lang::String &);
      jlong getLeastSignificantBits() const;
      jlong getMostSignificantBits() const;
      jint hashCode() const;
      static UUID nameUUIDFromBytes(const JArray< jbyte > &);
      jlong node() const;
      static UUID randomUUID();
      jlong timestamp() const;
      ::java::lang::String toString() const;
      jint variant() const;
      jint version() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(UUID);
    extern PyTypeObject *PY_TYPE(UUID);

    class t_UUID {
    public:
      PyObject_HEAD
      UUID object;
      static PyObject *wrap_Object(const UUID&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
