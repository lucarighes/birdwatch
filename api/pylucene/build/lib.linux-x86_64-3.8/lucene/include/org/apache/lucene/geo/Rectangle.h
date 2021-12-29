#ifndef org_apache_lucene_geo_Rectangle_H
#define org_apache_lucene_geo_Rectangle_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Polygon;
        class Rectangle;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Rectangle : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_98b1cec09263a48f,
            mid_axisLat_990b512583b70d91,
            mid_containsPoint_c4e087cb1201d3d4,
            mid_crossesDateline_8454bd5aa23fd11e,
            mid_equals_8b72f2dcdde6fd1d,
            mid_fromPointDistance_683cc039e2f7ed17,
            mid_fromPolygon_eebda915d8f4a0b9,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            mid_toComponent2D_6fe8ae19c34b6817,
            max_mid
          };

          enum {
            fid_maxLat,
            fid_maxLon,
            fid_minLat,
            fid_minLon,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Rectangle(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Rectangle(const Rectangle& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          static jdouble AXISLAT_ERROR;

          jdouble _get_maxLat() const;
          jdouble _get_maxLon() const;
          jdouble _get_minLat() const;
          jdouble _get_minLon() const;

          Rectangle(jdouble, jdouble, jdouble, jdouble);

          static jdouble axisLat(jdouble, jdouble);
          static jboolean containsPoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          jboolean crossesDateline() const;
          jboolean equals(const ::java::lang::Object &) const;
          static Rectangle fromPointDistance(jdouble, jdouble, jdouble);
          static Rectangle fromPolygon(const JArray< ::org::apache::lucene::geo::Polygon > &);
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
        extern PyType_Def PY_TYPE_DEF(Rectangle);
        extern PyTypeObject *PY_TYPE(Rectangle);

        class t_Rectangle {
        public:
          PyObject_HEAD
          Rectangle object;
          static PyObject *wrap_Object(const Rectangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
