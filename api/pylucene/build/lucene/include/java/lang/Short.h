#ifndef java_lang_Short_H
#define java_lang_Short_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class Short;
    class Object;
    class String;
    class NumberFormatException;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Short : public ::java::lang::Number {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_265bc0a0a1840315,
        mid_byteValue_871cd52a74f26213,
        mid_compare_62c62398434c3efb,
        mid_compareTo_8cdb7dec2fed099c,
        mid_decode_871278f1c8a1ad06,
        mid_doubleValue_8c74b787998ce4bc,
        mid_equals_8b72f2dcdde6fd1d,
        mid_floatValue_58aec2b64dff50c8,
        mid_hashCode_9972fcc56b44e79d,
        mid_hashCode_e51608fa7fa0b998,
        mid_intValue_9972fcc56b44e79d,
        mid_longValue_2e5ae9edcb9b072f,
        mid_parseShort_c5bee6317a41dfb6,
        mid_parseShort_583c58009affa4ba,
        mid_reverseBytes_b01103324aa7c244,
        mid_shortValue_ec20af88366b851e,
        mid_toString_db9b55ba01e03e4b,
        mid_toString_b51c4ac60c4ba205,
        mid_toUnsignedInt_e51608fa7fa0b998,
        mid_toUnsignedLong_7c8c4477eea7df84,
        mid_valueOf_871278f1c8a1ad06,
        mid_valueOf_3650fa7f22e3d3a5,
        mid_valueOf_99e61d6d5de66425,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Short(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Short(const Short& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jshort MAX_VALUE;
      static jshort MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Short(const ::java::lang::String &);
      Short(jshort);

      jbyte byteValue() const;
      static jint compare(jshort, jshort);
      jint compareTo(const Short &) const;
      static Short decode(const ::java::lang::String &);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jshort);
      jint intValue() const;
      jlong longValue() const;
      static jshort parseShort(const ::java::lang::String &);
      static jshort parseShort(const ::java::lang::String &, jint);
      static jshort reverseBytes(jshort);
      jshort shortValue() const;
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jshort);
      static jint toUnsignedInt(jshort);
      static jlong toUnsignedLong(jshort);
      static Short valueOf(const ::java::lang::String &);
      static Short valueOf(jshort);
      static Short valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Short);
    extern PyTypeObject *PY_TYPE(Short);

    class t_Short {
    public:
      PyObject_HEAD
      Short object;
      static PyObject *wrap_Object(const Short&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
