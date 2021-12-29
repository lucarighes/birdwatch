#ifndef org_apache_lucene_spatial3d_geom_NormalDistance_H
#define org_apache_lucene_spatial3d_geom_NormalDistance_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class NormalDistance;
          class DistanceStyle;
          class GeoPoint;
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

          class NormalDistance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_computeDistance_5d9fe562983a5b40,
              mid_computeDistance_1ec77ef423ee02b8,
              mid_computeDistance_9a12f42782ddf048,
              mid_computeDistance_e314394bf9f24d4d,
              mid_findDistancePoints_90e364a30b4d8b55,
              mid_findMaximumArcDistance_63963df67d49d40a,
              mid_findMinimumArcDistance_63963df67d49d40a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalDistance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NormalDistance(const NormalDistance& obj) : ::java::lang::Object(obj) {}

            static NormalDistance *INSTANCE;

            NormalDistance();

            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, jdouble, jdouble, jdouble) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findDistancePoints(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble findMaximumArcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble) const;
            jdouble findMinimumArcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(NormalDistance);
          extern PyTypeObject *PY_TYPE(NormalDistance);

          class t_NormalDistance {
          public:
            PyObject_HEAD
            NormalDistance object;
            static PyObject *wrap_Object(const NormalDistance&);
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
