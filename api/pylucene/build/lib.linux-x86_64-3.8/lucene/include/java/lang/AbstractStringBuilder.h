#ifndef java_lang_AbstractStringBuilder_H
#define java_lang_AbstractStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Appendable;
    class StringBuffer;
    class AbstractStringBuilder;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class AbstractStringBuilder : public ::java::lang::Object {
     public:
      enum {
        mid_append_e2002d37cf3da336,
        mid_append_6f8380202126be56,
        mid_append_0675466a49f2c0ba,
        mid_append_6e3f56662365cdf7,
        mid_append_ec61606ad7d3bac3,
        mid_append_44637512db686cff,
        mid_append_6457f1cb386e42c9,
        mid_append_f5d0029a591c2dd0,
        mid_append_6a2e33fb9a81b110,
        mid_append_021e9fd1072a4d34,
        mid_append_fbbe51b2eb6efd3b,
        mid_append_f0a7723684849e55,
        mid_append_f6a857741bd25118,
        mid_appendCodePoint_f5d0029a591c2dd0,
        mid_capacity_9972fcc56b44e79d,
        mid_charAt_ebc61ec1e57770d1,
        mid_codePointAt_1e143afe1894d213,
        mid_codePointBefore_1e143afe1894d213,
        mid_codePointCount_57a58545eba514db,
        mid_delete_619abd4749e7d1c9,
        mid_deleteCharAt_f5d0029a591c2dd0,
        mid_ensureCapacity_040c4cd0390c5aff,
        mid_getChars_520fb522c03f2e69,
        mid_indexOf_a5a7d1128e9e2bb7,
        mid_indexOf_30cd5d5b9318bd5d,
        mid_insert_a13644e76b3351c1,
        mid_insert_0c740f9abe213d5b,
        mid_insert_5c28ccfdda9a420a,
        mid_insert_de293e1da241b6b9,
        mid_insert_536eba38a02c4213,
        mid_insert_c3160c5e13325cd5,
        mid_insert_619abd4749e7d1c9,
        mid_insert_56ffb6828ae50f6b,
        mid_insert_a756dfa08c065913,
        mid_insert_dd56597accae21c9,
        mid_insert_1aea9caca8632d82,
        mid_insert_65279f9670e156e7,
        mid_lastIndexOf_a5a7d1128e9e2bb7,
        mid_lastIndexOf_30cd5d5b9318bd5d,
        mid_length_9972fcc56b44e79d,
        mid_offsetByCodePoints_57a58545eba514db,
        mid_replace_f2e4f17933bb6952,
        mid_reverse_1e013b6f66442917,
        mid_setCharAt_49eec491b83160ef,
        mid_setLength_040c4cd0390c5aff,
        mid_subSequence_26d6f5be97bcdc38,
        mid_substring_d7593acad64ef635,
        mid_substring_1f239231430be983,
        mid_toString_db9b55ba01e03e4b,
        mid_trimToSize_f2cc1bce94666404,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractStringBuilder(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractStringBuilder(const AbstractStringBuilder& obj) : ::java::lang::Object(obj) {}

      AbstractStringBuilder append(const ::java::lang::StringBuffer &) const;
      AbstractStringBuilder append(const JArray< jchar > &) const;
      AbstractStringBuilder append(const ::java::lang::String &) const;
      AbstractStringBuilder append(jboolean) const;
      AbstractStringBuilder append(jchar) const;
      AbstractStringBuilder append(jdouble) const;
      AbstractStringBuilder append(jfloat) const;
      AbstractStringBuilder append(jint) const;
      AbstractStringBuilder append(const ::java::lang::CharSequence &) const;
      AbstractStringBuilder append(const ::java::lang::Object &) const;
      AbstractStringBuilder append(jlong) const;
      AbstractStringBuilder append(const JArray< jchar > &, jint, jint) const;
      AbstractStringBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
      AbstractStringBuilder appendCodePoint(jint) const;
      jint capacity() const;
      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      AbstractStringBuilder delete$(jint, jint) const;
      AbstractStringBuilder deleteCharAt(jint) const;
      void ensureCapacity(jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      AbstractStringBuilder insert(jint, const JArray< jchar > &) const;
      AbstractStringBuilder insert(jint, const ::java::lang::String &) const;
      AbstractStringBuilder insert(jint, jboolean) const;
      AbstractStringBuilder insert(jint, jchar) const;
      AbstractStringBuilder insert(jint, jdouble) const;
      AbstractStringBuilder insert(jint, jfloat) const;
      AbstractStringBuilder insert(jint, jint) const;
      AbstractStringBuilder insert(jint, const ::java::lang::CharSequence &) const;
      AbstractStringBuilder insert(jint, const ::java::lang::Object &) const;
      AbstractStringBuilder insert(jint, jlong) const;
      AbstractStringBuilder insert(jint, const JArray< jchar > &, jint, jint) const;
      AbstractStringBuilder insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      jint length() const;
      jint offsetByCodePoints(jint, jint) const;
      AbstractStringBuilder replace(jint, jint, const ::java::lang::String &) const;
      AbstractStringBuilder reverse() const;
      void setCharAt(jint, jchar) const;
      void setLength(jint) const;
      ::java::lang::CharSequence subSequence(jint, jint) const;
      ::java::lang::String substring(jint) const;
      ::java::lang::String substring(jint, jint) const;
      ::java::lang::String toString() const;
      void trimToSize() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(AbstractStringBuilder);
    extern PyTypeObject *PY_TYPE(AbstractStringBuilder);

    class t_AbstractStringBuilder {
    public:
      PyObject_HEAD
      AbstractStringBuilder object;
      static PyObject *wrap_Object(const AbstractStringBuilder&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
