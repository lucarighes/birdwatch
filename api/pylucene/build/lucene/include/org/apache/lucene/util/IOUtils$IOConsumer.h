#ifndef org_apache_lucene_util_IOUtils$IOConsumer_H
#define org_apache_lucene_util_IOUtils$IOConsumer_H

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

        class IOUtils$IOConsumer : public ::java::lang::Object {
         public:
          enum {
            mid_accept_d20f626183f72f7d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOUtils$IOConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOUtils$IOConsumer(const IOUtils$IOConsumer& obj) : ::java::lang::Object(obj) {}

          void accept(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(IOUtils$IOConsumer);
        extern PyTypeObject *PY_TYPE(IOUtils$IOConsumer);

        class t_IOUtils$IOConsumer {
        public:
          PyObject_HEAD
          IOUtils$IOConsumer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_IOUtils$IOConsumer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IOUtils$IOConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IOUtils$IOConsumer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
