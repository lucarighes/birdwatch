#ifndef java_lang_Integer_H
#define java_lang_Integer_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class Object;
    class Integer;
    class String;
    class NumberFormatException;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Integer : public ::java::lang::Number {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_040c4cd0390c5aff,
        mid_bitCount_1e143afe1894d213,
        mid_byteValue_871cd52a74f26213,
        mid_compare_57a58545eba514db,
        mid_compareTo_81f8a3632c9af401,
        mid_compareUnsigned_57a58545eba514db,
        mid_decode_aacfb994882247d3,
        mid_divideUnsigned_57a58545eba514db,
        mid_doubleValue_8c74b787998ce4bc,
        mid_equals_8b72f2dcdde6fd1d,
        mid_floatValue_58aec2b64dff50c8,
        mid_getInteger_aacfb994882247d3,
        mid_getInteger_d0ce74f5dadeca9e,
        mid_getInteger_c7945c5c09453aa4,
        mid_hashCode_9972fcc56b44e79d,
        mid_hashCode_1e143afe1894d213,
        mid_highestOneBit_1e143afe1894d213,
        mid_intValue_9972fcc56b44e79d,
        mid_longValue_2e5ae9edcb9b072f,
        mid_lowestOneBit_1e143afe1894d213,
        mid_max_57a58545eba514db,
        mid_min_57a58545eba514db,
        mid_numberOfLeadingZeros_1e143afe1894d213,
        mid_numberOfTrailingZeros_1e143afe1894d213,
        mid_parseInt_a5a7d1128e9e2bb7,
        mid_parseInt_30cd5d5b9318bd5d,
        mid_parseUnsignedInt_a5a7d1128e9e2bb7,
        mid_parseUnsignedInt_30cd5d5b9318bd5d,
        mid_remainderUnsigned_57a58545eba514db,
        mid_reverse_1e143afe1894d213,
        mid_reverseBytes_1e143afe1894d213,
        mid_rotateLeft_57a58545eba514db,
        mid_rotateRight_57a58545eba514db,
        mid_shortValue_ec20af88366b851e,
        mid_signum_1e143afe1894d213,
        mid_sum_57a58545eba514db,
        mid_toBinaryString_d7593acad64ef635,
        mid_toHexString_d7593acad64ef635,
        mid_toOctalString_d7593acad64ef635,
        mid_toString_db9b55ba01e03e4b,
        mid_toString_d7593acad64ef635,
        mid_toString_1f239231430be983,
        mid_toUnsignedLong_0f1d64a641e8af53,
        mid_toUnsignedString_d7593acad64ef635,
        mid_toUnsignedString_1f239231430be983,
        mid_valueOf_aacfb994882247d3,
        mid_valueOf_6469c2cb31e18c67,
        mid_valueOf_c7945c5c09453aa4,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Integer(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Integer(const Integer& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_VALUE;
      static jint MIN_VALUE;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Integer(const ::java::lang::String &);
      Integer(jint);

      static jint bitCount(jint);
      jbyte byteValue() const;
      static jint compare(jint, jint);
      jint compareTo(const Integer &) const;
      static jint compareUnsigned(jint, jint);
      static Integer decode(const ::java::lang::String &);
      static jint divideUnsigned(jint, jint);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      static Integer getInteger(const ::java::lang::String &);
      static Integer getInteger(const ::java::lang::String &, const Integer &);
      static Integer getInteger(const ::java::lang::String &, jint);
      jint hashCode() const;
      static jint hashCode(jint);
      static jint highestOneBit(jint);
      jint intValue() const;
      jlong longValue() const;
      static jint lowestOneBit(jint);
      static jint max$(jint, jint);
      static jint min$(jint, jint);
      static jint numberOfLeadingZeros(jint);
      static jint numberOfTrailingZeros(jint);
      static jint parseInt(const ::java::lang::String &);
      static jint parseInt(const ::java::lang::String &, jint);
      static jint parseUnsignedInt(const ::java::lang::String &);
      static jint parseUnsignedInt(const ::java::lang::String &, jint);
      static jint remainderUnsigned(jint, jint);
      static jint reverse(jint);
      static jint reverseBytes(jint);
      static jint rotateLeft(jint, jint);
      static jint rotateRight(jint, jint);
      jshort shortValue() const;
      static jint signum(jint);
      static jint sum(jint, jint);
      static ::java::lang::String toBinaryString(jint);
      static ::java::lang::String toHexString(jint);
      static ::java::lang::String toOctalString(jint);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jint);
      static ::java::lang::String toString(jint, jint);
      static jlong toUnsignedLong(jint);
      static ::java::lang::String toUnsignedString(jint);
      static ::java::lang::String toUnsignedString(jint, jint);
      static Integer valueOf(const ::java::lang::String &);
      static Integer valueOf(jint);
      static Integer valueOf(const ::java::lang::String &, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Integer);
    extern PyTypeObject *PY_TYPE(Integer);

    class t_Integer {
    public:
      PyObject_HEAD
      Integer object;
      static PyObject *wrap_Object(const Integer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
