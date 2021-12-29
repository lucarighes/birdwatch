#ifndef org_apache_lucene_util_BytesRef_H
#define org_apache_lucene_util_BytesRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Comparable;
    class Class;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_9ffdf271836656c4,
            mid_init$_040c4cd0390c5aff,
            mid_init$_4b7f5e38f806ae55,
            mid_init$_43fdd39c09bb2fad,
            mid_bytesEquals_553d972fe19daaec,
            mid_clone_7af2ea2e37ce82b8,
            mid_compareTo_1c2e5fa34f4312de,
            mid_deepCopyOf_858d77d551759ace,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_isValid_8454bd5aa23fd11e,
            mid_toString_db9b55ba01e03e4b,
            mid_utf8ToString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_bytes,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRef(const BytesRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jbyte > *EMPTY_BYTES;

          JArray< jbyte > _get_bytes() const;
          void _set_bytes(const JArray< jbyte > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          BytesRef();
          BytesRef(const JArray< jbyte > &);
          BytesRef(jint);
          BytesRef(const ::java::lang::CharSequence &);
          BytesRef(const JArray< jbyte > &, jint, jint);

          jboolean bytesEquals(const BytesRef &) const;
          BytesRef clone() const;
          jint compareTo(const BytesRef &) const;
          static BytesRef deepCopyOf(const BytesRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean isValid() const;
          ::java::lang::String toString() const;
          ::java::lang::String utf8ToString() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRef);
        extern PyTypeObject *PY_TYPE(BytesRef);

        class t_BytesRef {
        public:
          PyObject_HEAD
          BytesRef object;
          static PyObject *wrap_Object(const BytesRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
