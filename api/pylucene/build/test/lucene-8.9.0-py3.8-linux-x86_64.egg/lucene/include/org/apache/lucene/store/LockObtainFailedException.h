#ifndef org_apache_lucene_store_LockObtainFailedException_H
#define org_apache_lucene_store_LockObtainFailedException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class String;
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class LockObtainFailedException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_init$_2e9d196dc293ffe6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LockObtainFailedException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LockObtainFailedException(const LockObtainFailedException& obj) : ::java::io::IOException(obj) {}

          LockObtainFailedException(const ::java::lang::String &);
          LockObtainFailedException(const ::java::lang::String &, const ::java::lang::Throwable &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(LockObtainFailedException);
        extern PyTypeObject *PY_TYPE(LockObtainFailedException);

        class t_LockObtainFailedException {
        public:
          PyObject_HEAD
          LockObtainFailedException object;
          static PyObject *wrap_Object(const LockObtainFailedException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
