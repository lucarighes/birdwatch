#ifndef org_apache_lucene_spatial3d_geom_GeoOutsideDistance_H
#define org_apache_lucene_spatial3d_geom_GeoOutsideDistance_H

#include "org/apache/lucene/spatial3d/geom/Membership.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class DistanceStyle;
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

          class GeoOutsideDistance : public ::org::apache::lucene::spatial3d::geom::Membership {
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

            explicit GeoOutsideDistance(jobject obj) : ::org::apache::lucene::spatial3d::geom::Membership(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoOutsideDistance(const GeoOutsideDistance& obj) : ::org::apache::lucene::spatial3d::geom::Membership(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(GeoOutsideDistance);
          extern PyTypeObject *PY_TYPE(GeoOutsideDistance);

          class t_GeoOutsideDistance {
          public:
            PyObject_HEAD
            GeoOutsideDistance object;
            static PyObject *wrap_Object(const GeoOutsideDistance&);
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
