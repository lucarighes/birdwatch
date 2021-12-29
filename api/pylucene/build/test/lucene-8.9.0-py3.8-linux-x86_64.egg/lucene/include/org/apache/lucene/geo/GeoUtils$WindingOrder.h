#ifndef org_apache_lucene_geo_GeoUtils$WindingOrder_H
#define org_apache_lucene_geo_GeoUtils$WindingOrder_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class GeoUtils$WindingOrder;
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

        class GeoUtils$WindingOrder : public ::java::lang::Enum {
         public:
          enum {
            mid_fromSign_740bc8d5c52bdd49,
            mid_sign_9972fcc56b44e79d,
            mid_valueOf_d952a9127640d734,
            mid_values_fa0c0ba958b4a333,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeoUtils$WindingOrder(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeoUtils$WindingOrder(const GeoUtils$WindingOrder& obj) : ::java::lang::Enum(obj) {}

          static GeoUtils$WindingOrder *CCW;
          static GeoUtils$WindingOrder *COLINEAR;
          static GeoUtils$WindingOrder *CW;

          static GeoUtils$WindingOrder fromSign(jint);
          jint sign() const;
          static GeoUtils$WindingOrder valueOf(const ::java::lang::String &);
          static JArray< GeoUtils$WindingOrder > values();
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
        extern PyType_Def PY_TYPE_DEF(GeoUtils$WindingOrder);
        extern PyTypeObject *PY_TYPE(GeoUtils$WindingOrder);

        class t_GeoUtils$WindingOrder {
        public:
          PyObject_HEAD
          GeoUtils$WindingOrder object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_GeoUtils$WindingOrder *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const GeoUtils$WindingOrder&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const GeoUtils$WindingOrder&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
