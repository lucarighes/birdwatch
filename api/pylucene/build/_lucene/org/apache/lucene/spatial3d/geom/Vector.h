#ifndef org_apache_lucene_spatial3d_geom_Vector_H
#define org_apache_lucene_spatial3d_geom_Vector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Vector;
          class Membership;
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

          class Vector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b51abdbbf62b08b6,
              mid_init$_2a4b7af5c9ed138c,
              mid_init$_8a692b267f78bb5c,
              mid_init$_5d062ae8b01cf1b7,
              mid_crossProductEvaluateIsZero_f722fcb5e2446aa4,
              mid_dotProduct_eeff1bdc68694797,
              mid_dotProduct_5fe2cd44fc854b0c,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_isNumericallyIdentical_ac70289ee56608c0,
              mid_isNumericallyIdentical_5afbc0f2c6478de6,
              mid_isParallel_ac70289ee56608c0,
              mid_isParallel_5afbc0f2c6478de6,
              mid_isWithin_201d2a5698c3f8c8,
              mid_linearDistance_eeff1bdc68694797,
              mid_linearDistance_5fe2cd44fc854b0c,
              mid_linearDistanceSquared_eeff1bdc68694797,
              mid_linearDistanceSquared_5fe2cd44fc854b0c,
              mid_magnitude_8c74b787998ce4bc,
              mid_magnitude_5fe2cd44fc854b0c,
              mid_normalDistance_eeff1bdc68694797,
              mid_normalDistance_5fe2cd44fc854b0c,
              mid_normalDistanceSquared_eeff1bdc68694797,
              mid_normalDistanceSquared_5fe2cd44fc854b0c,
              mid_normalize_2106bddd563d95e8,
              mid_rotateXY_ab1c84f96fc07d8b,
              mid_rotateXY_7cc793041bb6428f,
              mid_rotateXZ_ab1c84f96fc07d8b,
              mid_rotateXZ_7cc793041bb6428f,
              mid_rotateZY_ab1c84f96fc07d8b,
              mid_rotateZY_7cc793041bb6428f,
              mid_toString_db9b55ba01e03e4b,
              mid_translate_c40eadf14e9fd145,
              max_mid
            };

            enum {
              fid_x,
              fid_y,
              fid_z,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vector(const Vector& obj) : ::java::lang::Object(obj) {}

            static jdouble MINIMUM_ANGULAR_RESOLUTION;
            static jdouble MINIMUM_RESOLUTION;
            static jdouble MINIMUM_RESOLUTION_CUBED;
            static jdouble MINIMUM_RESOLUTION_SQUARED;

            jdouble _get_x() const;
            jdouble _get_y() const;
            jdouble _get_z() const;

            Vector(const Vector &, const Vector &);
            Vector(jdouble, jdouble, jdouble);
            Vector(const Vector &, jdouble, jdouble, jdouble);
            Vector(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

            static jboolean crossProductEvaluateIsZero(const Vector &, const Vector &, const Vector &);
            jdouble dotProduct(const Vector &) const;
            jdouble dotProduct(jdouble, jdouble, jdouble) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isNumericallyIdentical(const Vector &) const;
            jboolean isNumericallyIdentical(jdouble, jdouble, jdouble) const;
            jboolean isParallel(const Vector &) const;
            jboolean isParallel(jdouble, jdouble, jdouble) const;
            jboolean isWithin(const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistance(const Vector &) const;
            jdouble linearDistance(jdouble, jdouble, jdouble) const;
            jdouble linearDistanceSquared(const Vector &) const;
            jdouble linearDistanceSquared(jdouble, jdouble, jdouble) const;
            jdouble magnitude() const;
            static jdouble magnitude(jdouble, jdouble, jdouble);
            jdouble normalDistance(const Vector &) const;
            jdouble normalDistance(jdouble, jdouble, jdouble) const;
            jdouble normalDistanceSquared(const Vector &) const;
            jdouble normalDistanceSquared(jdouble, jdouble, jdouble) const;
            Vector normalize() const;
            Vector rotateXY(jdouble) const;
            Vector rotateXY(jdouble, jdouble) const;
            Vector rotateXZ(jdouble) const;
            Vector rotateXZ(jdouble, jdouble) const;
            Vector rotateZY(jdouble) const;
            Vector rotateZY(jdouble, jdouble) const;
            ::java::lang::String toString() const;
            Vector translate(jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(Vector);
          extern PyTypeObject *PY_TYPE(Vector);

          class t_Vector {
          public:
            PyObject_HEAD
            Vector object;
            static PyObject *wrap_Object(const Vector&);
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
