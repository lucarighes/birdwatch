#ifndef org_apache_lucene_util_AttributeReflector_H
#define org_apache_lucene_util_AttributeReflector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Attribute;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeReflector : public ::java::lang::Object {
         public:
          enum {
            mid_reflect_56880f9e3b5fb871,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeReflector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttributeReflector(const AttributeReflector& obj) : ::java::lang::Object(obj) {}

          void reflect(const ::java::lang::Class &, const ::java::lang::String &, const ::java::lang::Object &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(AttributeReflector);
        extern PyTypeObject *PY_TYPE(AttributeReflector);

        class t_AttributeReflector {
        public:
          PyObject_HEAD
          AttributeReflector object;
          static PyObject *wrap_Object(const AttributeReflector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
