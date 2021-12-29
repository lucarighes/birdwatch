#ifndef org_apache_lucene_geo_GeoEncodingUtils$Grid_H
#define org_apache_lucene_geo_GeoEncodingUtils$Grid_H

#include "java/lang/Object.h"

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

        class GeoEncodingUtils$Grid : public ::java::lang::Object {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoEncodingUtils$Grid(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoEncodingUtils$Grid(const GeoEncodingUtils$Grid& obj) : ::java::lang::Object(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(GeoEncodingUtils$Grid);
        extern PyTypeObject *PY_TYPE(GeoEncodingUtils$Grid);

        class t_GeoEncodingUtils$Grid {
        public:
          PyObject_HEAD
          GeoEncodingUtils$Grid object;
          static PyObject *wrap_Object(const GeoEncodingUtils$Grid&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
