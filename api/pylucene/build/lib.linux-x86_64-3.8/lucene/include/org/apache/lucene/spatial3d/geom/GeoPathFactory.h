#ifndef org_apache_lucene_spatial3d_geom_GeoPathFactory_H
#define org_apache_lucene_spatial3d_geom_GeoPathFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPath;
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

          class GeoPathFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeGeoPath_16ba42f4abef7e5b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPathFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPathFactory(const GeoPathFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::GeoPath makeGeoPath(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &);
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
          extern PyType_Def PY_TYPE_DEF(GeoPathFactory);
          extern PyTypeObject *PY_TYPE(GeoPathFactory);

          class t_GeoPathFactory {
          public:
            PyObject_HEAD
            GeoPathFactory object;
            static PyObject *wrap_Object(const GeoPathFactory&);
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
