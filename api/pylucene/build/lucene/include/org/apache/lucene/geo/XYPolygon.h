#ifndef org_apache_lucene_geo_XYPolygon_H
#define org_apache_lucene_geo_XYPolygon_H

#include "org/apache/lucene/geo/XYGeometry.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class GeoUtils$WindingOrder;
        class XYPolygon;
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

        class XYPolygon : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_4da92bbf1eaabf32,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getHoles_dd3003061a326c0c,
            mid_getPolyX_62fe0e50f01d1bcf,
            mid_getPolyX_384f078ef4b8f931,
            mid_getPolyY_62fe0e50f01d1bcf,
            mid_getPolyY_384f078ef4b8f931,
            mid_getWindingOrder_a9fa70f6c7b7c217,
            mid_hashCode_9972fcc56b44e79d,
            mid_numHoles_9972fcc56b44e79d,
            mid_numPoints_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            mid_toComponent2D_6fe8ae19c34b6817,
            max_mid
          };

          enum {
            fid_maxX,
            fid_maxY,
            fid_minX,
            fid_minY,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYPolygon(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYPolygon(const XYPolygon& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          jfloat _get_maxX() const;
          jfloat _get_maxY() const;
          jfloat _get_minX() const;
          jfloat _get_minY() const;

          XYPolygon(const JArray< jfloat > &, const JArray< jfloat > &, const JArray< XYPolygon > &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< XYPolygon > getHoles() const;
          JArray< jfloat > getPolyX() const;
          jfloat getPolyX(jint) const;
          JArray< jfloat > getPolyY() const;
          jfloat getPolyY(jint) const;
          ::org::apache::lucene::geo::GeoUtils$WindingOrder getWindingOrder() const;
          jint hashCode() const;
          jint numHoles() const;
          jint numPoints() const;
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
        extern PyType_Def PY_TYPE_DEF(XYPolygon);
        extern PyTypeObject *PY_TYPE(XYPolygon);

        class t_XYPolygon {
        public:
          PyObject_HEAD
          XYPolygon object;
          static PyObject *wrap_Object(const XYPolygon&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
