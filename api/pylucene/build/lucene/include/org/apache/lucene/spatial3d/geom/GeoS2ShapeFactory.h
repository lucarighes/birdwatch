#ifndef org_apache_lucene_spatial3d_geom_GeoS2ShapeFactory_H
#define org_apache_lucene_spatial3d_geom_GeoS2ShapeFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoPolygon;
          class PlanetModel;
          class GeoPoint;
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

          class GeoS2ShapeFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeGeoS2Shape_ffa406210edb76dd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoS2ShapeFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoS2ShapeFactory(const GeoS2ShapeFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoS2Shape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &);
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
          extern PyType_Def PY_TYPE_DEF(GeoS2ShapeFactory);
          extern PyTypeObject *PY_TYPE(GeoS2ShapeFactory);

          class t_GeoS2ShapeFactory {
          public:
            PyObject_HEAD
            GeoS2ShapeFactory object;
            static PyObject *wrap_Object(const GeoS2ShapeFactory&);
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
