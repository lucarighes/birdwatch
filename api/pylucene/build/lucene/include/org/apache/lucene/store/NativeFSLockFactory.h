#ifndef org_apache_lucene_store_NativeFSLockFactory_H
#define org_apache_lucene_store_NativeFSLockFactory_H

#include "org/apache/lucene/store/FSLockFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class NativeFSLockFactory;
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
      namespace store {

        class NativeFSLockFactory : public ::org::apache::lucene::store::FSLockFactory {
         public:
          enum {
            mid_obtainFSLock_6e0f096ad0a821f7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NativeFSLockFactory(jobject obj) : ::org::apache::lucene::store::FSLockFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NativeFSLockFactory(const NativeFSLockFactory& obj) : ::org::apache::lucene::store::FSLockFactory(obj) {}

          static NativeFSLockFactory *INSTANCE;
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
        extern PyType_Def PY_TYPE_DEF(NativeFSLockFactory);
        extern PyTypeObject *PY_TYPE(NativeFSLockFactory);

        class t_NativeFSLockFactory {
        public:
          PyObject_HEAD
          NativeFSLockFactory object;
          static PyObject *wrap_Object(const NativeFSLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
