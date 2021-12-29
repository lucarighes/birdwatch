#ifndef org_apache_lucene_spatial3d_geom_LatLonBounds_H
#define org_apache_lucene_spatial3d_geom_LatLonBounds_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Bounds;
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
    class Double;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class LatLonBounds : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_addHorizontalPlane_de702abaccff8809,
              mid_addIntersection_d5756c2a9618cc36,
              mid_addPlane_2c04f33e2d449d53,
              mid_addPoint_deac40038f0b88f4,
              mid_addVerticalPlane_de702abaccff8809,
              mid_addXValue_deac40038f0b88f4,
              mid_addYValue_deac40038f0b88f4,
              mid_addZValue_deac40038f0b88f4,
              mid_checkNoBottomLatitudeBound_8454bd5aa23fd11e,
              mid_checkNoLongitudeBound_8454bd5aa23fd11e,
              mid_checkNoTopLatitudeBound_8454bd5aa23fd11e,
              mid_getLeftLongitude_a3794238a110f68c,
              mid_getMaxLatitude_a3794238a110f68c,
              mid_getMinLatitude_a3794238a110f68c,
              mid_getRightLongitude_a3794238a110f68c,
              mid_isWide_6f0a6687d3a83671,
              mid_noBottomLatitudeBound_6f0a6687d3a83671,
              mid_noBound_650181d6a64cb6dd,
              mid_noLongitudeBound_6f0a6687d3a83671,
              mid_noTopLatitudeBound_6f0a6687d3a83671,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LatLonBounds(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LatLonBounds(const LatLonBounds& obj) : ::java::lang::Object(obj) {}

            LatLonBounds();

            ::org::apache::lucene::spatial3d::geom::Bounds addHorizontalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addIntersection(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addVerticalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addXValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addYValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addZValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jboolean checkNoBottomLatitudeBound() const;
            jboolean checkNoLongitudeBound() const;
            jboolean checkNoTopLatitudeBound() const;
            ::java::lang::Double getLeftLongitude() const;
            ::java::lang::Double getMaxLatitude() const;
            ::java::lang::Double getMinLatitude() const;
            ::java::lang::Double getRightLongitude() const;
            ::org::apache::lucene::spatial3d::geom::Bounds isWide() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBottomLatitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBound(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds noLongitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noTopLatitudeBound() const;
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
          extern PyType_Def PY_TYPE_DEF(LatLonBounds);
          extern PyTypeObject *PY_TYPE(LatLonBounds);

          class t_LatLonBounds {
          public:
            PyObject_HEAD
            LatLonBounds object;
            static PyObject *wrap_Object(const LatLonBounds&);
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
