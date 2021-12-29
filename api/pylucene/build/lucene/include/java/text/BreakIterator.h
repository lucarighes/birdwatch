#ifndef java_text_BreakIterator_H
#define java_text_BreakIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
  namespace util {
    class Locale;
  }
  namespace text {
    class BreakIterator;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class BreakIterator : public ::java::lang::Object {
     public:
      enum {
        mid_clone_d6bcd06f3102c4d9,
        mid_current_9972fcc56b44e79d,
        mid_first_9972fcc56b44e79d,
        mid_following_1e143afe1894d213,
        mid_getAvailableLocales_9de0c9f607235a40,
        mid_getCharacterInstance_f15a5abf5d7f4951,
        mid_getCharacterInstance_7c1a8f0d37bbd4c0,
        mid_getLineInstance_f15a5abf5d7f4951,
        mid_getLineInstance_7c1a8f0d37bbd4c0,
        mid_getSentenceInstance_f15a5abf5d7f4951,
        mid_getSentenceInstance_7c1a8f0d37bbd4c0,
        mid_getWordInstance_f15a5abf5d7f4951,
        mid_getWordInstance_7c1a8f0d37bbd4c0,
        mid_isBoundary_a1d30e1ee40c89a2,
        mid_last_9972fcc56b44e79d,
        mid_next_9972fcc56b44e79d,
        mid_next_1e143afe1894d213,
        mid_preceding_1e143afe1894d213,
        mid_previous_9972fcc56b44e79d,
        mid_setText_9fd2eb66a64e6f0f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BreakIterator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BreakIterator(const BreakIterator& obj) : ::java::lang::Object(obj) {}

      static jint DONE;

      ::java::lang::Object clone() const;
      jint current() const;
      jint first() const;
      jint following(jint) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      static BreakIterator getCharacterInstance();
      static BreakIterator getCharacterInstance(const ::java::util::Locale &);
      static BreakIterator getLineInstance();
      static BreakIterator getLineInstance(const ::java::util::Locale &);
      static BreakIterator getSentenceInstance();
      static BreakIterator getSentenceInstance(const ::java::util::Locale &);
      static BreakIterator getWordInstance();
      static BreakIterator getWordInstance(const ::java::util::Locale &);
      jboolean isBoundary(jint) const;
      jint last() const;
      jint next() const;
      jint next(jint) const;
      jint preceding(jint) const;
      jint previous() const;
      void setText(const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(BreakIterator);
    extern PyTypeObject *PY_TYPE(BreakIterator);

    class t_BreakIterator {
    public:
      PyObject_HEAD
      BreakIterator object;
      static PyObject *wrap_Object(const BreakIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
