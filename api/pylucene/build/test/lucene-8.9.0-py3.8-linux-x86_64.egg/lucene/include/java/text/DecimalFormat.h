#ifndef java_text_DecimalFormat_H
#define java_text_DecimalFormat_H

#include "java/text/NumberFormat.h"

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
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DecimalFormat : public ::java::text::NumberFormat {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        mid_applyLocalizedPattern_9fd2eb66a64e6f0f,
        mid_applyPattern_9fd2eb66a64e6f0f,
        mid_clone_d6bcd06f3102c4d9,
        mid_equals_8b72f2dcdde6fd1d,
        mid_getCurrency_34cd83b8be53b24a,
        mid_getGroupingSize_9972fcc56b44e79d,
        mid_getMaximumFractionDigits_9972fcc56b44e79d,
        mid_getMaximumIntegerDigits_9972fcc56b44e79d,
        mid_getMinimumFractionDigits_9972fcc56b44e79d,
        mid_getMinimumIntegerDigits_9972fcc56b44e79d,
        mid_getMultiplier_9972fcc56b44e79d,
        mid_getNegativePrefix_db9b55ba01e03e4b,
        mid_getNegativeSuffix_db9b55ba01e03e4b,
        mid_getPositivePrefix_db9b55ba01e03e4b,
        mid_getPositiveSuffix_db9b55ba01e03e4b,
        mid_hashCode_9972fcc56b44e79d,
        mid_isDecimalSeparatorAlwaysShown_8454bd5aa23fd11e,
        mid_isParseBigDecimal_8454bd5aa23fd11e,
        mid_setCurrency_ad6cd0db6835c0e2,
        mid_setDecimalSeparatorAlwaysShown_9d72768e8fdce2b7,
        mid_setGroupingSize_040c4cd0390c5aff,
        mid_setGroupingUsed_9d72768e8fdce2b7,
        mid_setMaximumFractionDigits_040c4cd0390c5aff,
        mid_setMaximumIntegerDigits_040c4cd0390c5aff,
        mid_setMinimumFractionDigits_040c4cd0390c5aff,
        mid_setMinimumIntegerDigits_040c4cd0390c5aff,
        mid_setMultiplier_040c4cd0390c5aff,
        mid_setNegativePrefix_9fd2eb66a64e6f0f,
        mid_setNegativeSuffix_9fd2eb66a64e6f0f,
        mid_setParseBigDecimal_9d72768e8fdce2b7,
        mid_setPositivePrefix_9fd2eb66a64e6f0f,
        mid_setPositiveSuffix_9fd2eb66a64e6f0f,
        mid_toLocalizedPattern_db9b55ba01e03e4b,
        mid_toPattern_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DecimalFormat(jobject obj) : ::java::text::NumberFormat(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DecimalFormat(const DecimalFormat& obj) : ::java::text::NumberFormat(obj) {}

      DecimalFormat();
      DecimalFormat(const ::java::lang::String &);

      void applyLocalizedPattern(const ::java::lang::String &) const;
      void applyPattern(const ::java::lang::String &) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::util::Currency getCurrency() const;
      jint getGroupingSize() const;
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      jint getMultiplier() const;
      ::java::lang::String getNegativePrefix() const;
      ::java::lang::String getNegativeSuffix() const;
      ::java::lang::String getPositivePrefix() const;
      ::java::lang::String getPositiveSuffix() const;
      jint hashCode() const;
      jboolean isDecimalSeparatorAlwaysShown() const;
      jboolean isParseBigDecimal() const;
      void setCurrency(const ::java::util::Currency &) const;
      void setDecimalSeparatorAlwaysShown(jboolean) const;
      void setGroupingSize(jint) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setMultiplier(jint) const;
      void setNegativePrefix(const ::java::lang::String &) const;
      void setNegativeSuffix(const ::java::lang::String &) const;
      void setParseBigDecimal(jboolean) const;
      void setPositivePrefix(const ::java::lang::String &) const;
      void setPositiveSuffix(const ::java::lang::String &) const;
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(DecimalFormat);
    extern PyTypeObject *PY_TYPE(DecimalFormat);

    class t_DecimalFormat {
    public:
      PyObject_HEAD
      DecimalFormat object;
      static PyObject *wrap_Object(const DecimalFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
