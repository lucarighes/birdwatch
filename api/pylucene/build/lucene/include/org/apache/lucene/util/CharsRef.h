#ifndef org_apache_lucene_util_CharsRef_H
#define org_apache_lucene_util_CharsRef_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
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
        class CharsRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CharsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_9fd2eb66a64e6f0f,
            mid_init$_040c4cd0390c5aff,
            mid_init$_d5128be76a214037,
            mid_charAt_ebc61ec1e57770d1,
            mid_charsEquals_32b38c27586805a6,
            mid_clone_2361d75e15cf20de,
            mid_compareTo_3d179161e74bf316,
            mid_deepCopyOf_8bc3c1aa34587137,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getUTF16SortedAsUTF8Comparator_beb0414e0ec1de00,
            mid_hashCode_9972fcc56b44e79d,
            mid_isValid_8454bd5aa23fd11e,
            mid_length_9972fcc56b44e79d,
            mid_stringHashCode_644fc0bf0aa7fb26,
            mid_subSequence_26d6f5be97bcdc38,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_chars,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharsRef(const CharsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jchar > *EMPTY_CHARS;

          JArray< jchar > _get_chars() const;
          void _set_chars(const JArray< jchar > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          CharsRef();
          CharsRef(const ::java::lang::String &);
          CharsRef(jint);
          CharsRef(const JArray< jchar > &, jint, jint);

          jchar charAt(jint) const;
          jboolean charsEquals(const CharsRef &) const;
          CharsRef clone() const;
          jint compareTo(const CharsRef &) const;
          static CharsRef deepCopyOf(const CharsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          static ::java::util::Comparator getUTF16SortedAsUTF8Comparator();
          jint hashCode() const;
          jboolean isValid() const;
          jint length() const;
          static jint stringHashCode(const JArray< jchar > &, jint, jint);
          ::java::lang::CharSequence subSequence(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(CharsRef);
        extern PyTypeObject *PY_TYPE(CharsRef);

        class t_CharsRef {
        public:
          PyObject_HEAD
          CharsRef object;
          static PyObject *wrap_Object(const CharsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
