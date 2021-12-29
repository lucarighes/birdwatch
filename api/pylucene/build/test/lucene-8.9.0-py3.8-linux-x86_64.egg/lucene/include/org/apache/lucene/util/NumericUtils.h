#ifndef org_apache_lucene_util_NumericUtils_H
#define org_apache_lucene_util_NumericUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class NumericUtils : public ::java::lang::Object {
         public:
          enum {
            mid_add_682896eda722dd45,
            mid_doubleToSortableLong_2cd17afd1ccbefb5,
            mid_floatToSortableInt_7db35672babd0b26,
            mid_intToSortableBytes_e2a2eb3c904536ac,
            mid_longToSortableBytes_d29578c9e7af98d1,
            mid_sortableBytesToInt_7cdc0fb0850d95a0,
            mid_sortableBytesToLong_d4ee5c8094735e0d,
            mid_sortableDoubleBits_d711eecdc469624a,
            mid_sortableFloatBits_1e143afe1894d213,
            mid_sortableIntToFloat_384f078ef4b8f931,
            mid_sortableLongToDouble_d0db46799f607804,
            mid_subtract_682896eda722dd45,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NumericUtils(const NumericUtils& obj) : ::java::lang::Object(obj) {}

          static void add(jint, jint, const JArray< jbyte > &, const JArray< jbyte > &, const JArray< jbyte > &);
          static jlong doubleToSortableLong(jdouble);
          static jint floatToSortableInt(jfloat);
          static void intToSortableBytes(jint, const JArray< jbyte > &, jint);
          static void longToSortableBytes(jlong, const JArray< jbyte > &, jint);
          static jint sortableBytesToInt(const JArray< jbyte > &, jint);
          static jlong sortableBytesToLong(const JArray< jbyte > &, jint);
          static jlong sortableDoubleBits(jlong);
          static jint sortableFloatBits(jint);
          static jfloat sortableIntToFloat(jint);
          static jdouble sortableLongToDouble(jlong);
          static void subtract(jint, jint, const JArray< jbyte > &, const JArray< jbyte > &, const JArray< jbyte > &);
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
        extern PyType_Def PY_TYPE_DEF(NumericUtils);
        extern PyTypeObject *PY_TYPE(NumericUtils);

        class t_NumericUtils {
        public:
          PyObject_HEAD
          NumericUtils object;
          static PyObject *wrap_Object(const NumericUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
