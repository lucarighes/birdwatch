#ifndef org_apache_lucene_geo_XYCircle_H
#define org_apache_lucene_geo_XYCircle_H

#include "org/apache/lucene/geo/XYGeometry.h"

namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class XYCircle : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_cf4403e82386af32,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getRadius_58aec2b64dff50c8,
            mid_getX_58aec2b64dff50c8,
            mid_getY_58aec2b64dff50c8,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            mid_toComponent2D_6fe8ae19c34b6817,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYCircle(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYCircle(const XYCircle& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          XYCircle(jfloat, jfloat, jfloat);

          jboolean equals(const ::java::lang::Object &) const;
          jfloat getRadius() const;
          jfloat getX() const;
          jfloat getY() const;
          jint hashCode() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(XYCircle);
        extern PyTypeObject *PY_TYPE(XYCircle);

        class t_XYCircle {
        public:
          PyObject_HEAD
          XYCircle object;
          static PyObject *wrap_Object(const XYCircle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
