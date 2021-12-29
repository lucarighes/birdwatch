#ifndef org_apache_lucene_spatial3d_geom_GeoBaseCompositeMembershipShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseCompositeMembershipShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class DistanceStyle;
          class GeoMembershipShape;
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

          class GeoBaseCompositeMembershipShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeShape {
           public:
            enum {
              mid_computeOutsideDistance_d330d2576549fa67,
              mid_computeOutsideDistance_2b407c8141eb9589,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseCompositeMembershipShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseCompositeMembershipShape(const GeoBaseCompositeMembershipShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeShape(obj) {}

            jdouble computeOutsideDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeOutsideDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseCompositeMembershipShape);
          extern PyTypeObject *PY_TYPE(GeoBaseCompositeMembershipShape);

          class t_GeoBaseCompositeMembershipShape {
          public:
            PyObject_HEAD
            GeoBaseCompositeMembershipShape object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GeoBaseCompositeMembershipShape *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GeoBaseCompositeMembershipShape&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GeoBaseCompositeMembershipShape&, PyTypeObject *);
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
