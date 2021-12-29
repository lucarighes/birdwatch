#ifndef org_apache_lucene_spatial3d_geom_GeoBBoxFactory_H
#define org_apache_lucene_spatial3d_geom_GeoBBoxFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoBBox;
          class LatLonBounds;
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

          class GeoBBoxFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeGeoBBox_d1190951764d3a47,
              mid_makeGeoBBox_d1e0bbc9fe8d88b9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBBoxFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBBoxFactory(const GeoBBoxFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::GeoBBox makeGeoBBox(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::LatLonBounds &);
            static ::org::apache::lucene::spatial3d::geom::GeoBBox makeGeoBBox(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble);
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
          extern PyType_Def PY_TYPE_DEF(GeoBBoxFactory);
          extern PyTypeObject *PY_TYPE(GeoBBoxFactory);

          class t_GeoBBoxFactory {
          public:
            PyObject_HEAD
            GeoBBoxFactory object;
            static PyObject *wrap_Object(const GeoBBoxFactory&);
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
