#ifndef java_lang_StringBuilder_H
#define java_lang_StringBuilder_H

#include "java/lang/AbstractStringBuilder.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
    class CharSequence;
    class StringBuilder;
    class StringBuffer;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class StringBuilder : public ::java::lang::AbstractStringBuilder {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_040c4cd0390c5aff,
        mid_init$_4b7f5e38f806ae55,
        mid_append_9983cc2585c04557,
        mid_append_7070a1d54451f771,
        mid_append_b0d900f8619721d9,
        mid_append_c169a6d0633d0e08,
        mid_append_00e7353da71b80e6,
        mid_append_4e3f3e17cfec4ae4,
        mid_append_59909dbeecefe1f2,
        mid_append_d644ee3e2d4b7a32,
        mid_append_3ff255c2dd86108c,
        mid_append_b2d729c0321e2c8c,
        mid_append_5f30b553a0a522c5,
        mid_append_c22bec30087d1e8e,
        mid_append_594221b1eb8cb973,
        mid_appendCodePoint_d644ee3e2d4b7a32,
        mid_delete_1ca249816e4537c2,
        mid_deleteCharAt_d644ee3e2d4b7a32,
        mid_indexOf_a5a7d1128e9e2bb7,
        mid_indexOf_30cd5d5b9318bd5d,
        mid_insert_715f770a66ead7b5,
        mid_insert_81be2976fdd3570e,
        mid_insert_a1457f7540fdd256,
        mid_insert_8887659d67622e58,
        mid_insert_f420a279d8db66df,
        mid_insert_d13831895949aaf9,
        mid_insert_1ca249816e4537c2,
        mid_insert_bae7f98d33b24748,
        mid_insert_c6033db6ec314fa3,
        mid_insert_d865087e672c8091,
        mid_insert_89ffcbda4fb158b4,
        mid_insert_392aaf29a745d1b8,
        mid_lastIndexOf_a5a7d1128e9e2bb7,
        mid_lastIndexOf_30cd5d5b9318bd5d,
        mid_replace_590c15104a3b5a8d,
        mid_reverse_ffb326b9d303f5a4,
        mid_toString_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit StringBuilder(jobject obj) : ::java::lang::AbstractStringBuilder(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringBuilder(const StringBuilder& obj) : ::java::lang::AbstractStringBuilder(obj) {}

      StringBuilder();
      StringBuilder(const ::java::lang::String &);
      StringBuilder(jint);
      StringBuilder(const ::java::lang::CharSequence &);

      StringBuilder append(const ::java::lang::StringBuffer &) const;
      StringBuilder append(const JArray< jchar > &) const;
      StringBuilder append(const ::java::lang::String &) const;
      StringBuilder append(jboolean) const;
      StringBuilder append(jchar) const;
      StringBuilder append(jdouble) const;
      StringBuilder append(jfloat) const;
      StringBuilder append(jint) const;
      StringBuilder append(const ::java::lang::CharSequence &) const;
      StringBuilder append(const ::java::lang::Object &) const;
      StringBuilder append(jlong) const;
      StringBuilder append(const JArray< jchar > &, jint, jint) const;
      StringBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
      StringBuilder appendCodePoint(jint) const;
      StringBuilder delete$(jint, jint) const;
      StringBuilder deleteCharAt(jint) const;
      jint indexOf(const ::java::lang::String &) const;
      jint indexOf(const ::java::lang::String &, jint) const;
      StringBuilder insert(jint, const JArray< jchar > &) const;
      StringBuilder insert(jint, const ::java::lang::String &) const;
      StringBuilder insert(jint, jboolean) const;
      StringBuilder insert(jint, jchar) const;
      StringBuilder insert(jint, jdouble) const;
      StringBuilder insert(jint, jfloat) const;
      StringBuilder insert(jint, jint) const;
      StringBuilder insert(jint, const ::java::lang::CharSequence &) const;
      StringBuilder insert(jint, const ::java::lang::Object &) const;
      StringBuilder insert(jint, jlong) const;
      StringBuilder insert(jint, const JArray< jchar > &, jint, jint) const;
      StringBuilder insert(jint, const ::java::lang::CharSequence &, jint, jint) const;
      jint lastIndexOf(const ::java::lang::String &) const;
      jint lastIndexOf(const ::java::lang::String &, jint) const;
      StringBuilder replace(jint, jint, const ::java::lang::String &) const;
      StringBuilder reverse() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(StringBuilder);
    extern PyTypeObject *PY_TYPE(StringBuilder);

    class t_StringBuilder {
    public:
      PyObject_HEAD
      StringBuilder object;
      static PyObject *wrap_Object(const StringBuilder&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
