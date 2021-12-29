#ifndef org_apache_lucene_spatial3d_geom_GeoPolygonFactory$PolygonDescription_H
#define org_apache_lucene_spatial3d_geom_GeoPolygonFactory$PolygonDescription_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoPoint;
          class GeoPolygonFactory$PolygonDescription;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class GeoPolygonFactory$PolygonDescription : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d03990be0130160d,
              mid_init$_c734de9369b606d5,
              max_mid
            };

            enum {
              fid_holes,
              fid_points,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPolygonFactory$PolygonDescription(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPolygonFactory$PolygonDescription(const GeoPolygonFactory$PolygonDescription& obj) : ::java::lang::Object(obj) {}

            ::java::util::List _get_holes() const;
            ::java::util::List _get_points() const;

            GeoPolygonFactory$PolygonDescription(const ::java::util::List &);
            GeoPolygonFactory$PolygonDescription(const ::java::util::List &, const ::java::util::List &);
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
          extern PyType_Def PY_TYPE_DEF(GeoPolygonFactory$PolygonDescription);
          extern PyTypeObject *PY_TYPE(GeoPolygonFactory$PolygonDescription);

          class t_GeoPolygonFactory$PolygonDescription {
          public:
            PyObject_HEAD
            GeoPolygonFactory$PolygonDescription object;
            static PyObject *wrap_Object(const GeoPolygonFactory$PolygonDescription&);
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
