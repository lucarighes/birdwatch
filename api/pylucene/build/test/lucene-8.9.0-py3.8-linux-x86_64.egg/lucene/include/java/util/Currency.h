#ifndef java_util_Currency_H
#define java_util_Currency_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Currency;
    class Locale;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Currency : public ::java::lang::Object {
     public:
      enum {
        mid_getAvailableCurrencies_7dcf4034c6d1a92a,
        mid_getCurrencyCode_db9b55ba01e03e4b,
        mid_getDefaultFractionDigits_9972fcc56b44e79d,
        mid_getDisplayName_db9b55ba01e03e4b,
        mid_getDisplayName_8cbdae2bb55ad99c,
        mid_getInstance_a07f8a4f47bcc5ea,
        mid_getInstance_40965d6f85a0b113,
        mid_getNumericCode_9972fcc56b44e79d,
        mid_getSymbol_db9b55ba01e03e4b,
        mid_getSymbol_8cbdae2bb55ad99c,
        mid_toString_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Currency(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Currency(const Currency& obj) : ::java::lang::Object(obj) {}

      static ::java::util::Set getAvailableCurrencies();
      ::java::lang::String getCurrencyCode() const;
      jint getDefaultFractionDigits() const;
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const ::java::util::Locale &) const;
      static Currency getInstance(const ::java::lang::String &);
      static Currency getInstance(const ::java::util::Locale &);
      jint getNumericCode() const;
      ::java::lang::String getSymbol() const;
      ::java::lang::String getSymbol(const ::java::util::Locale &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Currency);
    extern PyTypeObject *PY_TYPE(Currency);

    class t_Currency {
    public:
      PyObject_HEAD
      Currency object;
      static PyObject *wrap_Object(const Currency&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
