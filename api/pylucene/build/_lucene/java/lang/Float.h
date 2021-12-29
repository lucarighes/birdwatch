#ifndef java_lang_Float_H
#define java_lang_Float_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Float;
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

    class Float : public ::java::lang::Number {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_3c435f10a3b1e038,
        mid_init$_8e1d952dd65cdc3a,
        mid_byteValue_871cd52a74f26213,
        mid_compare_46423f99ab361abc,
        mid_compareTo_76d17c749e694c4c,
        mid_doubleValue_8c74b787998ce4bc,
        mid_equals_8b72f2dcdde6fd1d,
        mid_floatToIntBits_7db35672babd0b26,
        mid_floatToRawIntBits_7db35672babd0b26,
        mid_floatValue_58aec2b64dff50c8,
        mid_hashCode_9972fcc56b44e79d,
        mid_hashCode_7db35672babd0b26,
        mid_intBitsToFloat_384f078ef4b8f931,
        mid_intValue_9972fcc56b44e79d,
        mid_isFinite_3e681ff0d6da91d1,
        mid_isInfinite_8454bd5aa23fd11e,
        mid_isInfinite_3e681ff0d6da91d1,
        mid_isNaN_8454bd5aa23fd11e,
        mid_isNaN_3e681ff0d6da91d1,
        mid_longValue_2e5ae9edcb9b072f,
        mid_max_a9c39cecc01e4246,
        mid_min_a9c39cecc01e4246,
        mid_parseFloat_30d197578d63fb9b,
        mid_shortValue_ec20af88366b851e,
        mid_sum_a9c39cecc01e4246,
        mid_toHexString_64158b2ec62ced09,
        mid_toString_db9b55ba01e03e4b,
        mid_toString_64158b2ec62ced09,
        mid_valueOf_7734c9b2a9ee8cc6,
        mid_valueOf_0759084ccec0372f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Float(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Float(const Float& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jfloat MAX_VALUE;
      static jint MIN_EXPONENT;
      static jfloat MIN_NORMAL;
      static jfloat MIN_VALUE;
      static jfloat NEGATIVE_INFINITY;
      static jfloat NaN;
      static jfloat POSITIVE_INFINITY;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Float(const ::java::lang::String &);
      Float(jdouble);
      Float(jfloat);

      jbyte byteValue() const;
      static jint compare(jfloat, jfloat);
      jint compareTo(const Float &) const;
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      static jint floatToIntBits(jfloat);
      static jint floatToRawIntBits(jfloat);
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jfloat);
      static jfloat intBitsToFloat(jint);
      jint intValue() const;
      static jboolean isFinite(jfloat);
      jboolean isInfinite() const;
      static jboolean isInfinite(jfloat);
      jboolean isNaN() const;
      static jboolean isNaN(jfloat);
      jlong longValue() const;
      static jfloat max$(jfloat, jfloat);
      static jfloat min$(jfloat, jfloat);
      static jfloat parseFloat(const ::java::lang::String &);
      jshort shortValue() const;
      static jfloat sum(jfloat, jfloat);
      static ::java::lang::String toHexString(jfloat);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jfloat);
      static Float valueOf(const ::java::lang::String &);
      static Float valueOf(jfloat);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Float);
    extern PyTypeObject *PY_TYPE(Float);

    class t_Float {
    public:
      PyObject_HEAD
      Float object;
      static PyObject *wrap_Object(const Float&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
