#ifndef org_apache_lucene_spatial3d_geom_GeoPointShapeFactory_H
#define org_apache_lucene_spatial3d_geom_GeoPointShapeFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPointShape;
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

          class GeoPointShapeFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeGeoPointShape_091ec3f872fd9313,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPointShapeFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPointShapeFactory(const GeoPointShapeFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::GeoPointShape makeGeoPointShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble);
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
          extern PyType_Def PY_TYPE_DEF(GeoPointShapeFactory);
          extern PyTypeObject *PY_TYPE(GeoPointShapeFactory);

          class t_GeoPointShapeFactory {
          public:
            PyObject_HEAD
            GeoPointShapeFactory object;
            static PyObject *wrap_Object(const GeoPointShapeFactory&);
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
