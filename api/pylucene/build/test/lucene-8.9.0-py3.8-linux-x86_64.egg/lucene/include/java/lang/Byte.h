#ifndef java_lang_Byte_H
#define java_lang_Byte_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Byte;
    class Comparable;
    class Class;
    class Object;
    class String;
    class NumberFormatException;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Byte : public ::java::lang::Number {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_9c36fec3bac1d0c7,
        mid_byteValue_871cd52a74f26213,
        mid_compare_5112c82a316a4717,
        mid_compareTo_5be20057625ab643,
        mid_decode_6633bb9d2ad3c415,
        mid_doubleValue_8c74b787998ce4bc,
        mid_equals_8b72f2dcdde6fd1d,
        mid_floatValue_58aec2b64dff50c8,
        mid_hashCode_9972fcc56b44e79d,
        mid_hashCode_5312fc6ae11d52d9,
        mid_intValue_9972fcc56b44e79d,
        mid_longValue_2e5ae9edcb9b072f,
        mid_parseByte_5cc1cc3ee6dabd77,
        mid_parseByte_d205b8ee3799eb65,
        mid_shortValue_ec20af88366b851e,
        mid_toString_db9b55ba01e03e4b,
        mid_toString_3bd839c18a5b11ae,
        mid_toUnsignedInt_5312fc6ae11d52d9,
        mid_toUnsignedLong_b213fc556f31ad65,
        mid_valueOf_6633bb9d2ad3c415,
        mid_valueOf_e3255412a205c0a4,
        mid_valueOf_c95717ff69a28c0d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Byte(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Byte(const Byte& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jbyte MAX_VALUE;
      static jbyte MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Byte(const ::java::lang::String &);
      Byte(jbyte);

      jbyte byteValue() const;
      static jint compare(jbyte, jbyte);
      jint compareTo(const Byte &) const;
      static Byte decode(const ::java::lang::String &);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jbyte);
      jint intValue() const;
      jlong longValue() const;
      static jbyte parseByte(const ::java::lang::String &);
      static jbyte parseByte(const ::java::lang::String &, jint);
      jshort shortValue() const;
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jbyte);
      static jint toUnsignedInt(jbyte);
      static jlong toUnsignedLong(jbyte);
      static Byte valueOf(const ::java::lang::String &);
      static Byte valueOf(jbyte);
      static Byte valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Byte);
    extern PyTypeObject *PY_TYPE(Byte);

    class t_Byte {
    public:
      PyObject_HEAD
      Byte object;
      static PyObject *wrap_Object(const Byte&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
