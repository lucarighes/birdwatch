#ifndef org_apache_lucene_util_FutureObjects_H
#define org_apache_lucene_util_FutureObjects_H

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
      namespace util {

        class FutureObjects : public ::java::lang::Object {
         public:
          enum {
            mid_checkFromIndexSize_5b9a30c564891466,
            mid_checkFromToIndex_5b9a30c564891466,
            mid_checkIndex_57a58545eba514db,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FutureObjects(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FutureObjects(const FutureObjects& obj) : ::java::lang::Object(obj) {}

          static jint checkFromIndexSize(jint, jint, jint);
          static jint checkFromToIndex(jint, jint, jint);
          static jint checkIndex(jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(FutureObjects);
        extern PyTypeObject *PY_TYPE(FutureObjects);

        class t_FutureObjects {
        public:
          PyObject_HEAD
          FutureObjects object;
          static PyObject *wrap_Object(const FutureObjects&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
