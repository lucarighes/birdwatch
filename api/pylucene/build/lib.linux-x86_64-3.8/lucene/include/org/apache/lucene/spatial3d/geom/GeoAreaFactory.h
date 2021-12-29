#ifndef org_apache_lucene_spatial3d_geom_GeoAreaFactory_H
#define org_apache_lucene_spatial3d_geom_GeoAreaFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoArea;
          class PlanetModel;
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

          class GeoAreaFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeGeoArea_08797024414c3a13,
              mid_makeGeoArea_d1e92a8e866423d8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoAreaFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoAreaFactory(const GeoAreaFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::GeoArea makeGeoArea(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble);
            static ::org::apache::lucene::spatial3d::geom::GeoArea makeGeoArea(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
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
          extern PyType_Def PY_TYPE_DEF(GeoAreaFactory);
          extern PyTypeObject *PY_TYPE(GeoAreaFactory);

          class t_GeoAreaFactory {
          public:
            PyObject_HEAD
            GeoAreaFactory object;
            static PyObject *wrap_Object(const GeoAreaFactory&);
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
