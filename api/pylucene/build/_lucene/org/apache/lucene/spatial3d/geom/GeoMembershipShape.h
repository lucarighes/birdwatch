#ifndef org_apache_lucene_spatial3d_geom_GeoMembershipShape_H
#define org_apache_lucene_spatial3d_geom_GeoMembershipShape_H

#include "org/apache/lucene/spatial3d/geom/GeoShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoOutsideDistance;
          class Membership;
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

          class GeoMembershipShape : public ::org::apache::lucene::spatial3d::geom::GeoShape {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoMembershipShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoMembershipShape(const GeoMembershipShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoShape(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(GeoMembershipShape);
          extern PyTypeObject *PY_TYPE(GeoMembershipShape);

          class t_GeoMembershipShape {
          public:
            PyObject_HEAD
            GeoMembershipShape object;
            static PyObject *wrap_Object(const GeoMembershipShape&);
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
