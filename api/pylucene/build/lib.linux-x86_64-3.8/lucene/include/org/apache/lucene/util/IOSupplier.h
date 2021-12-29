#ifndef org_apache_lucene_util_IOSupplier_H
#define org_apache_lucene_util_IOSupplier_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IOSupplier : public ::java::lang::Object {
         public:
          enum {
            mid_get_d6bcd06f3102c4d9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOSupplier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOSupplier(const IOSupplier& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Object get() const;
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
        extern PyType_Def PY_TYPE_DEF(IOSupplier);
        extern PyTypeObject *PY_TYPE(IOSupplier);

        class t_IOSupplier {
        public:
          PyObject_HEAD
          IOSupplier object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_IOSupplier *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IOSupplier&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IOSupplier&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
