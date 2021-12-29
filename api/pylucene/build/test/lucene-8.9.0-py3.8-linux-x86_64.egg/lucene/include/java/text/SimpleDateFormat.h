#ifndef java_text_SimpleDateFormat_H
#define java_text_SimpleDateFormat_H

#include "java/text/DateFormat.h"

namespace java {
  namespace util {
    class Date;
    class Locale;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
    class StringBuffer;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class SimpleDateFormat : public ::java::text::DateFormat {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_262174a04a8e5a23,
        mid_applyLocalizedPattern_9fd2eb66a64e6f0f,
        mid_applyPattern_9fd2eb66a64e6f0f,
        mid_clone_d6bcd06f3102c4d9,
        mid_equals_8b72f2dcdde6fd1d,
        mid_get2DigitYearStart_7d498bbaa94ff388,
        mid_hashCode_9972fcc56b44e79d,
        mid_set2DigitYearStart_823e481d02661c07,
        mid_toLocalizedPattern_db9b55ba01e03e4b,
        mid_toPattern_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SimpleDateFormat(jobject obj) : ::java::text::DateFormat(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SimpleDateFormat(const SimpleDateFormat& obj) : ::java::text::DateFormat(obj) {}

      SimpleDateFormat();
      SimpleDateFormat(const ::java::lang::String &);
      SimpleDateFormat(const ::java::lang::String &, const ::java::util::Locale &);

      void applyLocalizedPattern(const ::java::lang::String &) const;
      void applyPattern(const ::java::lang::String &) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::util::Date get2DigitYearStart() const;
      jint hashCode() const;
      void set2DigitYearStart(const ::java::util::Date &) const;
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(SimpleDateFormat);
    extern PyTypeObject *PY_TYPE(SimpleDateFormat);

    class t_SimpleDateFormat {
    public:
      PyObject_HEAD
      SimpleDateFormat object;
      static PyObject *wrap_Object(const SimpleDateFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
