#ifndef java_util_Calendar_H
#define java_util_Calendar_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Date;
    class Locale;
    class TimeZone;
    class Set;
    class Calendar;
  }
  namespace lang {
    class Cloneable;
    class Comparable;
    class Class;
    class Integer;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Calendar : public ::java::lang::Object {
     public:
      enum {
        mid_add_438c62480c481c65,
        mid_after_8b72f2dcdde6fd1d,
        mid_before_8b72f2dcdde6fd1d,
        mid_clear_f2cc1bce94666404,
        mid_clear_040c4cd0390c5aff,
        mid_clone_d6bcd06f3102c4d9,
        mid_compareTo_252775248db7cef6,
        mid_equals_8b72f2dcdde6fd1d,
        mid_get_1e143afe1894d213,
        mid_getActualMaximum_1e143afe1894d213,
        mid_getActualMinimum_1e143afe1894d213,
        mid_getAvailableCalendarTypes_7dcf4034c6d1a92a,
        mid_getAvailableLocales_9de0c9f607235a40,
        mid_getCalendarType_db9b55ba01e03e4b,
        mid_getDisplayName_e38df799b3b22f5e,
        mid_getDisplayNames_74ab0ae88de99037,
        mid_getFirstDayOfWeek_9972fcc56b44e79d,
        mid_getGreatestMinimum_1e143afe1894d213,
        mid_getInstance_5d2bf8ea8296abce,
        mid_getInstance_3b2d94f2d19a38a1,
        mid_getInstance_62d190eab6e6f1d1,
        mid_getInstance_d74d7afe145e4ffa,
        mid_getLeastMaximum_1e143afe1894d213,
        mid_getMaximum_1e143afe1894d213,
        mid_getMinimalDaysInFirstWeek_9972fcc56b44e79d,
        mid_getMinimum_1e143afe1894d213,
        mid_getTime_7d498bbaa94ff388,
        mid_getTimeInMillis_2e5ae9edcb9b072f,
        mid_getTimeZone_a00e8b2cc21b09d1,
        mid_getWeekYear_9972fcc56b44e79d,
        mid_getWeeksInWeekYear_9972fcc56b44e79d,
        mid_hashCode_9972fcc56b44e79d,
        mid_isLenient_8454bd5aa23fd11e,
        mid_isSet_a1d30e1ee40c89a2,
        mid_isWeekDateSupported_8454bd5aa23fd11e,
        mid_roll_b8f283cdbda5c964,
        mid_roll_438c62480c481c65,
        mid_set_438c62480c481c65,
        mid_set_db3e97653d3683f3,
        mid_set_bfcfa7ea38630f19,
        mid_set_8a81c36f6bc75ed5,
        mid_setFirstDayOfWeek_040c4cd0390c5aff,
        mid_setLenient_9d72768e8fdce2b7,
        mid_setMinimalDaysInFirstWeek_040c4cd0390c5aff,
        mid_setTime_823e481d02661c07,
        mid_setTimeInMillis_9c778c9bce6694df,
        mid_setTimeZone_62cba443b119095c,
        mid_setWeekDate_db3e97653d3683f3,
        mid_toString_db9b55ba01e03e4b,
        mid_computeTime_f2cc1bce94666404,
        mid_computeFields_f2cc1bce94666404,
        mid_internalGet_1e143afe1894d213,
        mid_complete_f2cc1bce94666404,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Calendar(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Calendar(const Calendar& obj) : ::java::lang::Object(obj) {}

      static jint ALL_STYLES;
      static jint AM;
      static jint AM_PM;
      static jint APRIL;
      static jint AUGUST;
      static jint DATE;
      static jint DAY_OF_MONTH;
      static jint DAY_OF_WEEK;
      static jint DAY_OF_WEEK_IN_MONTH;
      static jint DAY_OF_YEAR;
      static jint DECEMBER;
      static jint DST_OFFSET;
      static jint ERA;
      static jint FEBRUARY;
      static jint FIELD_COUNT;
      static jint FRIDAY;
      static jint HOUR;
      static jint HOUR_OF_DAY;
      static jint JANUARY;
      static jint JULY;
      static jint JUNE;
      static jint LONG;
      static jint LONG_FORMAT;
      static jint LONG_STANDALONE;
      static jint MARCH;
      static jint MAY;
      static jint MILLISECOND;
      static jint MINUTE;
      static jint MONDAY;
      static jint MONTH;
      static jint NARROW_FORMAT;
      static jint NARROW_STANDALONE;
      static jint NOVEMBER;
      static jint OCTOBER;
      static jint PM;
      static jint SATURDAY;
      static jint SECOND;
      static jint SEPTEMBER;
      static jint SHORT;
      static jint SHORT_FORMAT;
      static jint SHORT_STANDALONE;
      static jint SUNDAY;
      static jint THURSDAY;
      static jint TUESDAY;
      static jint UNDECIMBER;
      static jint WEDNESDAY;
      static jint WEEK_OF_MONTH;
      static jint WEEK_OF_YEAR;
      static jint YEAR;
      static jint ZONE_OFFSET;

      void add(jint, jint) const;
      jboolean after(const ::java::lang::Object &) const;
      jboolean before(const ::java::lang::Object &) const;
      void clear() const;
      void clear(jint) const;
      ::java::lang::Object clone() const;
      jint compareTo(const Calendar &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jint get(jint) const;
      jint getActualMaximum(jint) const;
      jint getActualMinimum(jint) const;
      static ::java::util::Set getAvailableCalendarTypes();
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::lang::String getCalendarType() const;
      ::java::lang::String getDisplayName(jint, jint, const ::java::util::Locale &) const;
      ::java::util::Map getDisplayNames(jint, jint, const ::java::util::Locale &) const;
      jint getFirstDayOfWeek() const;
      jint getGreatestMinimum(jint) const;
      static Calendar getInstance();
      static Calendar getInstance(const ::java::util::Locale &);
      static Calendar getInstance(const ::java::util::TimeZone &);
      static Calendar getInstance(const ::java::util::TimeZone &, const ::java::util::Locale &);
      jint getLeastMaximum(jint) const;
      jint getMaximum(jint) const;
      jint getMinimalDaysInFirstWeek() const;
      jint getMinimum(jint) const;
      ::java::util::Date getTime() const;
      jlong getTimeInMillis() const;
      ::java::util::TimeZone getTimeZone() const;
      jint getWeekYear() const;
      jint getWeeksInWeekYear() const;
      jint hashCode() const;
      jboolean isLenient() const;
      jboolean isSet(jint) const;
      jboolean isWeekDateSupported() const;
      void roll(jint, jboolean) const;
      void roll(jint, jint) const;
      void set(jint, jint) const;
      void set(jint, jint, jint) const;
      void set(jint, jint, jint, jint, jint) const;
      void set(jint, jint, jint, jint, jint, jint) const;
      void setFirstDayOfWeek(jint) const;
      void setLenient(jboolean) const;
      void setMinimalDaysInFirstWeek(jint) const;
      void setTime(const ::java::util::Date &) const;
      void setTimeInMillis(jlong) const;
      void setTimeZone(const ::java::util::TimeZone &) const;
      void setWeekDate(jint, jint, jint) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Calendar);
    extern PyTypeObject *PY_TYPE(Calendar);

    class t_Calendar {
    public:
      PyObject_HEAD
      Calendar object;
      static PyObject *wrap_Object(const Calendar&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
