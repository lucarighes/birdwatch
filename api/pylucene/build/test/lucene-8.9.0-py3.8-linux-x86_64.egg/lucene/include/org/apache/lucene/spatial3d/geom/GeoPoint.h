#ifndef org_apache_lucene_spatial3d_geom_GeoPoint_H
#define org_apache_lucene_spatial3d_geom_GeoPoint_H

#include "org/apache/lucene/spatial3d/geom/Vector.h"

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
          class PlanetModel;
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

          class GeoPoint : public ::org::apache::lucene::spatial3d::geom::Vector {
           public:
            enum {
              mid_init$_a227449bf251faf1,
              mid_init$_fa69e987247475d8,
              mid_init$_914bffbee65f5b30,
              mid_init$_2a4b7af5c9ed138c,
              mid_init$_98b1cec09263a48f,
              mid_init$_db3d72bafee6378c,
              mid_init$_36a84f56bea85ae9,
              mid_init$_5d062ae8b01cf1b7,
              mid_init$_cb61cdb1a267ccb3,
              mid_arcDistance_eeff1bdc68694797,
              mid_arcDistance_5fe2cd44fc854b0c,
              mid_getLatitude_8c74b787998ce4bc,
              mid_getLongitude_8c74b787998ce4bc,
              mid_isIdentical_7e72234f19e0117f,
              mid_isIdentical_5afbc0f2c6478de6,
              mid_magnitude_8c74b787998ce4bc,
              mid_toString_db9b55ba01e03e4b,
              mid_write_02fcdace254a9894,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPoint(jobject obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPoint(const GeoPoint& obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {}

            GeoPoint(const ::java::io::InputStream &);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble, jdouble);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

            jdouble arcDistance(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jdouble arcDistance(jdouble, jdouble, jdouble) const;
            jdouble getLatitude() const;
            jdouble getLongitude() const;
            jboolean isIdentical(const GeoPoint &) const;
            jboolean isIdentical(jdouble, jdouble, jdouble) const;
            jdouble magnitude() const;
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
          extern PyType_Def PY_TYPE_DEF(GeoPoint);
          extern PyTypeObject *PY_TYPE(GeoPoint);

          class t_GeoPoint {
          public:
            PyObject_HEAD
            GeoPoint object;
            static PyObject *wrap_Object(const GeoPoint&);
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
