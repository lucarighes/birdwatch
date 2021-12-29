#ifndef org_apache_lucene_spatial3d_geom_GeoPolygonFactory_H
#define org_apache_lucene_spatial3d_geom_GeoPolygonFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoPolygon;
          class GeoPolygonFactory$PolygonDescription;
          class GeoPoint;
          class PlanetModel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class GeoPolygonFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeGeoConcavePolygon_0cfe5d1551e943e2,
              mid_makeGeoConcavePolygon_732c9f158f6c7179,
              mid_makeGeoConvexPolygon_0cfe5d1551e943e2,
              mid_makeGeoConvexPolygon_732c9f158f6c7179,
              mid_makeGeoPolygon_f74f587aec9aef29,
              mid_makeGeoPolygon_0cfe5d1551e943e2,
              mid_makeGeoPolygon_a51dc86c212065ba,
              mid_makeGeoPolygon_732c9f158f6c7179,
              mid_makeGeoPolygon_9038c62929daa1b8,
              mid_makeLargeGeoPolygon_0cfe5d1551e943e2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPolygonFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPolygonFactory(const GeoPolygonFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConcavePolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConcavePolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConvexPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConvexPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPolygonFactory$PolygonDescription &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPolygonFactory$PolygonDescription &, jdouble);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &, jdouble);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeLargeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
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
          extern PyType_Def PY_TYPE_DEF(GeoPolygonFactory);
          extern PyTypeObject *PY_TYPE(GeoPolygonFactory);

          class t_GeoPolygonFactory {
          public:
            PyObject_HEAD
            GeoPolygonFactory object;
            static PyObject *wrap_Object(const GeoPolygonFactory&);
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
