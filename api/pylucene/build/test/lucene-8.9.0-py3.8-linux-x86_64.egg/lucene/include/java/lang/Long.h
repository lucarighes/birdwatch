#ifndef java_lang_Long_H
#define java_lang_Long_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Long;
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

    class Long : public ::java::lang::Number {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_9c778c9bce6694df,
        mid_bitCount_694afffd0eb7dc3c,
        mid_byteValue_871cd52a74f26213,
        mid_compare_99574379560a8cbc,
        mid_compareTo_40b29526fa8f635b,
        mid_compareUnsigned_99574379560a8cbc,
        mid_decode_5425c887ff2030fd,
        mid_divideUnsigned_3f3333a84e3e6855,
        mid_doubleValue_8c74b787998ce4bc,
        mid_equals_8b72f2dcdde6fd1d,
        mid_floatValue_58aec2b64dff50c8,
        mid_getLong_5425c887ff2030fd,
        mid_getLong_f893aa9a5325648a,
        mid_getLong_b102935049580f07,
        mid_hashCode_9972fcc56b44e79d,
        mid_hashCode_694afffd0eb7dc3c,
        mid_highestOneBit_d711eecdc469624a,
        mid_intValue_9972fcc56b44e79d,
        mid_longValue_2e5ae9edcb9b072f,
        mid_lowestOneBit_d711eecdc469624a,
        mid_max_3f3333a84e3e6855,
        mid_min_3f3333a84e3e6855,
        mid_numberOfLeadingZeros_694afffd0eb7dc3c,
        mid_numberOfTrailingZeros_694afffd0eb7dc3c,
        mid_parseLong_b1e05207ec98e246,
        mid_parseLong_4bbb7c443972920d,
        mid_parseUnsignedLong_b1e05207ec98e246,
        mid_parseUnsignedLong_4bbb7c443972920d,
        mid_remainderUnsigned_3f3333a84e3e6855,
        mid_reverse_d711eecdc469624a,
        mid_reverseBytes_d711eecdc469624a,
        mid_rotateLeft_ebe3aad9c8eac1c8,
        mid_rotateRight_ebe3aad9c8eac1c8,
        mid_shortValue_ec20af88366b851e,
        mid_signum_694afffd0eb7dc3c,
        mid_sum_3f3333a84e3e6855,
        mid_toBinaryString_55e776ffac018431,
        mid_toHexString_55e776ffac018431,
        mid_toOctalString_55e776ffac018431,
        mid_toString_db9b55ba01e03e4b,
        mid_toString_55e776ffac018431,
        mid_toString_ca777a1f4bee0479,
        mid_toUnsignedString_55e776ffac018431,
        mid_toUnsignedString_ca777a1f4bee0479,
        mid_valueOf_5425c887ff2030fd,
        mid_valueOf_cf9cb5744f7372e6,
        mid_valueOf_b82b6847547f7afe,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Long(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Long(const Long& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jlong MAX_VALUE;
      static jlong MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Long(const ::java::lang::String &);
      Long(jlong);

      static jint bitCount(jlong);
      jbyte byteValue() const;
      static jint compare(jlong, jlong);
      jint compareTo(const Long &) const;
      static jint compareUnsigned(jlong, jlong);
      static Long decode(const ::java::lang::String &);
      static jlong divideUnsigned(jlong, jlong);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      static Long getLong(const ::java::lang::String &);
      static Long getLong(const ::java::lang::String &, const Long &);
      static Long getLong(const ::java::lang::String &, jlong);
      jint hashCode() const;
      static jint hashCode(jlong);
      static jlong highestOneBit(jlong);
      jint intValue() const;
      jlong longValue() const;
      static jlong lowestOneBit(jlong);
      static jlong max$(jlong, jlong);
      static jlong min$(jlong, jlong);
      static jint numberOfLeadingZeros(jlong);
      static jint numberOfTrailingZeros(jlong);
      static jlong parseLong(const ::java::lang::String &);
      static jlong parseLong(const ::java::lang::String &, jint);
      static jlong parseUnsignedLong(const ::java::lang::String &);
      static jlong parseUnsignedLong(const ::java::lang::String &, jint);
      static jlong remainderUnsigned(jlong, jlong);
      static jlong reverse(jlong);
      static jlong reverseBytes(jlong);
      static jlong rotateLeft(jlong, jint);
      static jlong rotateRight(jlong, jint);
      jshort shortValue() const;
      static jint signum(jlong);
      static jlong sum(jlong, jlong);
      static ::java::lang::String toBinaryString(jlong);
      static ::java::lang::String toHexString(jlong);
      static ::java::lang::String toOctalString(jlong);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jlong);
      static ::java::lang::String toString(jlong, jint);
      static ::java::lang::String toUnsignedString(jlong);
      static ::java::lang::String toUnsignedString(jlong, jint);
      static Long valueOf(const ::java::lang::String &);
      static Long valueOf(jlong);
      static Long valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Long);
    extern PyTypeObject *PY_TYPE(Long);

    class t_Long {
    public:
      PyObject_HEAD
      Long object;
      static PyObject *wrap_Object(const Long&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
