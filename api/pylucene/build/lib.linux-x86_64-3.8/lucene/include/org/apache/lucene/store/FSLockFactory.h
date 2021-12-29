#ifndef org_apache_lucene_store_FSLockFactory_H
#define org_apache_lucene_store_FSLockFactory_H

#include "org/apache/lucene/store/LockFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class Lock;
        class FSLockFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FSLockFactory : public ::org::apache::lucene::store::LockFactory {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_getDefault_c63b48861699a138,
            mid_obtainLock_6aee55f49034dd72,
            mid_obtainFSLock_6e0f096ad0a821f7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FSLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FSLockFactory(const FSLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          FSLockFactory();

          static FSLockFactory getDefault();
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
        extern PyType_Def PY_TYPE_DEF(FSLockFactory);
        extern PyTypeObject *PY_TYPE(FSLockFactory);

        class t_FSLockFactory {
        public:
          PyObject_HEAD
          FSLockFactory object;
          static PyObject *wrap_Object(const FSLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
