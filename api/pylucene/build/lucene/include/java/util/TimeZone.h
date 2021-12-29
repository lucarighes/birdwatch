#ifndef java_util_TimeZone_H
#define java_util_TimeZone_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
  namespace util {
    class Date;
    class Locale;
    class TimeZone;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class TimeZone : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_clone_d6bcd06f3102c4d9,
        mid_getAvailableIDs_9865da0b5ee490bc,
        mid_getAvailableIDs_77baa612666bd4dc,
        mid_getDSTSavings_9972fcc56b44e79d,
        mid_getDefault_a00e8b2cc21b09d1,
        mid_getDisplayName_db9b55ba01e03e4b,
        mid_getDisplayName_8cbdae2bb55ad99c,
        mid_getDisplayName_53d4d2ff38942f2a,
        mid_getDisplayName_4c7ef12d57704126,
        mid_getID_db9b55ba01e03e4b,
        mid_getOffset_694afffd0eb7dc3c,
        mid_getOffset_df3fe101c56d5627,
        mid_getRawOffset_9972fcc56b44e79d,
        mid_getTimeZone_c54301b73801429f,
        mid_hasSameRules_4217a0549e90cc09,
        mid_inDaylightTime_82a07bf228f15954,
        mid_observesDaylightTime_8454bd5aa23fd11e,
        mid_setDefault_62cba443b119095c,
        mid_setID_9fd2eb66a64e6f0f,
        mid_setRawOffset_040c4cd0390c5aff,
        mid_useDaylightTime_8454bd5aa23fd11e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit TimeZone(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      TimeZone(const TimeZone& obj) : ::java::lang::Object(obj) {}

      static jint LONG;
      static jint SHORT;

      TimeZone();

      ::java::lang::Object clone() const;
      static JArray< ::java::lang::String > getAvailableIDs();
      static JArray< ::java::lang::String > getAvailableIDs(jint);
      jint getDSTSavings() const;
      static TimeZone getDefault();
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const ::java::util::Locale &) const;
      ::java::lang::String getDisplayName(jboolean, jint) const;
      ::java::lang::String getDisplayName(jboolean, jint, const ::java::util::Locale &) const;
      ::java::lang::String getID() const;
      jint getOffset(jlong) const;
      jint getOffset(jint, jint, jint, jint, jint, jint) const;
      jint getRawOffset() const;
      static TimeZone getTimeZone(const ::java::lang::String &);
      jboolean hasSameRules(const TimeZone &) const;
      jboolean inDaylightTime(const ::java::util::Date &) const;
      jboolean observesDaylightTime() const;
      static void setDefault(const TimeZone &);
      void setID(const ::java::lang::String &) const;
      void setRawOffset(jint) const;
      jboolean useDaylightTime() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(TimeZone);
    extern PyTypeObject *PY_TYPE(TimeZone);

    class t_TimeZone {
    public:
      PyObject_HEAD
      TimeZone object;
      static PyObject *wrap_Object(const TimeZone&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
