#ifndef org_apache_lucene_util_MathUtil_H
#define org_apache_lucene_util_MathUtil_H

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

        class MathUtil : public ::java::lang::Object {
         public:
          enum {
            mid_acosh_d089f34703408a66,
            mid_asinh_d089f34703408a66,
            mid_atanh_d089f34703408a66,
            mid_gcd_3f3333a84e3e6855,
            mid_log_990b512583b70d91,
            mid_log_9a645e7bdf1af4c4,
            mid_sumRelativeErrorBound_f3ddedc0b6f18620,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MathUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MathUtil(const MathUtil& obj) : ::java::lang::Object(obj) {}

          static jdouble acosh(jdouble);
          static jdouble asinh(jdouble);
          static jdouble atanh(jdouble);
          static jlong gcd(jlong, jlong);
          static jdouble log(jdouble, jdouble);
          static jint log(jlong, jint);
          static jdouble sumRelativeErrorBound(jint);
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
        extern PyType_Def PY_TYPE_DEF(MathUtil);
        extern PyTypeObject *PY_TYPE(MathUtil);

        class t_MathUtil {
        public:
          PyObject_HEAD
          MathUtil object;
          static PyObject *wrap_Object(const MathUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
