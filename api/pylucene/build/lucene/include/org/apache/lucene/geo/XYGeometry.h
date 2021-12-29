#ifndef org_apache_lucene_geo_XYGeometry_H
#define org_apache_lucene_geo_XYGeometry_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class XYGeometry;
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

        class XYGeometry : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_create_4a870eefc5e60720,
            mid_toComponent2D_6fe8ae19c34b6817,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYGeometry(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYGeometry(const XYGeometry& obj) : ::java::lang::Object(obj) {}

          XYGeometry();

          static ::org::apache::lucene::geo::Component2D create(const JArray< XYGeometry > &);
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
        extern PyType_Def PY_TYPE_DEF(XYGeometry);
        extern PyTypeObject *PY_TYPE(XYGeometry);

        class t_XYGeometry {
        public:
          PyObject_HEAD
          XYGeometry object;
          static PyObject *wrap_Object(const XYGeometry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
