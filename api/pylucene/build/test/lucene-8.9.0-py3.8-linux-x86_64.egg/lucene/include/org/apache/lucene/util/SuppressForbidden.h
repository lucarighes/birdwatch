#ifndef org_apache_lucene_util_SuppressForbidden_H
#define org_apache_lucene_util_SuppressForbidden_H

#include "java/lang/Object.h"

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
      namespace util {

        class SuppressForbidden : public ::java::lang::Object {
         public:
          enum {
            mid_reason_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SuppressForbidden(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SuppressForbidden(const SuppressForbidden& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String reason() const;
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
        extern PyType_Def PY_TYPE_DEF(SuppressForbidden);
        extern PyTypeObject *PY_TYPE(SuppressForbidden);

        class t_SuppressForbidden {
        public:
          PyObject_HEAD
          SuppressForbidden object;
          static PyObject *wrap_Object(const SuppressForbidden&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
