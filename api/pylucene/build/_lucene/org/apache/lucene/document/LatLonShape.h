#ifndef org_apache_lucene_document_LatLonShape_H
#define org_apache_lucene_document_LatLonShape_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$QueryRelation;
        class Field;
      }
      namespace geo {
        class Polygon;
        class LatLonGeometry;
        class Line;
        class Circle;
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
      namespace document {

        class LatLonShape : public ::java::lang::Object {
         public:
          enum {
            mid_createIndexableFields_3c68b99c521ee3e0,
            mid_createIndexableFields_239f890b199edcb5,
            mid_createIndexableFields_b9ef7dc9350ba044,
            mid_newBoxQuery_c51d519254e61ba1,
            mid_newDistanceQuery_0c35bf065e6dcb5e,
            mid_newGeometryQuery_5d57fa89ea474605,
            mid_newLineQuery_130a76776e02e58d,
            mid_newPointQuery_258f6ffe1460d657,
            mid_newPolygonQuery_5e03a2ef6c182f00,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonShape(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonShape(const LatLonShape& obj) : ::java::lang::Object(obj) {}

          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::Line &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::Polygon &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::Circle > &);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::LatLonGeometry > &);
          static ::org::apache::lucene::search::Query newLineQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::Line > &);
          static ::org::apache::lucene::search::Query newPointQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< JArray< jdouble > > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::Polygon > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(LatLonShape);
        extern PyTypeObject *PY_TYPE(LatLonShape);

        class t_LatLonShape {
        public:
          PyObject_HEAD
          LatLonShape object;
          static PyObject *wrap_Object(const LatLonShape&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
