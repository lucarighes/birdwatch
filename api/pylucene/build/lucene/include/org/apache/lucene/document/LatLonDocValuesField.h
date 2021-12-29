#ifndef org_apache_lucene_document_LatLonDocValuesField_H
#define org_apache_lucene_document_LatLonDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$QueryRelation;
        class FieldType;
      }
      namespace search {
        class SortField;
        class Query;
      }
      namespace geo {
        class Polygon;
        class LatLonGeometry;
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

        class LatLonDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_afcb65cb7af1d628,
            mid_newDistanceSort_d1d3191139d0b079,
            mid_newSlowBoxQuery_a7f4245a62724723,
            mid_newSlowDistanceQuery_42a7446eeb740739,
            mid_newSlowGeometryQuery_5d57fa89ea474605,
            mid_newSlowPolygonQuery_5f62a5e692542815,
            mid_setLocationValue_75a41c58a4d52f7d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonDocValuesField(const LatLonDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          LatLonDocValuesField(const ::java::lang::String &, jdouble, jdouble);

          static ::org::apache::lucene::search::SortField newDistanceSort(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSlowBoxQuery(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSlowDistanceQuery(const ::java::lang::String &, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSlowGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::LatLonGeometry > &);
          static ::org::apache::lucene::search::Query newSlowPolygonQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::Polygon > &);
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
        extern PyType_Def PY_TYPE_DEF(LatLonDocValuesField);
        extern PyTypeObject *PY_TYPE(LatLonDocValuesField);

        class t_LatLonDocValuesField {
        public:
          PyObject_HEAD
          LatLonDocValuesField object;
          static PyObject *wrap_Object(const LatLonDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
