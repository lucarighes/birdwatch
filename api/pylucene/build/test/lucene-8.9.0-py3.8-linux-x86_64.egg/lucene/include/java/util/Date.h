#ifndef java_util_Date_H
#define java_util_Date_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Comparable;
    class Class;
    class String;
  }
  namespace util {
    class Date;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Date : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_9c778c9bce6694df,
        mid_init$_db3e97653d3683f3,
        mid_init$_bfcfa7ea38630f19,
        mid_init$_8a81c36f6bc75ed5,
        mid_UTC_28ce26c9a9740bcf,
        mid_after_82a07bf228f15954,
        mid_before_82a07bf228f15954,
        mid_clone_d6bcd06f3102c4d9,
        mid_compareTo_938b7ab781c20f5d,
        mid_equals_8b72f2dcdde6fd1d,
        mid_getDate_9972fcc56b44e79d,
        mid_getDay_9972fcc56b44e79d,
        mid_getHours_9972fcc56b44e79d,
        mid_getMinutes_9972fcc56b44e79d,
        mid_getMonth_9972fcc56b44e79d,
        mid_getSeconds_9972fcc56b44e79d,
        mid_getTime_2e5ae9edcb9b072f,
        mid_getTimezoneOffset_9972fcc56b44e79d,
        mid_getYear_9972fcc56b44e79d,
        mid_hashCode_9972fcc56b44e79d,
        mid_parse_b1e05207ec98e246,
        mid_setDate_040c4cd0390c5aff,
        mid_setHours_040c4cd0390c5aff,
        mid_setMinutes_040c4cd0390c5aff,
        mid_setMonth_040c4cd0390c5aff,
        mid_setSeconds_040c4cd0390c5aff,
        mid_setTime_9c778c9bce6694df,
        mid_setYear_040c4cd0390c5aff,
        mid_toGMTString_db9b55ba01e03e4b,
        mid_toLocaleString_db9b55ba01e03e4b,
        mid_toString_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Date(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Date(const Date& obj) : ::java::lang::Object(obj) {}

      Date();
      Date(const ::java::lang::String &);
      Date(jlong);
      Date(jint, jint, jint);
      Date(jint, jint, jint, jint, jint);
      Date(jint, jint, jint, jint, jint, jint);

      static jlong UTC(jint, jint, jint, jint, jint, jint);
      jboolean after(const Date &) const;
      jboolean before(const Date &) const;
      ::java::lang::Object clone() const;
      jint compareTo(const Date &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint getDate() const;
      jint getDay() const;
      jint getHours() const;
      jint getMinutes() const;
      jint getMonth() const;
      jint getSeconds() const;
      jlong getTime() const;
      jint getTimezoneOffset() const;
      jint getYear() const;
      jint hashCode() const;
      static jlong parse(const ::java::lang::String &);
      void setDate(jint) const;
      void setHours(jint) const;
      void setMinutes(jint) const;
      void setMonth(jint) const;
      void setSeconds(jint) const;
      void setTime(jlong) const;
      void setYear(jint) const;
      ::java::lang::String toGMTString() const;
      ::java::lang::String toLocaleString() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Date);
    extern PyTypeObject *PY_TYPE(Date);

    class t_Date {
    public:
      PyObject_HEAD
      Date object;
      static PyObject *wrap_Object(const Date&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
