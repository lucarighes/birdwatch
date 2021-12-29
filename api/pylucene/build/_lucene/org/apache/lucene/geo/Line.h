#ifndef org_apache_lucene_geo_Line_H
#define org_apache_lucene_geo_Line_H

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

        class Line : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_1d56dd1258093787,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getLat_f3ddedc0b6f18620,
            mid_getLats_7f7ead8cd9ac7585,
            mid_getLon_f3ddedc0b6f18620,
            mid_getLons_7f7ead8cd9ac7585,
            mid_hashCode_9972fcc56b44e79d,
            mid_numPoints_9972fcc56b44e79d,
            mid_toGeoJSON_db9b55ba01e03e4b,
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

          explicit Line(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Line(const Line& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          jdouble _get_maxLat() const;
          jdouble _get_maxLon() const;
          jdouble _get_minLat() const;
          jdouble _get_minLon() const;

          Line(const JArray< jdouble > &, const JArray< jdouble > &);

          jboolean equals(const ::java::lang::Object &) const;
          jdouble getLat(jint) const;
          JArray< jdouble > getLats() const;
          jdouble getLon(jint) const;
          JArray< jdouble > getLons() const;
          jint hashCode() const;
          jint numPoints() const;
          ::java::lang::String toGeoJSON() const;
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
        extern PyType_Def PY_TYPE_DEF(Line);
        extern PyTypeObject *PY_TYPE(Line);

        class t_Line {
        public:
          PyObject_HEAD
          Line object;
          static PyObject *wrap_Object(const Line&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
