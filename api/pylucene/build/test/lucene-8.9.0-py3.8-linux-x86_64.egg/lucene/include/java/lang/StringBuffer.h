#ifndef java_lang_StringBuffer_H
#define java_lang_StringBuffer_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
    class CharSequence;
    class StringBuffer;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class StringBuffer : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_040c4cd0390c5aff,
        mid_init$_4b7f5e38f806ae55,
        mid_append_9e0b91680059c0b9,
        mid_append_4c6f9eae8a1f384c,
        mid_append_942dc874baba9ebd,
        mid_append_b657eb3bf0275d66,
        mid_append_2d66b0da0984256e,
        mid_append_6a80930d7502ebdf,
        mid_append_8398576c041c0b0b,
        mid_append_f0aa20a80b52b0f7,
        mid_append_13ac9758380b2a77,
        mid_append_5714890f5187aa6b,
        mid_append_cd9750143a8b5bf3,
        mid_append_ec0a11e2734b6e2f,
        mid_append_289a4a8022da39f2,
        mid_appendCodePoint_f0aa20a80b52b0f7,
        mid_capacity_9972fcc56b44e79d,
        mid_charAt_ebc61ec1e57770d1,
        mid_codePointAt_1e143afe1894d213,
        mid_codePointBefore_1e143afe1894d213,
        mid_codePointCount_57a58545eba514db,
        mid_delete_3c229bf87e15cfa4,
        mid_deleteCharAt_f0aa20a80b52b0f7,
        mid_ensureCapacity_040c4cd0390c5aff,
        mid_getChars_520fb522c03f2e69,
        mid_indexOf_a5a7d1128e9e2bb7,
        mid_indexOf_30cd5d5b9318bd5d,
        mid_insert_5a82a1ef6d57f34e,
        mid_insert_a610ec3896945564,
        mid_insert_4cef785922b98c34,
        mid_insert_9ff128c3d51c9b39,
        mid_insert_3c6fd573987f067e,
        mid_insert_5e754580ddd42ee8,
        mid_insert_3c229bf87e15cfa4,
        mid_insert_5f6ff65bc1d8cb86,
        mid_insert_aea1c04c57b6cb18,
        mid_insert_571ebb07b7d7a83b,
        mid_insert_222564c4fca1841f,
        mid_insert_7d082429df65d0a6,
        mid_lastIndexOf_a5a7d1128e9e2bb7,
        mid_lastIndexOf_30cd5d5b9318bd5d,
        mid_length_9972fcc56b44e79d,
        mid_offsetByCodePoints_57a58545eba514db,
        mid_replace_3f75941503d044be,
        mid_reverse_3e74005fd5116584,
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

      explicit StringBuffer(jobject obj) : ::java::lang::AbstractStringBuilder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringBuffer(const StringBuffer& obj) : ::java::lang::AbstractStringBuilder(obj) {}

      StringBuffer();
      StringBuffer(const ::java::lang::String &);
      StringBuffer(jint);
      StringBuffer(const ::java::lang::CharSequence &);

      StringBuffer append(const StringBuffer &) const;
      StringBuffer append(const JArray< jchar > &) const;
      StringBuffer append(const ::java::lang::String &) const;
      StringBuffer append(jboolean) const;
      StringBuffer append(jchar) const;
      StringBuffer append(jdouble) const;
      StringBuffer append(jfloat) const;
      StringBuffer append(jint) const;
      StringBuffer append(const ::java::lang::CharSequence &) const;
      StringBuffer append(const ::java::lang::Object &) const;
      StringBuffer append(jlong) const;
      StringBuffer append(const JArray< jchar > &, jint, jint) const;
      StringBuffer append(const ::java::lang::CharSequence &, jint, jint) const;
      StringBuffer appendCodePoint(jint) const;
      jint capacity() const;
      jchar charAt(jint) const;
      jint codePointAt(jint) const;
      jint codePointBefore(jint) const;
      jint codePointCount(jint, jint) const;
      StringBuffer delete$(jint, jint) const;
      StringBuffer deleteCharAt(jint) const;
      void ensureCapacity(jint) const;
      void getChars(jint, jint, const JArray< jchar > &, jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      StringBuffer insert(jint, const JArray< jchar > &) const;
      StringBuffer insert(jint, const ::java::lang::String &) const;
      StringBuffer insert(jint, jboolean) const;
      StringBuffer insert(jint, jchar) const;
      StringBuffer insert(jint, jdouble) const;
      StringBuffer insert(jint, jfloat) const;
      StringBuffer insert(jint, jint) const;
      StringBuffer insert(jint, const ::java::lang::CharSequence &) const;
      StringBuffer insert(jint, const ::java::lang::Object &) const;
      StringBuffer insert(jint, jlong) const;
      StringBuffer insert(jint, const JArray< jchar > &, jint, jint) const;
      StringBuffer insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      jint length() const;
      jint offsetByCodePoints(jint, jint) const;
      StringBuffer replace(jint, jint, const ::java::lang::String &) const;
      StringBuffer reverse() const;
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
    extern PyType_Def PY_TYPE_DEF(StringBuffer);
    extern PyTypeObject *PY_TYPE(StringBuffer);

    class t_StringBuffer {
    public:
      PyObject_HEAD
      StringBuffer object;
      static PyObject *wrap_Object(const StringBuffer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
