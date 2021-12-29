#ifndef java_lang_String_H
#define java_lang_String_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    class Locale;
  }
  namespace lang {
    class Comparable;
    class Class;
    class Iterable;
    class String;
    class CharSequence;
    class StringBuilder;
    class StringBuffer;
  }
  namespace io {
    class UnsupportedEncodingException;
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class String : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_73d03497e1253f84,
        mid_init$_90aa63c10985f260,
        mid_init$_9ffdf271836656c4,
        mid_init$_82dffe1ba55ed767,
        mid_init$_1d4be63d325e4000,
        mid_init$_2a8b02a5adcbf830,
        mid_init$_43fdd39c09bb2fad,
        mid_init$_d5128be76a214037,
        mid_init$_11b52125bd016996,
        mid_init$_730e4cb49ed5c948,
        mid_init$_446ec7a446604ee5,
        mid_charAt_ebc61ec1e57770d1,
        mid_codePointAt_1e143afe1894d213,
        mid_codePointBefore_1e143afe1894d213,
        mid_codePointCount_57a58545eba514db,
        mid_compareTo_a5a7d1128e9e2bb7,
        mid_compareToIgnoreCase_a5a7d1128e9e2bb7,
        mid_concat_9bfa75c9f141b67f,
        mid_contains_2cd6b83cb18fe093,
        mid_contentEquals_ef97e45e583aa4af,
        mid_contentEquals_2cd6b83cb18fe093,
        mid_copyValueOf_4082f27b3cc7d145,
        mid_copyValueOf_6b3a5ce786df0548,
        mid_endsWith_145b2d0af0c06b93,
        mid_equals_8b72f2dcdde6fd1d,
        mid_equalsIgnoreCase_145b2d0af0c06b93,
        mid_format_8fd1aa183c04cdf5,
        mid_format_9a87db196ad423fc,
        mid_getBytes_cf386cdb1bbd339f,
        mid_getBytes_36cc1b2b800ddc03,
        mid_getBytes_ae4e663cfbcfb07a,
        mid_getChars_520fb522c03f2e69,
        mid_hashCode_9972fcc56b44e79d,
        mid_indexOf_a5a7d1128e9e2bb7,
        mid_indexOf_1e143afe1894d213,
        mid_indexOf_30cd5d5b9318bd5d,
        mid_indexOf_57a58545eba514db,
        mid_intern_db9b55ba01e03e4b,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_join_0e086e6fece48086,
        mid_join_9a837158c1ddc583,
        mid_lastIndexOf_a5a7d1128e9e2bb7,
        mid_lastIndexOf_1e143afe1894d213,
        mid_lastIndexOf_30cd5d5b9318bd5d,
        mid_lastIndexOf_57a58545eba514db,
        mid_length_9972fcc56b44e79d,
        mid_matches_145b2d0af0c06b93,
        mid_offsetByCodePoints_57a58545eba514db,
        mid_regionMatches_756680c988d43b84,
        mid_regionMatches_4d0019bde6416ba2,
        mid_replace_00f27d05f236ffc6,
        mid_replace_d281ed8abce24432,
        mid_replaceAll_04b762e0ad33dcc5,
        mid_replaceFirst_04b762e0ad33dcc5,
        mid_split_1606e23a23a4a8e5,
        mid_split_5ba731fecfe18cb8,
        mid_startsWith_145b2d0af0c06b93,
        mid_startsWith_828dfe4df2792df0,
        mid_subSequence_26d6f5be97bcdc38,
        mid_substring_d7593acad64ef635,
        mid_substring_1f239231430be983,
        mid_toCharArray_e11cf13c9a887534,
        mid_toLowerCase_db9b55ba01e03e4b,
        mid_toLowerCase_8cbdae2bb55ad99c,
        mid_toString_db9b55ba01e03e4b,
        mid_toUpperCase_db9b55ba01e03e4b,
        mid_toUpperCase_8cbdae2bb55ad99c,
        mid_trim_db9b55ba01e03e4b,
        mid_valueOf_4082f27b3cc7d145,
        mid_valueOf_46a3600c464a391e,
        mid_valueOf_4bb5e6191c541c0d,
        mid_valueOf_f4d984402e3bd258,
        mid_valueOf_64158b2ec62ced09,
        mid_valueOf_d7593acad64ef635,
        mid_valueOf_8f886c83a83356f0,
        mid_valueOf_55e776ffac018431,
        mid_valueOf_6b3a5ce786df0548,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit String(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      String(const String& obj) : ::java::lang::Object(obj) {}

      static ::java::util::Comparator *CASE_INSENSITIVE_ORDER;

      String();
      String(const ::java::lang::StringBuffer &);
      String(const ::java::lang::StringBuilder &);
      String(const JArray< jbyte > &);
      String(const JArray< jchar > &);
      String(const JArray< jbyte > &, const String &);
      String(const JArray< jbyte > &, jint);
      String(const JArray< jbyte > &, jint, jint);
      String(const JArray< jchar > &, jint, jint);
      String(const JArray< jint > &, jint, jint);
      String(const JArray< jbyte > &, jint, jint, const String &);
      String(const JArray< jbyte > &, jint, jint, jint);

      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      jint compareTo(const String &) const;
      jint compareToIgnoreCase(const String &) const;
      String concat(const String &) const;
      jboolean contains(const ::java::lang::CharSequence &) const;
      jboolean contentEquals(const ::java::lang::StringBuffer &) const;
      jboolean contentEquals(const ::java::lang::CharSequence &) const;
      static String copyValueOf(const JArray< jchar > &);
      static String copyValueOf(const JArray< jchar > &, jint, jint);
      jboolean endsWith(const String &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equalsIgnoreCase(const String &) const;
      static String format(const String &, const JArray< ::java::lang::Object > &);
      static String format(const ::java::util::Locale &, const String &, const JArray< ::java::lang::Object > &);
      JArray< jbyte > getBytes() const;
      JArray< jbyte > getBytes(const String &) const;
      void getBytes(jint, jint, const JArray< jbyte > &, jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint hashCode() const;
      jint indexOf(const String &) const;
      jint indexOf(jint) const;
      jint indexOf(const String &, jint) const;
      jint indexOf(jint, jint) const;
      String intern() const;
      jboolean isEmpty() const;
      static String join(const ::java::lang::CharSequence &, const JArray< ::java::lang::CharSequence > &);
      static String join(const ::java::lang::CharSequence &, const ::java::lang::Iterable &);
      jint lastIndexOf(const String &) const;
      jint lastIndexOf(jint) const;
      jint lastIndexOf(const String &, jint) const;
      jint lastIndexOf(jint, jint) const;
      jint length() const;
      jboolean matches(const String &) const;
      jint offsetByCodePoints(jint, jint) const;
      jboolean regionMatches(jint, const String &, jint, jint) const;
      jboolean regionMatches(jboolean, jint, const String &, jint, jint) const;
      String replace(jchar, jchar) const;
      String replace(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
      String replaceAll(const String &, const String &) const;
      String replaceFirst(const String &, const String &) const;
      JArray< String > split(const String &) const;
      JArray< String > split(const String &, jint) const;
      jboolean startsWith(const String &) const;
      jboolean startsWith(const String &, jint) const;
      ::java::lang::CharSequence subSequence(jint, jint) const;
      String substring(jint) const;
      String substring(jint, jint) const;
      JArray< jchar > toCharArray() const;
      String toLowerCase() const;
      String toLowerCase(const ::java::util::Locale &) const;
      String toString() const;
      String toUpperCase() const;
      String toUpperCase(const ::java::util::Locale &) const;
      String trim() const;
      static String valueOf(const JArray< jchar > &);
      static String valueOf(jboolean);
      static String valueOf(jchar);
      static String valueOf(jdouble);
      static String valueOf(jfloat);
      static String valueOf(jint);
      static String valueOf(const ::java::lang::Object &);
      static String valueOf(jlong);
      static String valueOf(const JArray< jchar > &, jint, jint);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(String);
    extern PyTypeObject *PY_TYPE(String);

    class t_String {
    public:
      PyObject_HEAD
      String object;
      static PyObject *wrap_Object(const String&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
