#ifndef java_util_regex_Pattern_H
#define java_util_regex_Pattern_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace regex {
      class Matcher;
      class Pattern;
    }
    namespace function {
      class Predicate;
    }
  }
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Pattern : public ::java::lang::Object {
       public:
        enum {
          mid_asPredicate_9642992f11d82349,
          mid_compile_1635949e7c233ac0,
          mid_compile_ef7e77280009aac6,
          mid_flags_9972fcc56b44e79d,
          mid_matcher_bf97a5101a89a457,
          mid_matches_2d2df9ffe19acb0c,
          mid_pattern_db9b55ba01e03e4b,
          mid_quote_9bfa75c9f141b67f,
          mid_split_09e1e00b2b3d0b65,
          mid_split_a860d8e62f08db0d,
          mid_toString_db9b55ba01e03e4b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Pattern(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Pattern(const Pattern& obj) : ::java::lang::Object(obj) {}

        static jint CANON_EQ;
        static jint CASE_INSENSITIVE;
        static jint COMMENTS;
        static jint DOTALL;
        static jint LITERAL;
        static jint MULTILINE;
        static jint UNICODE_CASE;
        static jint UNICODE_CHARACTER_CLASS;
        static jint UNIX_LINES;

        ::java::util::function::Predicate asPredicate() const;
        static Pattern compile(const ::java::lang::String &);
        static Pattern compile(const ::java::lang::String &, jint);
        jint flags() const;
        ::java::util::regex::Matcher matcher(const ::java::lang::CharSequence &) const;
        static jboolean matches(const ::java::lang::String &, const ::java::lang::CharSequence &);
        ::java::lang::String pattern() const;
        static ::java::lang::String quote(const ::java::lang::String &);
        JArray< ::java::lang::String > split(const ::java::lang::CharSequence &) const;
        JArray< ::java::lang::String > split(const ::java::lang::CharSequence &, jint) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyType_Def PY_TYPE_DEF(Pattern);
      extern PyTypeObject *PY_TYPE(Pattern);

      class t_Pattern {
      public:
        PyObject_HEAD
        Pattern object;
        static PyObject *wrap_Object(const Pattern&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
