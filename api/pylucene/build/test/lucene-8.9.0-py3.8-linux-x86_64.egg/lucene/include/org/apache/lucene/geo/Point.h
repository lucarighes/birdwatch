#ifndef org_apache_lucene_geo_Point_H
#define org_apache_lucene_geo_Point_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

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

        class Point : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_75a41c58a4d52f7d,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getLat_8c74b787998ce4bc,
            mid_getLon_8c74b787998ce4bc,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            mid_toComponent2D_6fe8ae19c34b6817,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Point(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Point(const Point& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          Point(jdouble, jdouble);

          jboolean equals(const ::java::lang::Object &) const;
          jdouble getLat() const;
          jdouble getLon() const;
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
        extern PyType_Def PY_TYPE_DEF(Point);
        extern PyTypeObject *PY_TYPE(Point);

        class t_Point {
        public:
          PyObject_HEAD
          Point object;
          static PyObject *wrap_Object(const Point&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
