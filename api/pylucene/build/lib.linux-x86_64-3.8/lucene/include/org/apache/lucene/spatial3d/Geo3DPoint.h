#ifndef org_apache_lucene_spatial3d_Geo3DPoint_H
#define org_apache_lucene_spatial3d_Geo3DPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class PlanetModel;
        }
      }
      namespace geo {
        class Polygon;
      }
      namespace document {
        class FieldType;
      }
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {

        class Geo3DPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_afcb65cb7af1d628,
            mid_init$_17adafe4d08eda14,
            mid_init$_1f63bbbe18d3a11f,
            mid_init$_0e6640dccc90e4ae,
            mid_decodeDimension_dc9104b34ca053d9,
            mid_encodeDimension_a4367f7fddb149ad,
            mid_newBoxQuery_48ebeb2ba1781e3b,
            mid_newDistanceQuery_31d31bcf9aec3f2f,
            mid_newLargePolygonQuery_f4fa056de9392315,
            mid_newPathQuery_14c8945f1d8beb70,
            mid_newPolygonQuery_f4fa056de9392315,
            mid_newShapeQuery_bac55785dfc8930b,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Geo3DPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Geo3DPoint(const Geo3DPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          Geo3DPoint(const ::java::lang::String &, jdouble, jdouble);
          Geo3DPoint(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble);
          Geo3DPoint(const ::java::lang::String &, jdouble, jdouble, jdouble);
          Geo3DPoint(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);

          static jdouble decodeDimension(const JArray< jbyte > &, jint, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static void encodeDimension(jdouble, const JArray< jbyte > &, jint, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newLargePolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::Query newPathQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::Query newShapeQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::GeoShape &);
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
      namespace spatial3d {
        extern PyType_Def PY_TYPE_DEF(Geo3DPoint);
        extern PyTypeObject *PY_TYPE(Geo3DPoint);

        class t_Geo3DPoint {
        public:
          PyObject_HEAD
          Geo3DPoint object;
          static PyObject *wrap_Object(const Geo3DPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
