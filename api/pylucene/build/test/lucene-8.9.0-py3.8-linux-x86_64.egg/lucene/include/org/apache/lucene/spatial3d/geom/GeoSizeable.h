#ifndef org_apache_lucene_spatial3d_geom_GeoSizeable_H
#define org_apache_lucene_spatial3d_geom_GeoSizeable_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
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

          class GeoSizeable : public ::java::lang::Object {
           public:
            enum {
              mid_getCenter_9ece33e8c05297a2,
              mid_getRadius_8c74b787998ce4bc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoSizeable(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoSizeable(const GeoSizeable& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::spatial3d::geom::GeoPoint getCenter() const;
            jdouble getRadius() const;
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
          extern PyType_Def PY_TYPE_DEF(GeoSizeable);
          extern PyTypeObject *PY_TYPE(GeoSizeable);

          class t_GeoSizeable {
          public:
            PyObject_HEAD
            GeoSizeable object;
            static PyObject *wrap_Object(const GeoSizeable&);
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
