#ifndef org_apache_lucene_util_BytesRefBuilder_H
#define org_apache_lucene_util_BytesRefBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefBuilder;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_append_0bdfd2603b7490a8,
            mid_append_ac389a6379111d18,
            mid_append_9c36fec3bac1d0c7,
            mid_append_43fdd39c09bb2fad,
            mid_byteAt_4d5233a30cda5878,
            mid_bytes_cf386cdb1bbd339f,
            mid_clear_f2cc1bce94666404,
            mid_copyBytes_0bdfd2603b7490a8,
            mid_copyBytes_ac389a6379111d18,
            mid_copyBytes_43fdd39c09bb2fad,
            mid_copyChars_4b7f5e38f806ae55,
            mid_copyChars_d5128be76a214037,
            mid_copyChars_1a9fff4dae4e12f0,
            mid_equals_8b72f2dcdde6fd1d,
            mid_get_7af2ea2e37ce82b8,
            mid_grow_040c4cd0390c5aff,
            mid_hashCode_9972fcc56b44e79d,
            mid_length_9972fcc56b44e79d,
            mid_setByteAt_8344e5e168439156,
            mid_setLength_040c4cd0390c5aff,
            mid_toBytesRef_7af2ea2e37ce82b8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefBuilder(const BytesRefBuilder& obj) : ::java::lang::Object(obj) {}

          BytesRefBuilder();

          void append(const ::org::apache::lucene::util::BytesRef &) const;
          void append(const BytesRefBuilder &) const;
          void append(jbyte) const;
          void append(const JArray< jbyte > &, jint, jint) const;
          jbyte byteAt(jint) const;
          JArray< jbyte > bytes() const;
          void clear() const;
          void copyBytes(const ::org::apache::lucene::util::BytesRef &) const;
          void copyBytes(const BytesRefBuilder &) const;
          void copyBytes(const JArray< jbyte > &, jint, jint) const;
          void copyChars(const ::java::lang::CharSequence &) const;
          void copyChars(const JArray< jchar > &, jint, jint) const;
          void copyChars(const ::java::lang::CharSequence &, jint, jint) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::BytesRef get() const;
          void grow(jint) const;
          jint hashCode() const;
          jint length() const;
          void setByteAt(jint, jbyte) const;
          void setLength(jint) const;
          ::org::apache::lucene::util::BytesRef toBytesRef() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefBuilder);
        extern PyTypeObject *PY_TYPE(BytesRefBuilder);

        class t_BytesRefBuilder {
        public:
          PyObject_HEAD
          BytesRefBuilder object;
          static PyObject *wrap_Object(const BytesRefBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
