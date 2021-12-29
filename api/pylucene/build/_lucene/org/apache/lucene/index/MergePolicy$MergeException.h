#ifndef org_apache_lucene_index_MergePolicy$MergeException_H
#define org_apache_lucene_index_MergePolicy$MergeException_H

#include "java/lang/RuntimeException.h"

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
      namespace index {

        class MergePolicy$MergeException : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_init$_471cfbdb800444a7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$MergeException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$MergeException(const MergePolicy$MergeException& obj) : ::java::lang::RuntimeException(obj) {}

          MergePolicy$MergeException(const ::java::lang::String &);
          MergePolicy$MergeException(const ::java::lang::Throwable &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(MergePolicy$MergeException);
        extern PyTypeObject *PY_TYPE(MergePolicy$MergeException);

        class t_MergePolicy$MergeException {
        public:
          PyObject_HEAD
          MergePolicy$MergeException object;
          static PyObject *wrap_Object(const MergePolicy$MergeException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
