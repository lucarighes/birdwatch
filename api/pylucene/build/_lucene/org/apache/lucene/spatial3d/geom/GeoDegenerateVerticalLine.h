#ifndef org_apache_lucene_spatial3d_geom_GeoDegenerateVerticalLine_H
#define org_apache_lucene_spatial3d_geom_GeoDegenerateVerticalLine_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseBBox.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class Plane;
          class GeoPoint;
          class GeoBBox;
          class PlanetModel;
          class Bounds;
          class Membership;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
  }
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

          class GeoDegenerateVerticalLine : public ::org::apache::lucene::spatial3d::geom::GeoBaseBBox {
           public:
            enum {
              mid_init$_fa69e987247475d8,
              mid_init$_a96c83f5c340c0ad,
              mid_equals_8b72f2dcdde6fd1d,
              mid_expand_ced210f3e52c8970,
              mid_getBounds_bbfc0798cb5fe499,
              mid_getCenter_9ece33e8c05297a2,
              mid_getEdgePoints_e945274bd0921a4a,
              mid_getRadius_8c74b787998ce4bc,
              mid_getRelationship_2e0040c09ede6a59,
              mid_hashCode_9972fcc56b44e79d,
              mid_intersects_19eac5b582956b3c,
              mid_intersects_e74435b8d47a8bda,
              mid_isWithin_5afbc0f2c6478de6,
              mid_toString_db9b55ba01e03e4b,
              mid_write_02fcdace254a9894,
              mid_outsideDistance_2b407c8141eb9589,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoDegenerateVerticalLine(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseBBox(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoDegenerateVerticalLine(const GeoDegenerateVerticalLine& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseBBox(obj) {}

            GeoDegenerateVerticalLine(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            GeoDegenerateVerticalLine(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::spatial3d::geom::GeoBBox expand(jdouble) const;
            void getBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint getCenter() const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > getEdgePoints() const;
            jdouble getRadius() const;
            jint getRelationship(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jint hashCode() const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoDegenerateVerticalLine);
          extern PyTypeObject *PY_TYPE(GeoDegenerateVerticalLine);

          class t_GeoDegenerateVerticalLine {
          public:
            PyObject_HEAD
            GeoDegenerateVerticalLine object;
            static PyObject *wrap_Object(const GeoDegenerateVerticalLine&);
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
