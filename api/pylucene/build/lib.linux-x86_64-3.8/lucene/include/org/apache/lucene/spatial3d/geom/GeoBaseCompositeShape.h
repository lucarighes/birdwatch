#ifndef org_apache_lucene_spatial3d_geom_GeoBaseCompositeShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseCompositeShape_H

#include "org/apache/lucene/spatial3d/geom/BasePlanetObject.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class Bounds;
          class Plane;
          class GeoPoint;
          class PlanetModel;
          class Vector;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class GeoBaseCompositeShape : public ::org::apache::lucene::spatial3d::geom::BasePlanetObject {
           public:
            enum {
              mid_init$_fd580b4e02411290,
              mid_init$_5d2a2bec6164dbe8,
              mid_addShape_5d877c12516f50e3,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getBounds_bbfc0798cb5fe499,
              mid_getEdgePoints_e945274bd0921a4a,
              mid_getShape_3bec20a70e439f84,
              mid_hashCode_9972fcc56b44e79d,
              mid_intersects_e74435b8d47a8bda,
              mid_isWithin_ac70289ee56608c0,
              mid_isWithin_5afbc0f2c6478de6,
              mid_size_9972fcc56b44e79d,
              mid_write_02fcdace254a9894,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseCompositeShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseCompositeShape(const GeoBaseCompositeShape& obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {}

            GeoBaseCompositeShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
            GeoBaseCompositeShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);

            void addShape(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jboolean equals(const ::java::lang::Object &) const;
            void getBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > getEdgePoints() const;
            ::org::apache::lucene::spatial3d::geom::GeoShape getShape(jint) const;
            jint hashCode() const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean isWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseCompositeShape);
          extern PyTypeObject *PY_TYPE(GeoBaseCompositeShape);

          class t_GeoBaseCompositeShape {
          public:
            PyObject_HEAD
            GeoBaseCompositeShape object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GeoBaseCompositeShape *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GeoBaseCompositeShape&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GeoBaseCompositeShape&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
