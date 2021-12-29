#ifndef org_apache_lucene_spatial3d_geom_PlanetModel_H
#define org_apache_lucene_spatial3d_geom_PlanetModel_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class SerializableObject;
          class GeoPoint;
          class PlanetModel$DocValueEncoder;
          class PlanetModel;
          class Vector;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class PlanetModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a227449bf251faf1,
              mid_init$_75a41c58a4d52f7d,
              mid_bisection_d7c033e06481e8d7,
              mid_createSurfacePoint_da7d358ea82c26f9,
              mid_createSurfacePoint_f1be7928ae62ab0d,
              mid_decodeValue_f3ddedc0b6f18620,
              mid_encodeValue_c1957bf1459ac23a,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getDocValueEncoder_8111381cb46e94b0,
              mid_getMaximumMagnitude_8c74b787998ce4bc,
              mid_getMaximumXValue_8c74b787998ce4bc,
              mid_getMaximumYValue_8c74b787998ce4bc,
              mid_getMaximumZValue_8c74b787998ce4bc,
              mid_getMeanRadius_8c74b787998ce4bc,
              mid_getMinimumMagnitude_8c74b787998ce4bc,
              mid_getMinimumXValue_8c74b787998ce4bc,
              mid_getMinimumYValue_8c74b787998ce4bc,
              mid_getMinimumZValue_8c74b787998ce4bc,
              mid_hashCode_9972fcc56b44e79d,
              mid_isSphere_8454bd5aa23fd11e,
              mid_pointOnSurface_ac70289ee56608c0,
              mid_pointOnSurface_5afbc0f2c6478de6,
              mid_pointOutside_ac70289ee56608c0,
              mid_pointOutside_5afbc0f2c6478de6,
              mid_surfaceDistance_5d9fe562983a5b40,
              mid_surfacePointOnBearing_77ef9fb3e0266e68,
              mid_toString_db9b55ba01e03e4b,
              mid_write_02fcdace254a9894,
              max_mid
            };

            enum {
              fid_DECODE,
              fid_MAX_ENCODED_VALUE,
              fid_MAX_VALUE,
              fid_MAX_X_POLE,
              fid_MAX_Y_POLE,
              fid_MIN_ENCODED_VALUE,
              fid_MIN_X_POLE,
              fid_MIN_Y_POLE,
              fid_NORTH_POLE,
              fid_SOUTH_POLE,
              fid_a,
              fid_b,
              fid_docValueEncoder,
              fid_inverseScale,
              fid_inverseXYScaling,
              fid_inverseXYScalingSquared,
              fid_inverseZScaling,
              fid_inverseZScalingSquared,
              fid_meanRadius,
              fid_minimumPoleDistance,
              fid_scale,
              fid_scaledFlattening,
              fid_squareRatio,
              fid_xyScaling,
              fid_zScaling,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PlanetModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PlanetModel(const PlanetModel& obj) : ::java::lang::Object(obj) {}

            static PlanetModel *CLARKE_1866;
            static PlanetModel *SPHERE;
            static PlanetModel *WGS84;

            jdouble _get_DECODE() const;
            jint _get_MAX_ENCODED_VALUE() const;
            jdouble _get_MAX_VALUE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MAX_X_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MAX_Y_POLE() const;
            jint _get_MIN_ENCODED_VALUE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MIN_X_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MIN_Y_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_NORTH_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_SOUTH_POLE() const;
            jdouble _get_a() const;
            jdouble _get_b() const;
            ::org::apache::lucene::spatial3d::geom::PlanetModel$DocValueEncoder _get_docValueEncoder() const;
            jdouble _get_inverseScale() const;
            jdouble _get_inverseXYScaling() const;
            jdouble _get_inverseXYScalingSquared() const;
            jdouble _get_inverseZScaling() const;
            jdouble _get_inverseZScalingSquared() const;
            jdouble _get_meanRadius() const;
            jdouble _get_minimumPoleDistance() const;
            jdouble _get_scale() const;
            jdouble _get_scaledFlattening() const;
            jdouble _get_squareRatio() const;
            jdouble _get_xyScaling() const;
            jdouble _get_zScaling() const;

            PlanetModel(const ::java::io::InputStream &);
            PlanetModel(jdouble, jdouble);

            ::org::apache::lucene::spatial3d::geom::GeoPoint bisection(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint createSurfacePoint(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint createSurfacePoint(jdouble, jdouble, jdouble) const;
            jdouble decodeValue(jint) const;
            jint encodeValue(jdouble) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::spatial3d::geom::PlanetModel$DocValueEncoder getDocValueEncoder() const;
            jdouble getMaximumMagnitude() const;
            jdouble getMaximumXValue() const;
            jdouble getMaximumYValue() const;
            jdouble getMaximumZValue() const;
            jdouble getMeanRadius() const;
            jdouble getMinimumMagnitude() const;
            jdouble getMinimumXValue() const;
            jdouble getMinimumYValue() const;
            jdouble getMinimumZValue() const;
            jint hashCode() const;
            jboolean isSphere() const;
            jboolean pointOnSurface(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean pointOnSurface(jdouble, jdouble, jdouble) const;
            jboolean pointOutside(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean pointOutside(jdouble, jdouble, jdouble) const;
            jdouble surfaceDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint surfacePointOnBearing(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, jdouble, jdouble) const;
            ::java::lang::String toString() const;
            void write(const ::java::io::OutputStream &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(PlanetModel);
          extern PyTypeObject *PY_TYPE(PlanetModel);

          class t_PlanetModel {
          public:
            PyObject_HEAD
            PlanetModel object;
            static PyObject *wrap_Object(const PlanetModel&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
