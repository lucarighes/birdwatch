#ifndef org_apache_lucene_document_LatLonPoint_H
#define org_apache_lucene_document_LatLonPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$QueryRelation;
        class FieldType;
      }
      namespace geo {
        class Polygon;
        class LatLonGeometry;
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

        class LatLonPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_afcb65cb7af1d628,
            mid_newBoxQuery_a7f4245a62724723,
            mid_newDistanceFeatureQuery_4a588aef530f566b,
            mid_newDistanceQuery_42a7446eeb740739,
            mid_newGeometryQuery_5d57fa89ea474605,
            mid_newPolygonQuery_5f62a5e692542815,
            mid_setLocationValue_75a41c58a4d52f7d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonPoint(const LatLonPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;
          static ::org::apache::lucene::document::FieldType *TYPE;

          LatLonPoint(const ::java::lang::String &, jdouble, jdouble);

          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceFeatureQuery(const ::java::lang::String &, jfloat, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::LatLonGeometry > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          void setLocationValue(jdouble, jdouble) const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(LatLonPoint);
        extern PyTypeObject *PY_TYPE(LatLonPoint);

        class t_LatLonPoint {
        public:
          PyObject_HEAD
          LatLonPoint object;
          static PyObject *wrap_Object(const LatLonPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
