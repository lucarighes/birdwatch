#ifndef java_util_BitSet_H
#define java_util_BitSet_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
  namespace util {
    class BitSet;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class BitSet : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_040c4cd0390c5aff,
        mid_and_1b283dd3feee6fc8,
        mid_andNot_1b283dd3feee6fc8,
        mid_cardinality_9972fcc56b44e79d,
        mid_clear_f2cc1bce94666404,
        mid_clear_040c4cd0390c5aff,
        mid_clear_438c62480c481c65,
        mid_clone_d6bcd06f3102c4d9,
        mid_equals_8b72f2dcdde6fd1d,
        mid_flip_040c4cd0390c5aff,
        mid_flip_438c62480c481c65,
        mid_get_a1d30e1ee40c89a2,
        mid_get_0253fedf405395f2,
        mid_hashCode_9972fcc56b44e79d,
        mid_intersects_a14d5086e1a1d966,
        mid_isEmpty_8454bd5aa23fd11e,
        mid_length_9972fcc56b44e79d,
        mid_nextClearBit_1e143afe1894d213,
        mid_nextSetBit_1e143afe1894d213,
        mid_or_1b283dd3feee6fc8,
        mid_previousClearBit_1e143afe1894d213,
        mid_previousSetBit_1e143afe1894d213,
        mid_set_040c4cd0390c5aff,
        mid_set_b8f283cdbda5c964,
        mid_set_438c62480c481c65,
        mid_set_647417ee2dda92ca,
        mid_size_9972fcc56b44e79d,
        mid_toByteArray_cf386cdb1bbd339f,
        mid_toLongArray_d09b715a1c5ddffd,
        mid_toString_db9b55ba01e03e4b,
        mid_valueOf_adc7f533af06db5d,
        mid_valueOf_d8ae6001e51610ac,
        mid_xor_1b283dd3feee6fc8,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BitSet(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BitSet(const BitSet& obj) : ::java::lang::Object(obj) {}

      BitSet();
      BitSet(jint);

      void and$(const BitSet &) const;
      void andNot(const BitSet &) const;
      jint cardinality() const;
      void clear() const;
      void clear(jint) const;
      void clear(jint, jint) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      void flip(jint) const;
      void flip(jint, jint) const;
      jboolean get(jint) const;
      BitSet get(jint, jint) const;
      jint hashCode() const;
      jboolean intersects(const BitSet &) const;
      jboolean isEmpty() const;
      jint length() const;
      jint nextClearBit(jint) const;
      jint nextSetBit(jint) const;
      void or$(const BitSet &) const;
      jint previousClearBit(jint) const;
      jint previousSetBit(jint) const;
      void set(jint) const;
      void set(jint, jboolean) const;
      void set(jint, jint) const;
      void set(jint, jint, jboolean) const;
      jint size() const;
      JArray< jbyte > toByteArray() const;
      JArray< jlong > toLongArray() const;
      ::java::lang::String toString() const;
      static BitSet valueOf(const JArray< jbyte > &);
      static BitSet valueOf(const JArray< jlong > &);
      void xor$(const BitSet &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(BitSet);
    extern PyTypeObject *PY_TYPE(BitSet);

    class t_BitSet {
    public:
      PyObject_HEAD
      BitSet object;
      static PyObject *wrap_Object(const BitSet&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
