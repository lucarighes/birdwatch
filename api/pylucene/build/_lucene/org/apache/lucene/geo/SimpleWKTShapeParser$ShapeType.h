#ifndef org_apache_lucene_geo_SimpleWKTShapeParser$ShapeType_H
#define org_apache_lucene_geo_SimpleWKTShapeParser$ShapeType_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class SimpleWKTShapeParser$ShapeType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class SimpleWKTShapeParser$ShapeType : public ::java::lang::Enum {
         public:
          enum {
            mid_forName_7a451c652215bc4b,
            mid_valueOf_7a451c652215bc4b,
            mid_values_f0efee1493daf2bf,
            mid_wktName_db9b55ba01e03e4b,
            mid_typename_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleWKTShapeParser$ShapeType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleWKTShapeParser$ShapeType(const SimpleWKTShapeParser$ShapeType& obj) : ::java::lang::Enum(obj) {}

          static SimpleWKTShapeParser$ShapeType *ENVELOPE;
          static SimpleWKTShapeParser$ShapeType *GEOMETRYCOLLECTION;
          static SimpleWKTShapeParser$ShapeType *LINESTRING;
          static SimpleWKTShapeParser$ShapeType *MULTILINESTRING;
          static SimpleWKTShapeParser$ShapeType *MULTIPOINT;
          static SimpleWKTShapeParser$ShapeType *MULTIPOLYGON;
          static SimpleWKTShapeParser$ShapeType *POINT;
          static SimpleWKTShapeParser$ShapeType *POLYGON;

          static SimpleWKTShapeParser$ShapeType forName(const ::java::lang::String &);
          static SimpleWKTShapeParser$ShapeType valueOf(const ::java::lang::String &);
          static JArray< SimpleWKTShapeParser$ShapeType > values();
          ::java::lang::String wktName() const;
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
        extern PyType_Def PY_TYPE_DEF(SimpleWKTShapeParser$ShapeType);
        extern PyTypeObject *PY_TYPE(SimpleWKTShapeParser$ShapeType);

        class t_SimpleWKTShapeParser$ShapeType {
        public:
          PyObject_HEAD
          SimpleWKTShapeParser$ShapeType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SimpleWKTShapeParser$ShapeType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SimpleWKTShapeParser$ShapeType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SimpleWKTShapeParser$ShapeType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
