#ifndef org_apache_lucene_spatial3d_geom_Bounded_H
#define org_apache_lucene_spatial3d_geom_Bounded_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Bounds;
        }
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
      namespace spatial3d {
        namespace geom {

          class Bounded : public ::java::lang::Object {
           public:
            enum {
              mid_getBounds_bbfc0798cb5fe499,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Bounded(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Bounded(const Bounded& obj) : ::java::lang::Object(obj) {}

            void getBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &) const;
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
          extern PyType_Def PY_TYPE_DEF(Bounded);
          extern PyTypeObject *PY_TYPE(Bounded);

          class t_Bounded {
          public:
            PyObject_HEAD
            Bounded object;
            static PyObject *wrap_Object(const Bounded&);
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
