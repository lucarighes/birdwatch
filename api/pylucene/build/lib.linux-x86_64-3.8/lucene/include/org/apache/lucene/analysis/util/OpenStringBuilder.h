#ifndef org_apache_lucene_analysis_util_OpenStringBuilder_H
#define org_apache_lucene_analysis_util_OpenStringBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Appendable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class OpenStringBuilder;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class OpenStringBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_040c4cd0390c5aff,
              mid_init$_d7b537fea0247190,
              mid_append_eba659ea75d7ed5a,
              mid_append_aaf0e49ea847d591,
              mid_append_b7e44439517a620d,
              mid_capacity_9972fcc56b44e79d,
              mid_charAt_ebc61ec1e57770d1,
              mid_flush_f2cc1bce94666404,
              mid_getArray_e11cf13c9a887534,
              mid_length_9972fcc56b44e79d,
              mid_reserve_040c4cd0390c5aff,
              mid_reset_f2cc1bce94666404,
              mid_set_d7b537fea0247190,
              mid_setCharAt_49eec491b83160ef,
              mid_setLength_040c4cd0390c5aff,
              mid_size_9972fcc56b44e79d,
              mid_subSequence_26d6f5be97bcdc38,
              mid_toCharArray_e11cf13c9a887534,
              mid_toString_db9b55ba01e03e4b,
              mid_unsafeWrite_b227b2c08d18d29e,
              mid_unsafeWrite_040c4cd0390c5aff,
              mid_unsafeWrite_d5128be76a214037,
              mid_write_82dffe1ba55ed767,
              mid_write_9fd2eb66a64e6f0f,
              mid_write_3dcbae012727a44f,
              mid_write_b227b2c08d18d29e,
              mid_write_040c4cd0390c5aff,
              mid_write_d5128be76a214037,
              mid_resize_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OpenStringBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OpenStringBuilder(const OpenStringBuilder& obj) : ::java::lang::Object(obj) {}

            OpenStringBuilder();
            OpenStringBuilder(jint);
            OpenStringBuilder(const JArray< jchar > &, jint);

            ::java::lang::Appendable append(jchar) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &) const;
            ::java::lang::Appendable append(const ::java::lang::CharSequence &, jint, jint) const;
            jint capacity() const;
            jchar charAt(jint) const;
            void flush() const;
            JArray< jchar > getArray() const;
            jint length() const;
            void reserve(jint) const;
            void reset() const;
            void set(const JArray< jchar > &, jint) const;
            void setCharAt(jint, jchar) const;
            void setLength(jint) const;
            jint size() const;
            ::java::lang::CharSequence subSequence(jint, jint) const;
            JArray< jchar > toCharArray() const;
            ::java::lang::String toString() const;
            void unsafeWrite(jchar) const;
            void unsafeWrite(jint) const;
            void unsafeWrite(const JArray< jchar > &, jint, jint) const;
            void write(const JArray< jchar > &) const;
            void write(const ::java::lang::String &) const;
            void write(const OpenStringBuilder &) const;
            void write(jchar) const;
            void write(jint) const;
            void write(const JArray< jchar > &, jint, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(OpenStringBuilder);
          extern PyTypeObject *PY_TYPE(OpenStringBuilder);

          class t_OpenStringBuilder {
          public:
            PyObject_HEAD
            OpenStringBuilder object;
            static PyObject *wrap_Object(const OpenStringBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
