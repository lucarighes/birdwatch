#ifndef org_apache_lucene_spatial3d_geom_GeoBaseCompositeAreaShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseCompositeAreaShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeMembershipShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class GeoAreaShape;
          class PlanetModel;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
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

          class GeoBaseCompositeAreaShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeMembershipShape {
           public:
            enum {
              mid_init$_fd580b4e02411290,
              mid_init$_5d2a2bec6164dbe8,
              mid_getRelationship_2e0040c09ede6a59,
              mid_intersects_19eac5b582956b3c,
              mid_isShapeInsideGeoAreaShape_2e0040c09ede6a59,
              mid_isGeoAreaShapeInsideShape_2e0040c09ede6a59,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseCompositeAreaShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeMembershipShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseCompositeAreaShape(const GeoBaseCompositeAreaShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeMembershipShape(obj) {}

            GeoBaseCompositeAreaShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
            GeoBaseCompositeAreaShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);

            jint getRelationship(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseCompositeAreaShape);
          extern PyTypeObject *PY_TYPE(GeoBaseCompositeAreaShape);

          class t_GeoBaseCompositeAreaShape {
          public:
            PyObject_HEAD
            GeoBaseCompositeAreaShape object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GeoBaseCompositeAreaShape *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GeoBaseCompositeAreaShape&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GeoBaseCompositeAreaShape&, PyTypeObject *);
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
