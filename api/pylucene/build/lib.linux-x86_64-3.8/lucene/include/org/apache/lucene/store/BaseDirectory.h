#ifndef org_apache_lucene_store_BaseDirectory_H
#define org_apache_lucene_store_BaseDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class BaseDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_obtainLock_f265149b22017c5b,
            mid_toString_db9b55ba01e03e4b,
            mid_ensureOpen_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseDirectory(const BaseDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(BaseDirectory);
        extern PyTypeObject *PY_TYPE(BaseDirectory);

        class t_BaseDirectory {
        public:
          PyObject_HEAD
          BaseDirectory object;
          static PyObject *wrap_Object(const BaseDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
