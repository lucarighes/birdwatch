#ifndef java_util_Locale$LanguageRange_H
#define java_util_Locale$LanguageRange_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Locale$LanguageRange;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale$LanguageRange : public ::java::lang::Object {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_b5c6442be7f92276,
        mid_equals_8b72f2dcdde6fd1d,
        mid_getRange_db9b55ba01e03e4b,
        mid_getWeight_8c74b787998ce4bc,
        mid_hashCode_9972fcc56b44e79d,
        mid_mapEquivalents_3f443c4919deca39,
        mid_parse_25278b4b3ab80e37,
        mid_parse_b72e0e84c1cdc97c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale$LanguageRange(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale$LanguageRange(const Locale$LanguageRange& obj) : ::java::lang::Object(obj) {}

      static jdouble MAX_WEIGHT;
      static jdouble MIN_WEIGHT;

      Locale$LanguageRange(const ::java::lang::String &);
      Locale$LanguageRange(const ::java::lang::String &, jdouble);

      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String getRange() const;
      jdouble getWeight() const;
      jint hashCode() const;
      static ::java::util::List mapEquivalents(const ::java::util::List &, const ::java::util::Map &);
      static ::java::util::List parse(const ::java::lang::String &);
      static ::java::util::List parse(const ::java::lang::String &, const ::java::util::Map &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale$LanguageRange);
    extern PyTypeObject *PY_TYPE(Locale$LanguageRange);

    class t_Locale$LanguageRange {
    public:
      PyObject_HEAD
      Locale$LanguageRange object;
      static PyObject *wrap_Object(const Locale$LanguageRange&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
