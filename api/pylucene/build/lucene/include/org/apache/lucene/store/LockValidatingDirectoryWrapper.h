#ifndef org_apache_lucene_store_LockValidatingDirectoryWrapper_H
#define org_apache_lucene_store_LockValidatingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class IOContext;
        class Directory;
        class Lock;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
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

        class LockValidatingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_79d7a2fc1d47b5f2,
            mid_copyFrom_a0726436aec3a466,
            mid_createOutput_40e6d6dcc3f676b9,
            mid_deleteFile_9fd2eb66a64e6f0f,
            mid_rename_15b72f6a44ff93f2,
            mid_sync_50bc3ddc62a19f2d,
            mid_syncMetaData_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LockValidatingDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LockValidatingDirectoryWrapper(const LockValidatingDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          LockValidatingDirectoryWrapper(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Lock &);

          void copyFrom(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
          void syncMetaData() const;
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
        extern PyType_Def PY_TYPE_DEF(LockValidatingDirectoryWrapper);
        extern PyTypeObject *PY_TYPE(LockValidatingDirectoryWrapper);

        class t_LockValidatingDirectoryWrapper {
        public:
          PyObject_HEAD
          LockValidatingDirectoryWrapper object;
          static PyObject *wrap_Object(const LockValidatingDirectoryWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
