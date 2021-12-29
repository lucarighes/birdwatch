#ifndef org_apache_lucene_spatial3d_geom_SidedPlane_H
#define org_apache_lucene_spatial3d_geom_SidedPlane_H

#include "org/apache/lucene/spatial3d/geom/Plane.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class SidedPlane;
          class PlanetModel;
          class Vector;
          class Membership;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class SidedPlane : public ::org::apache::lucene::spatial3d::geom::Plane {
           public:
            enum {
              mid_init$_b51abdbbf62b08b6,
              mid_init$_d3aedc82f030f463,
              mid_init$_85d2716b2576641f,
              mid_init$_eb9cf036efb70b22,
              mid_init$_fb8239e4815ab633,
              mid_init$_d879e4a38d970ccc,
              mid_init$_b3ae4bb8476b6443,
              mid_init$_e3db414f8ab2534c,
              mid_init$_a94edfa2178014c0,
              mid_init$_40c400a2784c3802,
              mid_constructNormalizedPerpendicularSidedPlane_ef8bd49696d0eb2b,
              mid_constructNormalizedThreePointSidedPlane_ef8bd49696d0eb2b,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_isWithin_5afbc0f2c6478de6,
              mid_strictlyWithin_ac70289ee56608c0,
              mid_strictlyWithin_5afbc0f2c6478de6,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_sigNum,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SidedPlane(jobject obj) : ::org::apache::lucene::spatial3d::geom::Plane(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SidedPlane(const SidedPlane& obj) : ::org::apache::lucene::spatial3d::geom::Plane(obj) {}

            jdouble _get_sigNum() const;

            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, jboolean, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble, jdouble);
            SidedPlane(jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble, jdouble, jdouble);

            static SidedPlane constructNormalizedPerpendicularSidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            static SidedPlane constructNormalizedThreePointSidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
            jboolean strictlyWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean strictlyWithin(jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(SidedPlane);
          extern PyTypeObject *PY_TYPE(SidedPlane);

          class t_SidedPlane {
          public:
            PyObject_HEAD
            SidedPlane object;
            static PyObject *wrap_Object(const SidedPlane&);
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
