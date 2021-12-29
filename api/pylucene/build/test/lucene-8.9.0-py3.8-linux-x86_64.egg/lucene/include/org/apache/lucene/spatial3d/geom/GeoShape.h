#ifndef org_apache_lucene_spatial3d_geom_GeoShape_H
#define org_apache_lucene_spatial3d_geom_GeoShape_H

#include "org/apache/lucene/spatial3d/geom/Bounded.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoPoint;
          class PlanetObject;
          class Plane;
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

          class GeoShape : public ::org::apache::lucene::spatial3d::geom::Bounded {
           public:
            enum {
              mid_getEdgePoints_e945274bd0921a4a,
              mid_intersects_e74435b8d47a8bda,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::Bounded(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoShape(const GeoShape& obj) : ::org::apache::lucene::spatial3d::geom::Bounded(obj) {}

            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > getEdgePoints() const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoShape);
          extern PyTypeObject *PY_TYPE(GeoShape);

          class t_GeoShape {
          public:
            PyObject_HEAD
            GeoShape object;
            static PyObject *wrap_Object(const GeoShape&);
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
