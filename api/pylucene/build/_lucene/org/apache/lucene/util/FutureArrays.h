#ifndef org_apache_lucene_util_FutureArrays_H
#define org_apache_lucene_util_FutureArrays_H

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

        class FutureArrays : public ::java::lang::Object {
         public:
          enum {
            mid_compare_80aa093542ccf7ef,
            mid_compare_3841801940b74ab3,
            mid_compare_06db55456201788a,
            mid_compareUnsigned_10f28692d4a3a83a,
            mid_equals_0ec6efb3454d9289,
            mid_equals_a24e1b13eae1d37f,
            mid_equals_6c66f5791a306487,
            mid_equals_3a1a2748416996de,
            mid_mismatch_10f28692d4a3a83a,
            mid_mismatch_80aa093542ccf7ef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FutureArrays(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FutureArrays(const FutureArrays& obj) : ::java::lang::Object(obj) {}

          static jint compare(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
          static jint compare(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
          static jint compare(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
          static jint compareUnsigned(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
          static jboolean equals(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
          static jboolean equals(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
          static jboolean equals(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
          static jboolean equals(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
          static jint mismatch(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
          static jint mismatch(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(FutureArrays);
        extern PyTypeObject *PY_TYPE(FutureArrays);

        class t_FutureArrays {
        public:
          PyObject_HEAD
          FutureArrays object;
          static PyObject *wrap_Object(const FutureArrays&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
