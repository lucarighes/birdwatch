#ifndef org_apache_lucene_spatial3d_geom_GeoBaseShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseShape_H

#include "org/apache/lucene/spatial3d/geom/BasePlanetObject.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class PlanetModel;
          class Bounds;
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

          class GeoBaseShape : public ::org::apache::lucene::spatial3d::geom::BasePlanetObject {
           public:
            enum {
              mid_init$_fd580b4e02411290,
              mid_getBounds_bbfc0798cb5fe499,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseShape(const GeoBaseShape& obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {}

            GeoBaseShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

            void getBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseShape);
          extern PyTypeObject *PY_TYPE(GeoBaseShape);

          class t_GeoBaseShape {
          public:
            PyObject_HEAD
            GeoBaseShape object;
            static PyObject *wrap_Object(const GeoBaseShape&);
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
