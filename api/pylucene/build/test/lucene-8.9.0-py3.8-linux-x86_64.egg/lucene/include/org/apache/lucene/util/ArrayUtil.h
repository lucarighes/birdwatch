#ifndef org_apache_lucene_util_ArrayUtil_H
#define org_apache_lucene_util_ArrayUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Comparable;
    class Class;
    class NumberFormatException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ArrayUtil : public ::java::lang::Object {
         public:
          enum {
            mid_copyOfSubArray_33260d5dc8f14bd0,
            mid_copyOfSubArray_ca570db90ff6e0f1,
            mid_copyOfSubArray_6b2f32f5ab793d0c,
            mid_copyOfSubArray_0d04fdadd79a97ce,
            mid_copyOfSubArray_af5b45ff63d82992,
            mid_copyOfSubArray_ba7d14c0962577c6,
            mid_copyOfSubArray_244d7a3a846688e6,
            mid_copyOfSubArray_a5236f77979b84ce,
            mid_grow_92ad2a6ed04dfa49,
            mid_grow_cf0d16a7ba58e41d,
            mid_grow_b3673d134383c986,
            mid_grow_dec572bcc0a8f7b4,
            mid_grow_e2507885bf307d22,
            mid_grow_2842adfd81a29bfa,
            mid_grow_fba1bfef8eeaaaf3,
            mid_grow_478cfa823c780485,
            mid_grow_03b7414ad135d405,
            mid_grow_e3e5bf986725ed31,
            mid_grow_bb41b4b6c049f550,
            mid_grow_5d6e0b423e11726d,
            mid_grow_278093e726fd2826,
            mid_grow_19c42e0f45b1d30d,
            mid_grow_918425fa1c7f2801,
            mid_growExact_478cfa823c780485,
            mid_growExact_03b7414ad135d405,
            mid_growExact_e3e5bf986725ed31,
            mid_growExact_bb41b4b6c049f550,
            mid_growExact_5d6e0b423e11726d,
            mid_growExact_278093e726fd2826,
            mid_growExact_19c42e0f45b1d30d,
            mid_growExact_918425fa1c7f2801,
            mid_hashCode_644fc0bf0aa7fb26,
            mid_introSort_f26a4c17dc350da3,
            mid_introSort_f8e3b3d2a8c9889c,
            mid_introSort_a2389198cde72d32,
            mid_introSort_fe20a22253bec8d0,
            mid_oversize_57a58545eba514db,
            mid_parseInt_644fc0bf0aa7fb26,
            mid_parseInt_16ffb1617e12e391,
            mid_select_9fdd860c82b36657,
            mid_swap_d4d2b2e959e9eb5a,
            mid_timSort_f26a4c17dc350da3,
            mid_timSort_f8e3b3d2a8c9889c,
            mid_timSort_a2389198cde72d32,
            mid_timSort_fe20a22253bec8d0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ArrayUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ArrayUtil(const ArrayUtil& obj) : ::java::lang::Object(obj) {}

          static jint MAX_ARRAY_LENGTH;

          static JArray< jbyte > copyOfSubArray(const JArray< jbyte > &, jint, jint);
          static JArray< jchar > copyOfSubArray(const JArray< jchar > &, jint, jint);
          static JArray< jdouble > copyOfSubArray(const JArray< jdouble > &, jint, jint);
          static JArray< jfloat > copyOfSubArray(const JArray< jfloat > &, jint, jint);
          static JArray< jint > copyOfSubArray(const JArray< jint > &, jint, jint);
          static JArray< jlong > copyOfSubArray(const JArray< jlong > &, jint, jint);
          static JArray< ::java::lang::Object > copyOfSubArray(const JArray< ::java::lang::Object > &, jint, jint);
          static JArray< jshort > copyOfSubArray(const JArray< jshort > &, jint, jint);
          static JArray< jbyte > grow(const JArray< jbyte > &);
          static JArray< jchar > grow(const JArray< jchar > &);
          static JArray< jdouble > grow(const JArray< jdouble > &);
          static JArray< jfloat > grow(const JArray< jfloat > &);
          static JArray< jint > grow(const JArray< jint > &);
          static JArray< jlong > grow(const JArray< jlong > &);
          static JArray< jshort > grow(const JArray< jshort > &);
          static JArray< jbyte > grow(const JArray< jbyte > &, jint);
          static JArray< jchar > grow(const JArray< jchar > &, jint);
          static JArray< jdouble > grow(const JArray< jdouble > &, jint);
          static JArray< jfloat > grow(const JArray< jfloat > &, jint);
          static JArray< jint > grow(const JArray< jint > &, jint);
          static JArray< jlong > grow(const JArray< jlong > &, jint);
          static JArray< ::java::lang::Object > grow(const JArray< ::java::lang::Object > &, jint);
          static JArray< jshort > grow(const JArray< jshort > &, jint);
          static JArray< jbyte > growExact(const JArray< jbyte > &, jint);
          static JArray< jchar > growExact(const JArray< jchar > &, jint);
          static JArray< jdouble > growExact(const JArray< jdouble > &, jint);
          static JArray< jfloat > growExact(const JArray< jfloat > &, jint);
          static JArray< jint > growExact(const JArray< jint > &, jint);
          static JArray< jlong > growExact(const JArray< jlong > &, jint);
          static JArray< ::java::lang::Object > growExact(const JArray< ::java::lang::Object > &, jint);
          static JArray< jshort > growExact(const JArray< jshort > &, jint);
          static jint hashCode(const JArray< jchar > &, jint, jint);
          static void introSort(const JArray< ::java::lang::Comparable > &);
          static void introSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
          static void introSort(const JArray< ::java::lang::Comparable > &, jint, jint);
          static void introSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
          static jint oversize(jint, jint);
          static jint parseInt(const JArray< jchar > &, jint, jint);
          static jint parseInt(const JArray< jchar > &, jint, jint, jint);
          static void select(const JArray< ::java::lang::Object > &, jint, jint, jint, const ::java::util::Comparator &);
          static void swap(const JArray< ::java::lang::Object > &, jint, jint);
          static void timSort(const JArray< ::java::lang::Comparable > &);
          static void timSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
          static void timSort(const JArray< ::java::lang::Comparable > &, jint, jint);
          static void timSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
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
        extern PyType_Def PY_TYPE_DEF(ArrayUtil);
        extern PyTypeObject *PY_TYPE(ArrayUtil);

        class t_ArrayUtil {
        public:
          PyObject_HEAD
          ArrayUtil object;
          static PyObject *wrap_Object(const ArrayUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
