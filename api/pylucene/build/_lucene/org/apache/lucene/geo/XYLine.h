#ifndef org_apache_lucene_geo_XYLine_H
#define org_apache_lucene_geo_XYLine_H

#include "org/apache/lucene/geo/XYGeometry.h"

namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class XYLine : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_890c72b2ae4788a0,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getX_62fe0e50f01d1bcf,
            mid_getX_384f078ef4b8f931,
            mid_getY_62fe0e50f01d1bcf,
            mid_getY_384f078ef4b8f931,
            mid_hashCode_9972fcc56b44e79d,
            mid_numPoints_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            mid_toComponent2D_6fe8ae19c34b6817,
            max_mid
          };

          enum {
            fid_maxX,
            fid_maxY,
            fid_minX,
            fid_minY,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYLine(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYLine(const XYLine& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          jfloat _get_maxX() const;
          jfloat _get_maxY() const;
          jfloat _get_minX() const;
          jfloat _get_minY() const;

          XYLine(const JArray< jfloat > &, const JArray< jfloat > &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< jfloat > getX() const;
          jfloat getX(jint) const;
          JArray< jfloat > getY() const;
          jfloat getY(jint) const;
          jint hashCode() const;
          jint numPoints() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(XYLine);
        extern PyTypeObject *PY_TYPE(XYLine);

        class t_XYLine {
        public:
          PyObject_HEAD
          XYLine object;
          static PyObject *wrap_Object(const XYLine&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
