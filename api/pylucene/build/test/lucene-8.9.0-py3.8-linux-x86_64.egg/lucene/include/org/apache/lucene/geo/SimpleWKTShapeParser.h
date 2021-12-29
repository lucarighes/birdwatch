#ifndef org_apache_lucene_geo_SimpleWKTShapeParser_H
#define org_apache_lucene_geo_SimpleWKTShapeParser_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class SimpleWKTShapeParser$ShapeType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class SimpleWKTShapeParser : public ::java::lang::Object {
         public:
          enum {
            mid_parse_c0a3c3394484d296,
            mid_parseExpectedType_f05287299b13a83e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleWKTShapeParser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleWKTShapeParser(const SimpleWKTShapeParser& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *COMMA;
          static ::java::lang::String *EMPTY;
          static ::java::lang::String *LPAREN;
          static ::java::lang::String *NAN$;
          static ::java::lang::String *RPAREN;
          static ::java::lang::String *SPACE;

          static ::java::lang::Object parse(const ::java::lang::String &);
          static ::java::lang::Object parseExpectedType(const ::java::lang::String &, const ::org::apache::lucene::geo::SimpleWKTShapeParser$ShapeType &);
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
        extern PyType_Def PY_TYPE_DEF(SimpleWKTShapeParser);
        extern PyTypeObject *PY_TYPE(SimpleWKTShapeParser);

        class t_SimpleWKTShapeParser {
        public:
          PyObject_HEAD
          SimpleWKTShapeParser object;
          static PyObject *wrap_Object(const SimpleWKTShapeParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
