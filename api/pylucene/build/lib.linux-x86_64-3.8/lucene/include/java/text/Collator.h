#ifndef java_text_Collator_H
#define java_text_Collator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    class Locale;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
  namespace text {
    class Collator;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class Collator : public ::java::lang::Object {
     public:
      enum {
        mid_clone_d6bcd06f3102c4d9,
        mid_compare_b842b27f8e76eceb,
        mid_compare_9dae63203ae747af,
        mid_equals_8b72f2dcdde6fd1d,
        mid_equals_11e80e7a1d57e4b9,
        mid_getAvailableLocales_9de0c9f607235a40,
        mid_getDecomposition_9972fcc56b44e79d,
        mid_getInstance_624164693b6a332e,
        mid_getInstance_97ffd55b551df05f,
        mid_getStrength_9972fcc56b44e79d,
        mid_hashCode_9972fcc56b44e79d,
        mid_setDecomposition_040c4cd0390c5aff,
        mid_setStrength_040c4cd0390c5aff,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collator(const Collator& obj) : ::java::lang::Object(obj) {}

      static jint CANONICAL_DECOMPOSITION;
      static jint FULL_DECOMPOSITION;
      static jint IDENTICAL;
      static jint NO_DECOMPOSITION;
      static jint PRIMARY;
      static jint SECONDARY;
      static jint TERTIARY;

      ::java::lang::Object clone() const;
      jint compare(const ::java::lang::String &, const ::java::lang::String &) const;
      jint compare(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equals(const ::java::lang::String &, const ::java::lang::String &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      jint getDecomposition() const;
      static Collator getInstance();
      static Collator getInstance(const ::java::util::Locale &);
      jint getStrength() const;
      jint hashCode() const;
      void setDecomposition(jint) const;
      void setStrength(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(Collator);
    extern PyTypeObject *PY_TYPE(Collator);

    class t_Collator {
    public:
      PyObject_HEAD
      Collator object;
      static PyObject *wrap_Object(const Collator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
