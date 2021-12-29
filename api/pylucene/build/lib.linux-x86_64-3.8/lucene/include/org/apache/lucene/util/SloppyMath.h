#ifndef org_apache_lucene_util_SloppyMath_H
#define org_apache_lucene_util_SloppyMath_H

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

        class SloppyMath : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_asin_d089f34703408a66,
            mid_cos_d089f34703408a66,
            mid_haversinKilometers_5578764cae66f7fc,
            mid_haversinMeters_d089f34703408a66,
            mid_haversinMeters_5578764cae66f7fc,
            mid_haversinSortKey_5578764cae66f7fc,
            mid_toDegrees_d089f34703408a66,
            mid_toRadians_d089f34703408a66,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SloppyMath(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SloppyMath(const SloppyMath& obj) : ::java::lang::Object(obj) {}

          static jdouble TO_DEGREES;
          static jdouble TO_RADIANS;

          SloppyMath();

          static jdouble asin(jdouble);
          static jdouble cos(jdouble);
          static jdouble haversinKilometers(jdouble, jdouble, jdouble, jdouble);
          static jdouble haversinMeters(jdouble);
          static jdouble haversinMeters(jdouble, jdouble, jdouble, jdouble);
          static jdouble haversinSortKey(jdouble, jdouble, jdouble, jdouble);
          static jdouble toDegrees(jdouble);
          static jdouble toRadians(jdouble);
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
        extern PyType_Def PY_TYPE_DEF(SloppyMath);
        extern PyTypeObject *PY_TYPE(SloppyMath);

        class t_SloppyMath {
        public:
          PyObject_HEAD
          SloppyMath object;
          static PyObject *wrap_Object(const SloppyMath&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
