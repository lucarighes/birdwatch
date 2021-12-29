#ifndef java_util_regex_Matcher_H
#define java_util_regex_Matcher_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace regex {
      class Matcher;
      class MatchResult;
      class Pattern;
    }
  }
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class StringBuffer;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class Matcher : public ::java::lang::Object {
       public:
        enum {
          mid_appendReplacement_4a6a8eee68ae3f14,
          mid_appendTail_9e0b91680059c0b9,
          mid_end_9972fcc56b44e79d,
          mid_end_a5a7d1128e9e2bb7,
          mid_end_1e143afe1894d213,
          mid_find_8454bd5aa23fd11e,
          mid_find_a1d30e1ee40c89a2,
          mid_group_db9b55ba01e03e4b,
          mid_group_9bfa75c9f141b67f,
          mid_group_d7593acad64ef635,
          mid_groupCount_9972fcc56b44e79d,
          mid_hasAnchoringBounds_8454bd5aa23fd11e,
          mid_hasTransparentBounds_8454bd5aa23fd11e,
          mid_hitEnd_8454bd5aa23fd11e,
          mid_lookingAt_8454bd5aa23fd11e,
          mid_matches_8454bd5aa23fd11e,
          mid_pattern_8b5e65d345ff91eb,
          mid_quoteReplacement_9bfa75c9f141b67f,
          mid_region_e5696c255f1f4bab,
          mid_regionEnd_9972fcc56b44e79d,
          mid_regionStart_9972fcc56b44e79d,
          mid_replaceAll_9bfa75c9f141b67f,
          mid_replaceFirst_9bfa75c9f141b67f,
          mid_requireEnd_8454bd5aa23fd11e,
          mid_reset_6799eb40a862b2af,
          mid_reset_bf97a5101a89a457,
          mid_start_9972fcc56b44e79d,
          mid_start_a5a7d1128e9e2bb7,
          mid_start_1e143afe1894d213,
          mid_toMatchResult_ffa6e5ff23a41621,
          mid_toString_db9b55ba01e03e4b,
          mid_useAnchoringBounds_d16614ca53fd6060,
          mid_usePattern_1e9850baaeefa70f,
          mid_useTransparentBounds_d16614ca53fd6060,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Matcher(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Matcher(const Matcher& obj) : ::java::lang::Object(obj) {}

        Matcher appendReplacement(const ::java::lang::StringBuffer &, const ::java::lang::String &) const;
        ::java::lang::StringBuffer appendTail(const ::java::lang::StringBuffer &) const;
        jint end() const;
        jint end(const ::java::lang::String &) const;
        jint end(jint) const;
        jboolean find() const;
        jboolean find(jint) const;
        ::java::lang::String group() const;
        ::java::lang::String group(const ::java::lang::String &) const;
        ::java::lang::String group(jint) const;
        jint groupCount() const;
        jboolean hasAnchoringBounds() const;
        jboolean hasTransparentBounds() const;
        jboolean hitEnd() const;
        jboolean lookingAt() const;
        jboolean matches() const;
        ::java::util::regex::Pattern pattern() const;
        static ::java::lang::String quoteReplacement(const ::java::lang::String &);
        Matcher region(jint, jint) const;
        jint regionEnd() const;
        jint regionStart() const;
        ::java::lang::String replaceAll(const ::java::lang::String &) const;
        ::java::lang::String replaceFirst(const ::java::lang::String &) const;
        jboolean requireEnd() const;
        Matcher reset() const;
        Matcher reset(const ::java::lang::CharSequence &) const;
        jint start() const;
        jint start(const ::java::lang::String &) const;
        jint start(jint) const;
        ::java::util::regex::MatchResult toMatchResult() const;
        ::java::lang::String toString() const;
        Matcher useAnchoringBounds(jboolean) const;
        Matcher usePattern(const ::java::util::regex::Pattern &) const;
        Matcher useTransparentBounds(jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyType_Def PY_TYPE_DEF(Matcher);
      extern PyTypeObject *PY_TYPE(Matcher);

      class t_Matcher {
      public:
        PyObject_HEAD
        Matcher object;
        static PyObject *wrap_Object(const Matcher&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
