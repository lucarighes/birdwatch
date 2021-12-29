#ifndef org_apache_lucene_geo_GeoEncodingUtils$DistancePredicate_H
#define org_apache_lucene_geo_GeoEncodingUtils$DistancePredicate_H

#include "org/apache/lucene/geo/GeoEncodingUtils$Grid.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class GeoEncodingUtils$DistancePredicate : public ::org::apache::lucene::geo::GeoEncodingUtils$Grid {
         public:
          enum {
            mid_test_fd32c163183a36f2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoEncodingUtils$DistancePredicate(jobject obj) : ::org::apache::lucene::geo::GeoEncodingUtils$Grid(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoEncodingUtils$DistancePredicate(const GeoEncodingUtils$DistancePredicate& obj) : ::org::apache::lucene::geo::GeoEncodingUtils$Grid(obj) {}

          jboolean test(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(GeoEncodingUtils$DistancePredicate);
        extern PyTypeObject *PY_TYPE(GeoEncodingUtils$DistancePredicate);

        class t_GeoEncodingUtils$DistancePredicate {
        public:
          PyObject_HEAD
          GeoEncodingUtils$DistancePredicate object;
          static PyObject *wrap_Object(const GeoEncodingUtils$DistancePredicate&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
