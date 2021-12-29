#ifndef org_apache_lucene_spatial3d_geom_GeoBBox_H
#define org_apache_lucene_spatial3d_geom_GeoBBox_H

#include "org/apache/lucene/spatial3d/geom/GeoAreaShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoSizeable;
          class GeoBBox;
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

          class GeoBBox : public ::org::apache::lucene::spatial3d::geom::GeoAreaShape {
           public:
            enum {
              mid_expand_ced210f3e52c8970,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBBox(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoAreaShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBBox(const GeoBBox& obj) : ::org::apache::lucene::spatial3d::geom::GeoAreaShape(obj) {}

            GeoBBox expand(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBBox);
          extern PyTypeObject *PY_TYPE(GeoBBox);

          class t_GeoBBox {
          public:
            PyObject_HEAD
            GeoBBox object;
            static PyObject *wrap_Object(const GeoBBox&);
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
