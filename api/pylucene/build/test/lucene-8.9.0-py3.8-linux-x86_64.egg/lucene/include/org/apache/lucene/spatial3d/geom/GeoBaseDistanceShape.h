#ifndef org_apache_lucene_spatial3d_geom_GeoBaseDistanceShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseDistanceShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseAreaShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Bounds;
          class DistanceStyle;
          class GeoPoint;
          class GeoDistanceShape;
          class PlanetModel;
          class Vector;
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

          class GeoBaseDistanceShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape {
           public:
            enum {
              mid_init$_fd580b4e02411290,
              mid_computeDeltaDistance_d330d2576549fa67,
              mid_computeDeltaDistance_2b407c8141eb9589,
              mid_computeDistance_d330d2576549fa67,
              mid_computeDistance_2b407c8141eb9589,
              mid_getDistanceBounds_24291086d3fa4f8c,
              mid_isWithin_ac70289ee56608c0,
              mid_distance_2b407c8141eb9589,
              mid_deltaDistance_2b407c8141eb9589,
              mid_distanceBounds_24291086d3fa4f8c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseDistanceShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseDistanceShape(const GeoBaseDistanceShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape(obj) {}

            GeoBaseDistanceShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

            jdouble computeDeltaDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDeltaDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
            void getDistanceBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &, const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble) const;
            jboolean isWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseDistanceShape);
          extern PyTypeObject *PY_TYPE(GeoBaseDistanceShape);

          class t_GeoBaseDistanceShape {
          public:
            PyObject_HEAD
            GeoBaseDistanceShape object;
            static PyObject *wrap_Object(const GeoBaseDistanceShape&);
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
