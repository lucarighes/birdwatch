#ifndef org_apache_lucene_geo_Polygon_H
#define org_apache_lucene_geo_Polygon_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class GeoUtils$WindingOrder;
        class Polygon;
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

        class Polygon : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_f922e0dbd0fab45f,
            mid_equals_8b72f2dcdde6fd1d,
            mid_fromGeoJSON_c8efb1ff79b608ea,
            mid_getHoles_b4b94d551f48db6e,
            mid_getPolyLat_f3ddedc0b6f18620,
            mid_getPolyLats_7f7ead8cd9ac7585,
            mid_getPolyLon_f3ddedc0b6f18620,
            mid_getPolyLons_7f7ead8cd9ac7585,
            mid_getWindingOrder_a9fa70f6c7b7c217,
            mid_hashCode_9972fcc56b44e79d,
            mid_numHoles_9972fcc56b44e79d,
            mid_numPoints_9972fcc56b44e79d,
            mid_toGeoJSON_db9b55ba01e03e4b,
            mid_toString_db9b55ba01e03e4b,
            mid_verticesToGeoJSON_96b965367492c041,
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

          explicit Polygon(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Polygon(const Polygon& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          jdouble _get_maxLat() const;
          jdouble _get_maxLon() const;
          jdouble _get_minLat() const;
          jdouble _get_minLon() const;

          Polygon(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< Polygon > &);

          jboolean equals(const ::java::lang::Object &) const;
          static JArray< Polygon > fromGeoJSON(const ::java::lang::String &);
          JArray< Polygon > getHoles() const;
          jdouble getPolyLat(jint) const;
          JArray< jdouble > getPolyLats() const;
          jdouble getPolyLon(jint) const;
          JArray< jdouble > getPolyLons() const;
          ::org::apache::lucene::geo::GeoUtils$WindingOrder getWindingOrder() const;
          jint hashCode() const;
          jint numHoles() const;
          jint numPoints() const;
          ::java::lang::String toGeoJSON() const;
          ::java::lang::String toString() const;
          static ::java::lang::String verticesToGeoJSON(const JArray< jdouble > &, const JArray< jdouble > &);
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
        extern PyType_Def PY_TYPE_DEF(Polygon);
        extern PyTypeObject *PY_TYPE(Polygon);

        class t_Polygon {
        public:
          PyObject_HEAD
          Polygon object;
          static PyObject *wrap_Object(const Polygon&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
