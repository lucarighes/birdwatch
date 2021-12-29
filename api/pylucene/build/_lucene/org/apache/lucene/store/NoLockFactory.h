#ifndef org_apache_lucene_store_NoLockFactory_H
#define org_apache_lucene_store_NoLockFactory_H

#include "org/apache/lucene/store/LockFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class Lock;
        class NoLockFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class NoLockFactory : public ::org::apache::lucene::store::LockFactory {
         public:
          enum {
            mid_obtainLock_6aee55f49034dd72,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NoLockFactory(const NoLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          static NoLockFactory *INSTANCE;

          ::org::apache::lucene::store::Lock obtainLock(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(NoLockFactory);
        extern PyTypeObject *PY_TYPE(NoLockFactory);

        class t_NoLockFactory {
        public:
          PyObject_HEAD
          NoLockFactory object;
          static PyObject *wrap_Object(const NoLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
