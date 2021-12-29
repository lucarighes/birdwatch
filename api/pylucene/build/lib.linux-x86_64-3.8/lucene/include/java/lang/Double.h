#ifndef java_lang_Double_H
#define java_lang_Double_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class Object;
    class Double;
    class String;
    class NumberFormatException;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Double : public ::java::lang::Number {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_3c435f10a3b1e038,
        mid_byteValue_871cd52a74f26213,
        mid_compare_75b868f0e5fe074e,
        mid_compareTo_e2e95bfd2f4abc24,
        mid_doubleToLongBits_2cd17afd1ccbefb5,
        mid_doubleToRawLongBits_2cd17afd1ccbefb5,
        mid_doubleValue_8c74b787998ce4bc,
        mid_equals_8b72f2dcdde6fd1d,
        mid_floatValue_58aec2b64dff50c8,
        mid_hashCode_9972fcc56b44e79d,
        mid_hashCode_c1957bf1459ac23a,
        mid_intValue_9972fcc56b44e79d,
        mid_isFinite_17ce67a573fe19e0,
        mid_isInfinite_8454bd5aa23fd11e,
        mid_isInfinite_17ce67a573fe19e0,
        mid_isNaN_8454bd5aa23fd11e,
        mid_isNaN_17ce67a573fe19e0,
        mid_longBitsToDouble_d0db46799f607804,
        mid_longValue_2e5ae9edcb9b072f,
        mid_max_990b512583b70d91,
        mid_min_990b512583b70d91,
        mid_parseDouble_2bbda5860f5f88e3,
        mid_shortValue_ec20af88366b851e,
        mid_sum_990b512583b70d91,
        mid_toHexString_f4d984402e3bd258,
        mid_toString_db9b55ba01e03e4b,
        mid_toString_f4d984402e3bd258,
        mid_valueOf_07cced247f2e5f4a,
        mid_valueOf_607e707c1d96f796,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Double(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Double(const Double& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jdouble MAX_VALUE;
      static jint MIN_EXPONENT;
      static jdouble MIN_NORMAL;
      static jdouble MIN_VALUE;
      static jdouble NEGATIVE_INFINITY;
      static jdouble NaN;
      static jdouble POSITIVE_INFINITY;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Double(const ::java::lang::String &);
      Double(jdouble);

      jbyte byteValue() const;
      static jint compare(jdouble, jdouble);
      jint compareTo(const Double &) const;
      static jlong doubleToLongBits(jdouble);
      static jlong doubleToRawLongBits(jdouble);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jdouble);
      jint intValue() const;
      static jboolean isFinite(jdouble);
      jboolean isInfinite() const;
      static jboolean isInfinite(jdouble);
      jboolean isNaN() const;
      static jboolean isNaN(jdouble);
      static jdouble longBitsToDouble(jlong);
      jlong longValue() const;
      static jdouble max$(jdouble, jdouble);
      static jdouble min$(jdouble, jdouble);
      static jdouble parseDouble(const ::java::lang::String &);
      jshort shortValue() const;
      static jdouble sum(jdouble, jdouble);
      static ::java::lang::String toHexString(jdouble);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jdouble);
      static Double valueOf(const ::java::lang::String &);
      static Double valueOf(jdouble);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Double);
    extern PyTypeObject *PY_TYPE(Double);

    class t_Double {
    public:
      PyObject_HEAD
      Double object;
      static PyObject *wrap_Object(const Double&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
