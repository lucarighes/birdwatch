#ifndef org_apache_lucene_util_mutable_MutableValue_H
#define org_apache_lucene_util_mutable_MutableValue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          class MutableValue;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {

          class MutableValue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_compareSameType_5a4805a36cf611e7,
              mid_compareTo_eb63153a01b398c3,
              mid_copy_3a4da6d6b1464d7a,
              mid_duplicate_b6a1db04136f7d9b,
              mid_equals_8b72f2dcdde6fd1d,
              mid_equalsSameType_8b72f2dcdde6fd1d,
              mid_exists_8454bd5aa23fd11e,
              mid_hashCode_9972fcc56b44e79d,
              mid_toObject_d6bcd06f3102c4d9,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_exists,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutableValue(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MutableValue(const MutableValue& obj) : ::java::lang::Object(obj) {}

            jboolean _get_exists() const;
            void _set_exists(jboolean) const;

            MutableValue();

            jint compareSameType(const ::java::lang::Object &) const;
            jint compareTo(const MutableValue &) const;
            void copy(const MutableValue &) const;
            MutableValue duplicate() const;
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsSameType(const ::java::lang::Object &) const;
            jboolean exists() const;
            jint hashCode() const;
            ::java::lang::Object toObject() const;
            ::java::lang::String toString() const;
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
      namespace util {
        namespace mutable$ {
          extern PyType_Def PY_TYPE_DEF(MutableValue);
          extern PyTypeObject *PY_TYPE(MutableValue);

          class t_MutableValue {
          public:
            PyObject_HEAD
            MutableValue object;
            static PyObject *wrap_Object(const MutableValue&);
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
