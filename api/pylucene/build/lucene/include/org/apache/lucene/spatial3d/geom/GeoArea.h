#ifndef org_apache_lucene_spatial3d_geom_GeoArea_H
#define org_apache_lucene_spatial3d_geom_GeoArea_H

#include "org/apache/lucene/spatial3d/geom/Membership.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
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

          class GeoArea : public ::org::apache::lucene::spatial3d::geom::Membership {
           public:
            enum {
              mid_getRelationship_2e0040c09ede6a59,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoArea(jobject obj) : ::org::apache::lucene::spatial3d::geom::Membership(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoArea(const GeoArea& obj) : ::org::apache::lucene::spatial3d::geom::Membership(obj) {}

            static jint CONTAINS;
            static jint DISJOINT;
            static jint OVERLAPS;
            static jint WITHIN;

            jint getRelationship(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoArea);
          extern PyTypeObject *PY_TYPE(GeoArea);

          class t_GeoArea {
          public:
            PyObject_HEAD
            GeoArea object;
            static PyObject *wrap_Object(const GeoArea&);
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
