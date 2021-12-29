#ifndef org_apache_lucene_util_BitUtil_H
#define org_apache_lucene_util_BitUtil_H

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

        class BitUtil : public ::java::lang::Object {
         public:
          enum {
            mid_deinterleave_d711eecdc469624a,
            mid_flipFlop_d711eecdc469624a,
            mid_interleave_b41f949dd7315988,
            mid_nextHighestPowerOfTwo_1e143afe1894d213,
            mid_nextHighestPowerOfTwo_d711eecdc469624a,
            mid_pop_andnot_75af901f9fc3dd56,
            mid_pop_array_c4e9c52e91b65572,
            mid_pop_intersect_75af901f9fc3dd56,
            mid_pop_union_75af901f9fc3dd56,
            mid_pop_xor_75af901f9fc3dd56,
            mid_zigZagDecode_1e143afe1894d213,
            mid_zigZagDecode_d711eecdc469624a,
            mid_zigZagEncode_1e143afe1894d213,
            mid_zigZagEncode_d711eecdc469624a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitUtil(const BitUtil& obj) : ::java::lang::Object(obj) {}

          static jlong deinterleave(jlong);
          static jlong flipFlop(jlong);
          static jlong interleave(jint, jint);
          static jint nextHighestPowerOfTwo(jint);
          static jlong nextHighestPowerOfTwo(jlong);
          static jlong pop_andnot(const JArray< jlong > &, const JArray< jlong > &, jint, jint);
          static jlong pop_array(const JArray< jlong > &, jint, jint);
          static jlong pop_intersect(const JArray< jlong > &, const JArray< jlong > &, jint, jint);
          static jlong pop_union(const JArray< jlong > &, const JArray< jlong > &, jint, jint);
          static jlong pop_xor(const JArray< jlong > &, const JArray< jlong > &, jint, jint);
          static jint zigZagDecode(jint);
          static jlong zigZagDecode(jlong);
          static jint zigZagEncode(jint);
          static jlong zigZagEncode(jlong);
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
        extern PyType_Def PY_TYPE_DEF(BitUtil);
        extern PyTypeObject *PY_TYPE(BitUtil);

        class t_BitUtil {
        public:
          PyObject_HEAD
          BitUtil object;
          static PyObject *wrap_Object(const BitUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
