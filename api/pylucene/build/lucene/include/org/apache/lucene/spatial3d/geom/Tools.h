#ifndef org_apache_lucene_spatial3d_geom_Tools_H
#define org_apache_lucene_spatial3d_geom_Tools_H

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
      namespace spatial3d {
        namespace geom {

          class Tools : public ::java::lang::Object {
           public:
            enum {
              mid_safeAcos_d089f34703408a66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Tools(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Tools(const Tools& obj) : ::java::lang::Object(obj) {}

            static jdouble safeAcos(jdouble);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(Tools);
          extern PyTypeObject *PY_TYPE(Tools);

          class t_Tools {
          public:
            PyObject_HEAD
            Tools object;
            static PyObject *wrap_Object(const Tools&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
