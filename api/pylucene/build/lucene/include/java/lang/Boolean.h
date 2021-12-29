#ifndef java_lang_Boolean_H
#define java_lang_Boolean_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class Boolean;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Boolean : public ::java::lang::Object {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_9d72768e8fdce2b7,
        mid_booleanValue_8454bd5aa23fd11e,
        mid_compare_09b6794702e18123,
        mid_compareTo_aa49eaca6154a5ac,
        mid_equals_8b72f2dcdde6fd1d,
        mid_getBoolean_145b2d0af0c06b93,
        mid_hashCode_9972fcc56b44e79d,
        mid_hashCode_07672f3f11b6ddc5,
        mid_logicalAnd_266e12b9cc3795ac,
        mid_logicalOr_266e12b9cc3795ac,
        mid_logicalXor_266e12b9cc3795ac,
        mid_parseBoolean_145b2d0af0c06b93,
        mid_toString_db9b55ba01e03e4b,
        mid_toString_46a3600c464a391e,
        mid_valueOf_885d9bf6654676d5,
        mid_valueOf_7b0eea15bb246228,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Boolean(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Boolean(const Boolean& obj) : ::java::lang::Object(obj) {}

      static Boolean *FALSE;
      static Boolean *TRUE;
      static ::java::lang::Class *TYPE;

      Boolean(const ::java::lang::String &);
      Boolean(jboolean);

      jboolean booleanValue() const;
      static jint compare(jboolean, jboolean);
      jint compareTo(const Boolean &) const;
      jboolean equals(const ::java::lang::Object &) const;
      static jboolean getBoolean(const ::java::lang::String &);
      jint hashCode() const;
      static jint hashCode(jboolean);
      static jboolean logicalAnd(jboolean, jboolean);
      static jboolean logicalOr(jboolean, jboolean);
      static jboolean logicalXor(jboolean, jboolean);
      static jboolean parseBoolean(const ::java::lang::String &);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jboolean);
      static Boolean valueOf(const ::java::lang::String &);
      static Boolean valueOf(jboolean);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Boolean);
    extern PyTypeObject *PY_TYPE(Boolean);

    class t_Boolean {
    public:
      PyObject_HEAD
      Boolean object;
      static PyObject *wrap_Object(const Boolean&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
