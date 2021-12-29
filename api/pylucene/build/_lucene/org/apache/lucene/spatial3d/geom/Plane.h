#ifndef org_apache_lucene_spatial3d_geom_Plane_H
#define org_apache_lucene_spatial3d_geom_Plane_H

#include "org/apache/lucene/spatial3d/geom/Vector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class XYZBounds;
          class Plane;
          class GeoPoint;
          class LatLonBounds;
          class PlanetModel;
          class Membership;
        }
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
      namespace spatial3d {
        namespace geom {

          class Plane : public ::org::apache::lucene::spatial3d::geom::Vector {
           public:
            enum {
              mid_init$_b360fa58f0f3aae0,
              mid_init$_b51abdbbf62b08b6,
              mid_init$_4e7e13ed72cbd118,
              mid_init$_fcf4d015a2550579,
              mid_init$_75a41c58a4d52f7d,
              mid_init$_8a692b267f78bb5c,
              mid_init$_98b1cec09263a48f,
              mid_arcDistance_4cf3fddac81c90c5,
              mid_arcDistance_ef34cfa4bc9c8805,
              mid_arePointsCoplanar_bac27d94c684194b,
              mid_constructNormalizedXPlane_253ff0eeea349687,
              mid_constructNormalizedXPlane_b3497e1974a221d5,
              mid_constructNormalizedYPlane_253ff0eeea349687,
              mid_constructNormalizedYPlane_b3497e1974a221d5,
              mid_constructNormalizedZPlane_253ff0eeea349687,
              mid_constructNormalizedZPlane_0296f30435e5b334,
              mid_crosses_248a108aff03bbd6,
              mid_equals_8b72f2dcdde6fd1d,
              mid_evaluate_eeff1bdc68694797,
              mid_evaluate_5fe2cd44fc854b0c,
              mid_evaluateIsZero_ac70289ee56608c0,
              mid_evaluateIsZero_5afbc0f2c6478de6,
              mid_findArcDistancePoints_29379348dbe6d7ae,
              mid_findCrossings_babe76778ca3a59c,
              mid_findIntersections_babe76778ca3a59c,
              mid_getSampleIntersectionPoint_d87ce8ba41cef00d,
              mid_hashCode_9972fcc56b44e79d,
              mid_interpolate_98ebc17555d97b37,
              mid_intersects_248a108aff03bbd6,
              mid_isFunctionallyIdentical_3edee074a62ede18,
              mid_isNumericallyIdentical_3edee074a62ede18,
              mid_linearDistance_4cf3fddac81c90c5,
              mid_linearDistance_ef34cfa4bc9c8805,
              mid_linearDistanceSquared_4cf3fddac81c90c5,
              mid_linearDistanceSquared_ef34cfa4bc9c8805,
              mid_normalDistance_5d3f8351fb7c28a7,
              mid_normalDistance_75ab824d48b58dcf,
              mid_normalDistanceSquared_5d3f8351fb7c28a7,
              mid_normalDistanceSquared_75ab824d48b58dcf,
              mid_normalize_bde240becdc1550f,
              mid_recordBounds_9a3f8ad5ae1aaf02,
              mid_recordBounds_a54e7fd0ad3e46e6,
              mid_recordBounds_fb520c7ae835b925,
              mid_recordBounds_326f8a52ccb9a8e1,
              mid_toString_db9b55ba01e03e4b,
              mid_modify_cc2b882c8942d91e,
              mid_findIntersectionBounds_b3a6b129fead006c,
              mid_findIntersections_8246a710eac526d9,
              mid_reverseModify_eb74b7dd0109b894,
              mid_findCrossings_8246a710eac526d9,
              max_mid
            };

            enum {
              fid_D,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Plane(jobject obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Plane(const Plane& obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {}

            static JArray< ::org::apache::lucene::spatial3d::geom::Membership > *NO_BOUNDS;
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > *NO_POINTS;
            static Plane *normalXPlane;
            static Plane *normalYPlane;
            static Plane *normalZPlane;

            jdouble _get_D() const;

            Plane(const Plane &, jboolean);
            Plane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            Plane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble);
            Plane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble);
            Plane(jdouble, jdouble);
            Plane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble, jdouble);
            Plane(jdouble, jdouble, jdouble, jdouble);

            jdouble arcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble arcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            static jboolean arePointsCoplanar(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &);
            static Plane constructNormalizedXPlane(const JArray< ::org::apache::lucene::spatial3d::geom::Vector > &);
            static Plane constructNormalizedXPlane(jdouble, jdouble, jdouble);
            static Plane constructNormalizedYPlane(const JArray< ::org::apache::lucene::spatial3d::geom::Vector > &);
            static Plane constructNormalizedYPlane(jdouble, jdouble, jdouble);
            static Plane constructNormalizedZPlane(const JArray< ::org::apache::lucene::spatial3d::geom::Vector > &);
            static Plane constructNormalizedZPlane(jdouble, jdouble);
            jboolean crosses(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jdouble evaluate(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jdouble evaluate(jdouble, jdouble, jdouble) const;
            jboolean evaluateIsZero(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean evaluateIsZero(jdouble, jdouble, jdouble) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findArcDistancePoints(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findCrossings(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findIntersections(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint getSampleIntersectionPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &) const;
            jint hashCode() const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > interpolate(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< jdouble > &) const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean isFunctionallyIdentical(const Plane &) const;
            jboolean isNumericallyIdentical(const Plane &) const;
            jdouble linearDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistanceSquared(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistanceSquared(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistance(const ::org::apache::lucene::spatial3d::geom::Vector &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistance(jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistanceSquared(const ::org::apache::lucene::spatial3d::geom::Vector &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistanceSquared(jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Plane normalize() const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::LatLonBounds &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::XYZBounds &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::LatLonBounds &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::XYZBounds &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(Plane);
          extern PyTypeObject *PY_TYPE(Plane);

          class t_Plane {
          public:
            PyObject_HEAD
            Plane object;
            static PyObject *wrap_Object(const Plane&);
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
