#ifndef org_apache_lucene_spatial3d_geom_DistanceStyle_H
#define org_apache_lucene_spatial3d_geom_DistanceStyle_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class NormalDistance;
          class NormalSquaredDistance;
          class GeoPoint;
          class LinearDistance;
          class LinearSquaredDistance;
          class ArcDistance;
          class PlanetModel;
          class Plane;
          class Membership;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class DistanceStyle : public ::java::lang::Object {
           public:
            enum {
              mid_aggregateDistances_990b512583b70d91,
              mid_computeDistance_5d9fe562983a5b40,
              mid_computeDistance_1ec77ef423ee02b8,
              mid_computeDistance_9a12f42782ddf048,
              mid_computeDistance_e314394bf9f24d4d,
              mid_findDistancePoints_90e364a30b4d8b55,
              mid_findMaximumArcDistance_63963df67d49d40a,
              mid_findMinimumArcDistance_63963df67d49d40a,
              mid_fromAggregationForm_d089f34703408a66,
              mid_toAggregationForm_d089f34703408a66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DistanceStyle(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DistanceStyle(const DistanceStyle& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::ArcDistance *ARC;
            static ::org::apache::lucene::spatial3d::geom::LinearDistance *LINEAR;
            static ::org::apache::lucene::spatial3d::geom::LinearSquaredDistance *LINEAR_SQUARED;
            static ::org::apache::lucene::spatial3d::geom::NormalDistance *NORMAL;
            static ::org::apache::lucene::spatial3d::geom::NormalSquaredDistance *NORMAL_SQUARED;

            jdouble aggregateDistances(jdouble, jdouble) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, jdouble, jdouble, jdouble) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findDistancePoints(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble findMaximumArcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble) const;
            jdouble findMinimumArcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble) const;
            jdouble fromAggregationForm(jdouble) const;
            jdouble toAggregationForm(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(DistanceStyle);
          extern PyTypeObject *PY_TYPE(DistanceStyle);

          class t_DistanceStyle {
          public:
            PyObject_HEAD
            DistanceStyle object;
            static PyObject *wrap_Object(const DistanceStyle&);
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
