#ifndef org_apache_lucene_store_SimpleFSLockFactory_H
#define org_apache_lucene_store_SimpleFSLockFactory_H

#include "org/apache/lucene/store/FSLockFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class SimpleFSLockFactory;
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

        class SimpleFSLockFactory : public ::org::apache::lucene::store::FSLockFactory {
         public:
          enum {
            mid_obtainFSLock_6e0f096ad0a821f7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleFSLockFactory(jobject obj) : ::org::apache::lucene::store::FSLockFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleFSLockFactory(const SimpleFSLockFactory& obj) : ::org::apache::lucene::store::FSLockFactory(obj) {}

          static SimpleFSLockFactory *INSTANCE;
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
        extern PyType_Def PY_TYPE_DEF(SimpleFSLockFactory);
        extern PyTypeObject *PY_TYPE(SimpleFSLockFactory);

        class t_SimpleFSLockFactory {
        public:
          PyObject_HEAD
          SimpleFSLockFactory object;
          static PyObject *wrap_Object(const SimpleFSLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
