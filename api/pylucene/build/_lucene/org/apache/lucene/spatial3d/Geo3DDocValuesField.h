#ifndef org_apache_lucene_spatial3d_Geo3DDocValuesField_H
#define org_apache_lucene_spatial3d_Geo3DDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField;
      }
      namespace geo {
        class Polygon;
      }
      namespace document {
        class FieldType;
      }
      namespace spatial3d {
        namespace geom {
          class GeoPoint;
          class PlanetModel;
        }
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

        class Geo3DDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_df932b85bfbb9ed8,
            mid_init$_0d2c6b285dd24a8f,
            mid_newDistanceSort_d6cdf261af2cf821,
            mid_newOutsideBoxSort_f26d2875fb5bc384,
            mid_newOutsideDistanceSort_d6cdf261af2cf821,
            mid_newOutsideLargePolygonSort_36f9326a8d46c894,
            mid_newOutsidePathSort_516bdfa7d6ecadda,
            mid_newOutsidePolygonSort_36f9326a8d46c894,
            mid_newPathSort_516bdfa7d6ecadda,
            mid_setLocationValue_f70971cd727936b7,
            mid_setLocationValue_2a4b7af5c9ed138c,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Geo3DDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Geo3DDocValuesField(const Geo3DDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          Geo3DDocValuesField(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          Geo3DDocValuesField(const ::java::lang::String &, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

          static ::org::apache::lucene::search::SortField newDistanceSort(const ::java::lang::String &, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsideBoxSort(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsideDistanceSort(const ::java::lang::String &, jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsideLargePolygonSort(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::SortField newOutsidePathSort(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::SortField newOutsidePolygonSort(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::SortField newPathSort(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          void setLocationValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
          void setLocationValue(jdouble, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(Geo3DDocValuesField);
        extern PyTypeObject *PY_TYPE(Geo3DDocValuesField);

        class t_Geo3DDocValuesField {
        public:
          PyObject_HEAD
          Geo3DDocValuesField object;
          static PyObject *wrap_Object(const Geo3DDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
