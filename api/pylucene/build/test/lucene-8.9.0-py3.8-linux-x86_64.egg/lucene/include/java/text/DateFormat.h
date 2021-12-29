#ifndef java_text_DateFormat_H
#define java_text_DateFormat_H

#include "java/text/Format.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
    class StringBuffer;
  }
  namespace util {
    class Date;
    class Locale;
    class TimeZone;
    class Calendar;
  }
  namespace text {
    class NumberFormat;
    class DateFormat;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DateFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_d6bcd06f3102c4d9,
        mid_equals_8b72f2dcdde6fd1d,
        mid_format_019cce38164faab9,
        mid_getAvailableLocales_9de0c9f607235a40,
        mid_getCalendar_5d2bf8ea8296abce,
        mid_getDateInstance_4224c39e32504ea8,
        mid_getDateInstance_7c4a02a3edd004ae,
        mid_getDateInstance_7b16cf096b1ba9cd,
        mid_getDateTimeInstance_4224c39e32504ea8,
        mid_getDateTimeInstance_8b5fbf7d3a03c7e6,
        mid_getDateTimeInstance_e8bcdac412674d38,
        mid_getInstance_4224c39e32504ea8,
        mid_getNumberFormat_a56386c4cfd9cbe9,
        mid_getTimeInstance_4224c39e32504ea8,
        mid_getTimeInstance_7c4a02a3edd004ae,
        mid_getTimeInstance_7b16cf096b1ba9cd,
        mid_getTimeZone_a00e8b2cc21b09d1,
        mid_hashCode_9972fcc56b44e79d,
        mid_isLenient_8454bd5aa23fd11e,
        mid_parse_6748e872d0c49761,
        mid_setCalendar_0899a53f109bc21b,
        mid_setLenient_9d72768e8fdce2b7,
        mid_setNumberFormat_cd4a218c853203a8,
        mid_setTimeZone_62cba443b119095c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DateFormat(jobject obj) : ::java::text::Format(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DateFormat(const DateFormat& obj) : ::java::text::Format(obj) {}

      static jint AM_PM_FIELD;
      static jint DATE_FIELD;
      static jint DAY_OF_WEEK_FIELD;
      static jint DAY_OF_WEEK_IN_MONTH_FIELD;
      static jint DAY_OF_YEAR_FIELD;
      static jint DEFAULT;
      static jint ERA_FIELD;
      static jint FULL;
      static jint HOUR0_FIELD;
      static jint HOUR1_FIELD;
      static jint HOUR_OF_DAY0_FIELD;
      static jint HOUR_OF_DAY1_FIELD;
      static jint LONG;
      static jint MEDIUM;
      static jint MILLISECOND_FIELD;
      static jint MINUTE_FIELD;
      static jint MONTH_FIELD;
      static jint SECOND_FIELD;
      static jint SHORT;
      static jint TIMEZONE_FIELD;
      static jint WEEK_OF_MONTH_FIELD;
      static jint WEEK_OF_YEAR_FIELD;
      static jint YEAR_FIELD;

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String format(const ::java::util::Date &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::util::Calendar getCalendar() const;
      static DateFormat getDateInstance();
      static DateFormat getDateInstance(jint);
      static DateFormat getDateInstance(jint, const ::java::util::Locale &);
      static DateFormat getDateTimeInstance();
      static DateFormat getDateTimeInstance(jint, jint);
      static DateFormat getDateTimeInstance(jint, jint, const ::java::util::Locale &);
      static DateFormat getInstance();
      ::java::text::NumberFormat getNumberFormat() const;
      static DateFormat getTimeInstance();
      static DateFormat getTimeInstance(jint);
      static DateFormat getTimeInstance(jint, const ::java::util::Locale &);
      ::java::util::TimeZone getTimeZone() const;
      jint hashCode() const;
      jboolean isLenient() const;
      ::java::util::Date parse(const ::java::lang::String &) const;
      void setCalendar(const ::java::util::Calendar &) const;
      void setLenient(jboolean) const;
      void setNumberFormat(const ::java::text::NumberFormat &) const;
      void setTimeZone(const ::java::util::TimeZone &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(DateFormat);
    extern PyTypeObject *PY_TYPE(DateFormat);

    class t_DateFormat {
    public:
      PyObject_HEAD
      DateFormat object;
      static PyObject *wrap_Object(const DateFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
