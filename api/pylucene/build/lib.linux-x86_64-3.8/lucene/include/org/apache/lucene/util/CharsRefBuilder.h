#ifndef org_apache_lucene_util_CharsRefBuilder_H
#define org_apache_lucene_util_CharsRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRefBuilder;
        class CharsRef;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Appendable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CharsRefBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_append_b1f0ec27c1b422ee,
            mid_append_549cf66196cb2cc4,
            mid_append_d5128be76a214037,
            mid_append_df6a4f432c26a02d,
            mid_charAt_ebc61ec1e57770d1,
            mid_chars_e11cf13c9a887534,
            mid_clear_f2cc1bce94666404,
            mid_copyChars_099159949b7e02ee,
            mid_copyChars_d5128be76a214037,
            mid_copyUTF8Bytes_0bdfd2603b7490a8,
            mid_copyUTF8Bytes_43fdd39c09bb2fad,
            mid_equals_8b72f2dcdde6fd1d,
            mid_get_2361d75e15cf20de,
            mid_grow_040c4cd0390c5aff,
            mid_hashCode_9972fcc56b44e79d,
            mid_length_9972fcc56b44e79d,
            mid_setCharAt_49eec491b83160ef,
            mid_setLength_040c4cd0390c5aff,
            mid_toCharsRef_2361d75e15cf20de,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharsRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharsRefBuilder(const CharsRefBuilder& obj) : ::java::lang::Object(obj) {}

          CharsRefBuilder();

          CharsRefBuilder append(jchar) const;
          CharsRefBuilder append(const ::java::lang::CharSequence &) const;
          void append(const JArray< jchar > &, jint, jint) const;
          CharsRefBuilder append(const ::java::lang::CharSequence &, jint, jint) const;
          jchar charAt(jint) const;
          JArray< jchar > chars() const;
          void clear() const;
          void copyChars(const ::org::apache::lucene::util::CharsRef &) const;
          void copyChars(const JArray< jchar > &, jint, jint) const;
          void copyUTF8Bytes(const ::org::apache::lucene::util::BytesRef &) const;
          void copyUTF8Bytes(const JArray< jbyte > &, jint, jint) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::CharsRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint length() const;
          void setCharAt(jint, jchar) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::CharsRef toCharsRef() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(CharsRefBuilder);
        extern PyTypeObject *PY_TYPE(CharsRefBuilder);

        class t_CharsRefBuilder {
        public:
          PyObject_HEAD
          CharsRefBuilder object;
          static PyObject *wrap_Object(const CharsRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
