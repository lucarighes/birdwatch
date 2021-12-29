#ifndef org_apache_lucene_util_VirtualMethod_H
#define org_apache_lucene_util_VirtualMethod_H

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
        class VirtualMethod;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class VirtualMethod : public ::java::lang::Object {
         public:
          enum {
            mid_init$_964f65252724d9c3,
            mid_compareImplementationDistance_3605bae2696bde80,
            mid_getImplementationDistance_875e194d815181e4,
            mid_isOverriddenAsOf_a895c7f53785ebe6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VirtualMethod(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          VirtualMethod(const VirtualMethod& obj) : ::java::lang::Object(obj) {}

          VirtualMethod(const ::java::lang::Class &, const ::java::lang::String &, const JArray< ::java::lang::Class > &);

          static jint compareImplementationDistance(const ::java::lang::Class &, const VirtualMethod &, const VirtualMethod &);
          jint getImplementationDistance(const ::java::lang::Class &) const;
          jboolean isOverriddenAsOf(const ::java::lang::Class &) const;
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
        extern PyType_Def PY_TYPE_DEF(VirtualMethod);
        extern PyTypeObject *PY_TYPE(VirtualMethod);

        class t_VirtualMethod {
        public:
          PyObject_HEAD
          VirtualMethod object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_VirtualMethod *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const VirtualMethod&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const VirtualMethod&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
