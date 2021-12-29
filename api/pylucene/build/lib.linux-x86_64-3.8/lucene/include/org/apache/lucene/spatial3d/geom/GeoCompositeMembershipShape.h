#ifndef org_apache_lucene_spatial3d_geom_GeoCompositeMembershipShape_H
#define org_apache_lucene_spatial3d_geom_GeoCompositeMembershipShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeMembershipShape.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoMembershipShape;
          class PlanetModel;
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

          class GeoCompositeMembershipShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeMembershipShape {
           public:
            enum {
              mid_init$_fd580b4e02411290,
              mid_init$_fa69e987247475d8,
              mid_equals_8b72f2dcdde6fd1d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoCompositeMembershipShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeMembershipShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoCompositeMembershipShape(const GeoCompositeMembershipShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeMembershipShape(obj) {}

            GeoCompositeMembershipShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
            GeoCompositeMembershipShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);

            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(GeoCompositeMembershipShape);
          extern PyTypeObject *PY_TYPE(GeoCompositeMembershipShape);

          class t_GeoCompositeMembershipShape {
          public:
            PyObject_HEAD
            GeoCompositeMembershipShape object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GeoCompositeMembershipShape *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GeoCompositeMembershipShape&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GeoCompositeMembershipShape&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
