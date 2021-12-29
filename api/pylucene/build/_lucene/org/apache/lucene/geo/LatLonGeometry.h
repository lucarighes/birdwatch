#ifndef org_apache_lucene_geo_LatLonGeometry_H
#define org_apache_lucene_geo_LatLonGeometry_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class LatLonGeometry;
        class Component2D;
      }
    }
  }
}
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

        class LatLonGeometry : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_create_f043f2dadf50f8a4,
            mid_toComponent2D_6fe8ae19c34b6817,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonGeometry(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonGeometry(const LatLonGeometry& obj) : ::java::lang::Object(obj) {}

          LatLonGeometry();

          static ::org::apache::lucene::geo::Component2D create(const JArray< LatLonGeometry > &);
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
        extern PyType_Def PY_TYPE_DEF(LatLonGeometry);
        extern PyTypeObject *PY_TYPE(LatLonGeometry);

        class t_LatLonGeometry {
        public:
          PyObject_HEAD
          LatLonGeometry object;
          static PyObject *wrap_Object(const LatLonGeometry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
