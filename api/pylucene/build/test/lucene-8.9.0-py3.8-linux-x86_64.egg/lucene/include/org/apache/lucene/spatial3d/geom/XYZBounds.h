#ifndef org_apache_lucene_spatial3d_geom_XYZBounds_H
#define org_apache_lucene_spatial3d_geom_XYZBounds_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Double;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Plane;
          class GeoPoint;
          class PlanetModel;
          class Bounds;
          class Membership;
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

          class XYZBounds : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_addHorizontalPlane_de702abaccff8809,
              mid_addIntersection_d5756c2a9618cc36,
              mid_addPlane_2c04f33e2d449d53,
              mid_addPoint_deac40038f0b88f4,
              mid_addVerticalPlane_de702abaccff8809,
              mid_addXValue_deac40038f0b88f4,
              mid_addXValue_0b14e9907b1550eb,
              mid_addYValue_deac40038f0b88f4,
              mid_addYValue_0b14e9907b1550eb,
              mid_addZValue_deac40038f0b88f4,
              mid_addZValue_0b14e9907b1550eb,
              mid_getMaximumX_a3794238a110f68c,
              mid_getMaximumY_a3794238a110f68c,
              mid_getMaximumZ_a3794238a110f68c,
              mid_getMinimumX_a3794238a110f68c,
              mid_getMinimumY_a3794238a110f68c,
              mid_getMinimumZ_a3794238a110f68c,
              mid_isLargestMaxX_0ce63da7ce8826bc,
              mid_isLargestMaxY_0ce63da7ce8826bc,
              mid_isLargestMaxZ_0ce63da7ce8826bc,
              mid_isSmallestMinX_0ce63da7ce8826bc,
              mid_isSmallestMinY_0ce63da7ce8826bc,
              mid_isSmallestMinZ_0ce63da7ce8826bc,
              mid_isWide_6f0a6687d3a83671,
              mid_noBottomLatitudeBound_6f0a6687d3a83671,
              mid_noBound_650181d6a64cb6dd,
              mid_noLongitudeBound_6f0a6687d3a83671,
              mid_noTopLatitudeBound_6f0a6687d3a83671,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit XYZBounds(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            XYZBounds(const XYZBounds& obj) : ::java::lang::Object(obj) {}

            XYZBounds();

            ::org::apache::lucene::spatial3d::geom::Bounds addHorizontalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addIntersection(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addVerticalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addXValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addXValue(jdouble) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addYValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addYValue(jdouble) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addZValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addZValue(jdouble) const;
            ::java::lang::Double getMaximumX() const;
            ::java::lang::Double getMaximumY() const;
            ::java::lang::Double getMaximumZ() const;
            ::java::lang::Double getMinimumX() const;
            ::java::lang::Double getMinimumY() const;
            ::java::lang::Double getMinimumZ() const;
            jboolean isLargestMaxX(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isLargestMaxY(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isLargestMaxZ(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isSmallestMinX(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isSmallestMinY(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isSmallestMinZ(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds isWide() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBottomLatitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBound(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds noLongitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noTopLatitudeBound() const;
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
          extern PyType_Def PY_TYPE_DEF(XYZBounds);
          extern PyTypeObject *PY_TYPE(XYZBounds);

          class t_XYZBounds {
          public:
            PyObject_HEAD
            XYZBounds object;
            static PyObject *wrap_Object(const XYZBounds&);
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
