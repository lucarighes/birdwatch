#ifndef org_apache_lucene_geo_Tessellator_H
#define org_apache_lucene_geo_Tessellator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Polygon;
        class XYPolygon;
        class Tessellator$Triangle;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Tessellator : public ::java::lang::Object {
         public:
          enum {
            mid_linesIntersect_d68abb61fe1c2fa4,
            mid_pointInPolygon_975740391924ad03,
            mid_pointInTriangle_d68abb61fe1c2fa4,
            mid_tessellate_6a7b8041a03944fd,
            mid_tessellate_7a8691b197f14a20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tessellator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tessellator(const Tessellator& obj) : ::java::lang::Object(obj) {}

          static jboolean linesIntersect(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static jboolean pointInPolygon(const ::java::util::List &, jdouble, jdouble);
          static jboolean pointInTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::Polygon &);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::XYPolygon &);
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
        extern PyType_Def PY_TYPE_DEF(Tessellator);
        extern PyTypeObject *PY_TYPE(Tessellator);

        class t_Tessellator {
        public:
          PyObject_HEAD
          Tessellator object;
          static PyObject *wrap_Object(const Tessellator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
