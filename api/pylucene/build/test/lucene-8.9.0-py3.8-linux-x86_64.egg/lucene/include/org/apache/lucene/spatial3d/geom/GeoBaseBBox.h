#ifndef org_apache_lucene_spatial3d_geom_GeoBaseBBox_H
#define org_apache_lucene_spatial3d_geom_GeoBaseBBox_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseAreaShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoBBox;
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

          class GeoBaseBBox : public ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape {
           public:
            enum {
              mid_init$_fd580b4e02411290,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseBBox(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseBBox(const GeoBaseBBox& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape(obj) {}

            GeoBaseBBox(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseBBox);
          extern PyTypeObject *PY_TYPE(GeoBaseBBox);

          class t_GeoBaseBBox {
          public:
            PyObject_HEAD
            GeoBaseBBox object;
            static PyObject *wrap_Object(const GeoBaseBBox&);
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
