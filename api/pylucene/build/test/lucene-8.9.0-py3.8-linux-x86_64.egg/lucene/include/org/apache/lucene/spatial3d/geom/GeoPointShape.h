#ifndef org_apache_lucene_spatial3d_geom_GeoPointShape_H
#define org_apache_lucene_spatial3d_geom_GeoPointShape_H

#include "org/apache/lucene/spatial3d/geom/GeoCircle.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
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

          class GeoPointShape : public ::org::apache::lucene::spatial3d::geom::GeoCircle {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPointShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoCircle(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPointShape(const GeoPointShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoCircle(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(GeoPointShape);
          extern PyTypeObject *PY_TYPE(GeoPointShape);

          class t_GeoPointShape {
          public:
            PyObject_HEAD
            GeoPointShape object;
            static PyObject *wrap_Object(const GeoPointShape&);
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
