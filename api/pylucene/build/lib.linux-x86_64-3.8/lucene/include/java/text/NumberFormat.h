#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
    class Object;
    class String;
    class StringBuffer;
  }
  namespace util {
    class Currency;
    class Locale;
  }
  namespace text {
    class NumberFormat;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class NumberFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_d6bcd06f3102c4d9,
        mid_equals_8b72f2dcdde6fd1d,
        mid_format_f4d984402e3bd258,
        mid_format_55e776ffac018431,
        mid_getAvailableLocales_9de0c9f607235a40,
        mid_getCurrency_34cd83b8be53b24a,
        mid_getCurrencyInstance_a56386c4cfd9cbe9,
        mid_getCurrencyInstance_81eed739c1c73bfe,
        mid_getInstance_a56386c4cfd9cbe9,
        mid_getInstance_81eed739c1c73bfe,
        mid_getIntegerInstance_a56386c4cfd9cbe9,
        mid_getIntegerInstance_81eed739c1c73bfe,
        mid_getMaximumFractionDigits_9972fcc56b44e79d,
        mid_getMaximumIntegerDigits_9972fcc56b44e79d,
        mid_getMinimumFractionDigits_9972fcc56b44e79d,
        mid_getMinimumIntegerDigits_9972fcc56b44e79d,
        mid_getNumberInstance_a56386c4cfd9cbe9,
        mid_getNumberInstance_81eed739c1c73bfe,
        mid_getPercentInstance_a56386c4cfd9cbe9,
        mid_getPercentInstance_81eed739c1c73bfe,
        mid_hashCode_9972fcc56b44e79d,
        mid_isGroupingUsed_8454bd5aa23fd11e,
        mid_isParseIntegerOnly_8454bd5aa23fd11e,
        mid_parse_a54d76fb1b57fe08,
        mid_setCurrency_ad6cd0db6835c0e2,
        mid_setGroupingUsed_9d72768e8fdce2b7,
        mid_setMaximumFractionDigits_040c4cd0390c5aff,
        mid_setMaximumIntegerDigits_040c4cd0390c5aff,
        mid_setMinimumFractionDigits_040c4cd0390c5aff,
        mid_setMinimumIntegerDigits_040c4cd0390c5aff,
        mid_setParseIntegerOnly_9d72768e8fdce2b7,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NumberFormat(jobject obj) : ::java::text::Format(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NumberFormat(const NumberFormat& obj) : ::java::text::Format(obj) {}

      static jint FRACTION_FIELD;
      static jint INTEGER_FIELD;

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String format(jdouble) const;
      ::java::lang::String format(jlong) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::util::Currency getCurrency() const;
      static NumberFormat getCurrencyInstance();
      static NumberFormat getCurrencyInstance(const ::java::util::Locale &);
      static NumberFormat getInstance();
      static NumberFormat getInstance(const ::java::util::Locale &);
      static NumberFormat getIntegerInstance();
      static NumberFormat getIntegerInstance(const ::java::util::Locale &);
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      static NumberFormat getNumberInstance();
      static NumberFormat getNumberInstance(const ::java::util::Locale &);
      static NumberFormat getPercentInstance();
      static NumberFormat getPercentInstance(const ::java::util::Locale &);
      jint hashCode() const;
      jboolean isGroupingUsed() const;
      jboolean isParseIntegerOnly() const;
      ::java::lang::Number parse(const ::java::lang::String &) const;
      void setCurrency(const ::java::util::Currency &) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setParseIntegerOnly(jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(NumberFormat);
    extern PyTypeObject *PY_TYPE(NumberFormat);

    class t_NumberFormat {
    public:
      PyObject_HEAD
      NumberFormat object;
      static PyObject *wrap_Object(const NumberFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
