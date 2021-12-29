#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class DoubleBinaryOperator;
      class BinaryOperator;
      class IntToDoubleFunction;
      class IntToLongFunction;
      class LongBinaryOperator;
      class IntFunction;
      class IntUnaryOperator;
      class IntBinaryOperator;
    }
    class Comparator;
    class Spliterator$OfLong;
    class Spliterator$OfInt;
    class Spliterator;
    class List;
    class Spliterator$OfDouble;
  }
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Arrays : public ::java::lang::Object {
     public:
      enum {
        mid_asList_0d1dcd70f7b07e48,
        mid_binarySearch_90d6cd4636c06d5e,
        mid_binarySearch_cdeaee5df7f0bc5f,
        mid_binarySearch_f46c949aba2292ce,
        mid_binarySearch_6f94e91df3885a5f,
        mid_binarySearch_f44f708380c30a86,
        mid_binarySearch_076f94f5b6020264,
        mid_binarySearch_09d3b95d429cf15a,
        mid_binarySearch_1059cfbba5ff4204,
        mid_binarySearch_33a026fae3c703c5,
        mid_binarySearch_0bfe30034b35c12c,
        mid_binarySearch_1ca24311f9e246c6,
        mid_binarySearch_6cf57647131f60b3,
        mid_binarySearch_9f19acf63eea81de,
        mid_binarySearch_9d7610067d360ceb,
        mid_binarySearch_9a64ecd54a61726d,
        mid_binarySearch_ef4424920bc20119,
        mid_binarySearch_3a4cf86e3c27d3c1,
        mid_binarySearch_44a45200f5027f60,
        mid_copyOf_478cfa823c780485,
        mid_copyOf_03b7414ad135d405,
        mid_copyOf_e3e5bf986725ed31,
        mid_copyOf_bb41b4b6c049f550,
        mid_copyOf_5d6e0b423e11726d,
        mid_copyOf_278093e726fd2826,
        mid_copyOf_19c42e0f45b1d30d,
        mid_copyOf_918425fa1c7f2801,
        mid_copyOf_094f6372938169dc,
        mid_copyOf_1c345c121eeb3b56,
        mid_copyOfRange_33260d5dc8f14bd0,
        mid_copyOfRange_ca570db90ff6e0f1,
        mid_copyOfRange_6b2f32f5ab793d0c,
        mid_copyOfRange_0d04fdadd79a97ce,
        mid_copyOfRange_af5b45ff63d82992,
        mid_copyOfRange_ba7d14c0962577c6,
        mid_copyOfRange_244d7a3a846688e6,
        mid_copyOfRange_a5236f77979b84ce,
        mid_copyOfRange_57f63fbc42a23c9a,
        mid_copyOfRange_3adef14989b355be,
        mid_deepEquals_b612ec45556826e0,
        mid_deepHashCode_11ba1d1a829f1dd5,
        mid_deepToString_769987d5b132ba3d,
        mid_equals_ce3112cb35333a26,
        mid_equals_1ee327a84336ebdb,
        mid_equals_16540669d79f8e1b,
        mid_equals_1d909350e9af0dad,
        mid_equals_c71a22c5997b765f,
        mid_equals_aa7b365f33a11d8e,
        mid_equals_b612ec45556826e0,
        mid_equals_3e9cffdf740a6d39,
        mid_equals_589de1c3283e825f,
        mid_fill_e7360e0dc16247fd,
        mid_fill_46963483e78758c4,
        mid_fill_3a42039882649674,
        mid_fill_ec2a6dadbe25ef13,
        mid_fill_317038f7dae85a54,
        mid_fill_b15462fe6b719dc3,
        mid_fill_cd5c30946ff045d6,
        mid_fill_6b9d54909d29b341,
        mid_fill_9111e74f8caf6bd8,
        mid_fill_45d686c7d1def9d3,
        mid_fill_5bfc2b23269a5af2,
        mid_fill_dfe1eda20ca191c7,
        mid_fill_506dafa9f041290c,
        mid_fill_b4b053a761fbec22,
        mid_fill_f5d8fb4895840d8c,
        mid_fill_f601c4902e7fad30,
        mid_fill_f67a7534f6f0f6d0,
        mid_fill_b132329771b4e20d,
        mid_hashCode_bc39a112ba52f98e,
        mid_hashCode_946cc819d92a7347,
        mid_hashCode_bb668a876ff13ea0,
        mid_hashCode_5119d9d9e0a9c69f,
        mid_hashCode_b1d2da90a0b4944e,
        mid_hashCode_9bdbb9e936dd10c2,
        mid_hashCode_11ba1d1a829f1dd5,
        mid_hashCode_4dec2479c34dbbb2,
        mid_hashCode_46abd8a4229eb8ff,
        mid_parallelPrefix_d3c81f15012216ce,
        mid_parallelPrefix_113b63e5820710e8,
        mid_parallelPrefix_cddc22a1993ebbad,
        mid_parallelPrefix_c2a5953092a5e694,
        mid_parallelPrefix_978f8710bc21971c,
        mid_parallelPrefix_0b466df92709ec50,
        mid_parallelPrefix_07c33c5822c4ad0b,
        mid_parallelPrefix_efa40d5fb233f42f,
        mid_parallelSetAll_61c092838dd7ba7c,
        mid_parallelSetAll_4e7f845c107bd69a,
        mid_parallelSetAll_f63b4a12f5cf300e,
        mid_parallelSetAll_d9db2f050cf0de6e,
        mid_parallelSort_9ffdf271836656c4,
        mid_parallelSort_82dffe1ba55ed767,
        mid_parallelSort_d5d56d9facba9bbe,
        mid_parallelSort_86d8949a8a13e717,
        mid_parallelSort_263e68476cd076a9,
        mid_parallelSort_7f1c853abc1a9198,
        mid_parallelSort_f26a4c17dc350da3,
        mid_parallelSort_8c88552bda1613c2,
        mid_parallelSort_f8e3b3d2a8c9889c,
        mid_parallelSort_43fdd39c09bb2fad,
        mid_parallelSort_d5128be76a214037,
        mid_parallelSort_ab3d95e9316c4026,
        mid_parallelSort_177aa4cf1758b37e,
        mid_parallelSort_11b52125bd016996,
        mid_parallelSort_d07f51188c558bf8,
        mid_parallelSort_a2389198cde72d32,
        mid_parallelSort_9e371bc10784c07e,
        mid_parallelSort_fe20a22253bec8d0,
        mid_setAll_61c092838dd7ba7c,
        mid_setAll_4e7f845c107bd69a,
        mid_setAll_f63b4a12f5cf300e,
        mid_setAll_d9db2f050cf0de6e,
        mid_sort_9ffdf271836656c4,
        mid_sort_82dffe1ba55ed767,
        mid_sort_d5d56d9facba9bbe,
        mid_sort_86d8949a8a13e717,
        mid_sort_263e68476cd076a9,
        mid_sort_7f1c853abc1a9198,
        mid_sort_f6e9e09a6ebaf005,
        mid_sort_8c88552bda1613c2,
        mid_sort_f8e3b3d2a8c9889c,
        mid_sort_43fdd39c09bb2fad,
        mid_sort_d5128be76a214037,
        mid_sort_ab3d95e9316c4026,
        mid_sort_177aa4cf1758b37e,
        mid_sort_11b52125bd016996,
        mid_sort_d07f51188c558bf8,
        mid_sort_d4d2b2e959e9eb5a,
        mid_sort_9e371bc10784c07e,
        mid_sort_fe20a22253bec8d0,
        mid_spliterator_4a63de50cb0f977d,
        mid_spliterator_da5b0df49c0de311,
        mid_spliterator_04cf0490c66ffb8d,
        mid_spliterator_68eb20c1c200a32f,
        mid_spliterator_5a77a34cf63f68d8,
        mid_spliterator_9d4217d8fdca4773,
        mid_spliterator_7d4d4e264ab4c361,
        mid_spliterator_7647782f58d558d1,
        mid_toString_724cde42c4d4b340,
        mid_toString_4082f27b3cc7d145,
        mid_toString_000a2125e47f39f3,
        mid_toString_f579147e371e96c3,
        mid_toString_75d82be1631ea68f,
        mid_toString_ee1527d74a0c3326,
        mid_toString_769987d5b132ba3d,
        mid_toString_94e3669ff8d32c24,
        mid_toString_d8db261a6f60d389,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Arrays(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Arrays(const Arrays& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List asList(const JArray< ::java::lang::Object > &);
      static jint binarySearch(const JArray< jbyte > &, jbyte);
      static jint binarySearch(const JArray< jchar > &, jchar);
      static jint binarySearch(const JArray< jdouble > &, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jfloat);
      static jint binarySearch(const JArray< jint > &, jint);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jlong > &, jlong);
      static jint binarySearch(const JArray< jshort > &, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint binarySearch(const JArray< jbyte > &, jint, jint, jbyte);
      static jint binarySearch(const JArray< jchar > &, jint, jint, jchar);
      static jint binarySearch(const JArray< jdouble > &, jint, jint, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jint, jint, jfloat);
      static jint binarySearch(const JArray< jint > &, jint, jint, jint);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jlong > &, jint, jint, jlong);
      static jint binarySearch(const JArray< jshort > &, jint, jint, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &, const ::java::util::Comparator &);
      static JArray< jbyte > copyOf(const JArray< jbyte > &, jint);
      static JArray< jchar > copyOf(const JArray< jchar > &, jint);
      static JArray< jdouble > copyOf(const JArray< jdouble > &, jint);
      static JArray< jfloat > copyOf(const JArray< jfloat > &, jint);
      static JArray< jint > copyOf(const JArray< jint > &, jint);
      static JArray< jlong > copyOf(const JArray< jlong > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint);
      static JArray< jshort > copyOf(const JArray< jshort > &, jint);
      static JArray< jboolean > copyOf(const JArray< jboolean > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint, const ::java::lang::Class &);
      static JArray< jbyte > copyOfRange(const JArray< jbyte > &, jint, jint);
      static JArray< jchar > copyOfRange(const JArray< jchar > &, jint, jint);
      static JArray< jdouble > copyOfRange(const JArray< jdouble > &, jint, jint);
      static JArray< jfloat > copyOfRange(const JArray< jfloat > &, jint, jint);
      static JArray< jint > copyOfRange(const JArray< jint > &, jint, jint);
      static JArray< jlong > copyOfRange(const JArray< jlong > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint);
      static JArray< jshort > copyOfRange(const JArray< jshort > &, jint, jint);
      static JArray< jboolean > copyOfRange(const JArray< jboolean > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Class &);
      static jboolean deepEquals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint deepHashCode(const JArray< ::java::lang::Object > &);
      static ::java::lang::String deepToString(const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jbyte > &, const JArray< jbyte > &);
      static jboolean equals(const JArray< jchar > &, const JArray< jchar > &);
      static jboolean equals(const JArray< jdouble > &, const JArray< jdouble > &);
      static jboolean equals(const JArray< jfloat > &, const JArray< jfloat > &);
      static jboolean equals(const JArray< jint > &, const JArray< jint > &);
      static jboolean equals(const JArray< jlong > &, const JArray< jlong > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jshort > &, const JArray< jshort > &);
      static jboolean equals(const JArray< jboolean > &, const JArray< jboolean > &);
      static void fill(const JArray< jboolean > &, jboolean);
      static void fill(const JArray< jbyte > &, jbyte);
      static void fill(const JArray< jchar > &, jchar);
      static void fill(const JArray< jdouble > &, jdouble);
      static void fill(const JArray< jfloat > &, jfloat);
      static void fill(const JArray< jint > &, jint);
      static void fill(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static void fill(const JArray< jlong > &, jlong);
      static void fill(const JArray< jshort > &, jshort);
      static void fill(const JArray< jbyte > &, jint, jint, jbyte);
      static void fill(const JArray< jchar > &, jint, jint, jchar);
      static void fill(const JArray< jfloat > &, jint, jint, jfloat);
      static void fill(const JArray< jint > &, jint, jint, jint);
      static void fill(const JArray< jboolean > &, jint, jint, jboolean);
      static void fill(const JArray< jdouble > &, jint, jint, jdouble);
      static void fill(const JArray< jlong > &, jint, jint, jlong);
      static void fill(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static void fill(const JArray< jshort > &, jint, jint, jshort);
      static jint hashCode(const JArray< jbyte > &);
      static jint hashCode(const JArray< jchar > &);
      static jint hashCode(const JArray< jdouble > &);
      static jint hashCode(const JArray< jfloat > &);
      static jint hashCode(const JArray< jint > &);
      static jint hashCode(const JArray< jlong > &);
      static jint hashCode(const JArray< ::java::lang::Object > &);
      static jint hashCode(const JArray< jshort > &);
      static jint hashCode(const JArray< jboolean > &);
      static void parallelPrefix(const JArray< ::java::lang::Object > &, const ::java::util::function::BinaryOperator &);
      static void parallelPrefix(const JArray< jdouble > &, const ::java::util::function::DoubleBinaryOperator &);
      static void parallelPrefix(const JArray< jint > &, const ::java::util::function::IntBinaryOperator &);
      static void parallelPrefix(const JArray< jlong > &, const ::java::util::function::LongBinaryOperator &);
      static void parallelPrefix(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::function::BinaryOperator &);
      static void parallelPrefix(const JArray< jdouble > &, jint, jint, const ::java::util::function::DoubleBinaryOperator &);
      static void parallelPrefix(const JArray< jint > &, jint, jint, const ::java::util::function::IntBinaryOperator &);
      static void parallelPrefix(const JArray< jlong > &, jint, jint, const ::java::util::function::LongBinaryOperator &);
      static void parallelSetAll(const JArray< ::java::lang::Object > &, const ::java::util::function::IntFunction &);
      static void parallelSetAll(const JArray< jdouble > &, const ::java::util::function::IntToDoubleFunction &);
      static void parallelSetAll(const JArray< jint > &, const ::java::util::function::IntUnaryOperator &);
      static void parallelSetAll(const JArray< jlong > &, const ::java::util::function::IntToLongFunction &);
      static void parallelSort(const JArray< jbyte > &);
      static void parallelSort(const JArray< jchar > &);
      static void parallelSort(const JArray< jdouble > &);
      static void parallelSort(const JArray< jfloat > &);
      static void parallelSort(const JArray< jint > &);
      static void parallelSort(const JArray< jlong > &);
      static void parallelSort(const JArray< ::java::lang::Comparable > &);
      static void parallelSort(const JArray< jshort > &);
      static void parallelSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void parallelSort(const JArray< jbyte > &, jint, jint);
      static void parallelSort(const JArray< jchar > &, jint, jint);
      static void parallelSort(const JArray< jdouble > &, jint, jint);
      static void parallelSort(const JArray< jfloat > &, jint, jint);
      static void parallelSort(const JArray< jint > &, jint, jint);
      static void parallelSort(const JArray< jlong > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Comparable > &, jint, jint);
      static void parallelSort(const JArray< jshort > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void setAll(const JArray< ::java::lang::Object > &, const ::java::util::function::IntFunction &);
      static void setAll(const JArray< jdouble > &, const ::java::util::function::IntToDoubleFunction &);
      static void setAll(const JArray< jint > &, const ::java::util::function::IntUnaryOperator &);
      static void setAll(const JArray< jlong > &, const ::java::util::function::IntToLongFunction &);
      static void sort(const JArray< jbyte > &);
      static void sort(const JArray< jchar > &);
      static void sort(const JArray< jdouble > &);
      static void sort(const JArray< jfloat > &);
      static void sort(const JArray< jint > &);
      static void sort(const JArray< jlong > &);
      static void sort(const JArray< ::java::lang::Object > &);
      static void sort(const JArray< jshort > &);
      static void sort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void sort(const JArray< jbyte > &, jint, jint);
      static void sort(const JArray< jchar > &, jint, jint);
      static void sort(const JArray< jdouble > &, jint, jint);
      static void sort(const JArray< jfloat > &, jint, jint);
      static void sort(const JArray< jint > &, jint, jint);
      static void sort(const JArray< jlong > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint);
      static void sort(const JArray< jshort > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &, jint, jint);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &, jint, jint);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &, jint, jint);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &, jint, jint);
      static ::java::lang::String toString(const JArray< jbyte > &);
      static ::java::lang::String toString(const JArray< jchar > &);
      static ::java::lang::String toString(const JArray< jdouble > &);
      static ::java::lang::String toString(const JArray< jfloat > &);
      static ::java::lang::String toString(const JArray< jint > &);
      static ::java::lang::String toString(const JArray< jlong > &);
      static ::java::lang::String toString(const JArray< ::java::lang::Object > &);
      static ::java::lang::String toString(const JArray< jshort > &);
      static ::java::lang::String toString(const JArray< jboolean > &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Arrays);
    extern PyTypeObject *PY_TYPE(Arrays);

    class t_Arrays {
    public:
      PyObject_HEAD
      Arrays object;
      static PyObject *wrap_Object(const Arrays&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
