#ifndef org_apache_lucene_spatial3d_geom_GeoCircle_H
#define org_apache_lucene_spatial3d_geom_GeoCircle_H

#include "org/apache/lucene/spatial3d/geom/GeoDistanceShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoSizeable;
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

          class GeoCircle : public ::org::apache::lucene::spatial3d::geom::GeoDistanceShape {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoCircle(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoDistanceShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoCircle(const GeoCircle& obj) : ::org::apache::lucene::spatial3d::geom::GeoDistanceShape(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(GeoCircle);
          extern PyTypeObject *PY_TYPE(GeoCircle);

          class t_GeoCircle {
          public:
            PyObject_HEAD
            GeoCircle object;
            static PyObject *wrap_Object(const GeoCircle&);
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
