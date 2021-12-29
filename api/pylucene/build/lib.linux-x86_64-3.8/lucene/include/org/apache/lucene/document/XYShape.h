#ifndef org_apache_lucene_document_XYShape_H
#define org_apache_lucene_document_XYShape_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class XYLine;
        class XYCircle;
        class XYGeometry;
        class XYPolygon;
      }
      namespace document {
        class ShapeField$QueryRelation;
        class Field;
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

        class XYShape : public ::java::lang::Object {
         public:
          enum {
            mid_createIndexableFields_30ac98905778e3c3,
            mid_createIndexableFields_52eecb754284607b,
            mid_createIndexableFields_b48f0644f19df5aa,
            mid_newBoxQuery_122268601498eb0a,
            mid_newDistanceQuery_9996115ae66598ac,
            mid_newGeometryQuery_05fc42701ff9dcda,
            mid_newLineQuery_f2e9471f5b230e29,
            mid_newPointQuery_6c273a6ac90c80fa,
            mid_newPolygonQuery_3b493efcfc5fba8a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYShape(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYShape(const XYShape& obj) : ::java::lang::Object(obj) {}

          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::XYLine &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::XYPolygon &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jfloat, jfloat, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYCircle > &);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYGeometry > &);
          static ::org::apache::lucene::search::Query newLineQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYLine > &);
          static ::org::apache::lucene::search::Query newPointQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< JArray< jfloat > > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYPolygon > &);
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
        extern PyType_Def PY_TYPE_DEF(XYShape);
        extern PyTypeObject *PY_TYPE(XYShape);

        class t_XYShape {
        public:
          PyObject_HEAD
          XYShape object;
          static PyObject *wrap_Object(const XYShape&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
