#ifndef org_apache_lucene_store_FileSwitchDirectory_H
#define org_apache_lucene_store_FileSwitchDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class IOContext;
        class IndexInput;
        class Lock;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Set;
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

        class FileSwitchDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_init$_a43d40323b09c5e8,
            mid_close_f2cc1bce94666404,
            mid_createOutput_40e6d6dcc3f676b9,
            mid_createTempOutput_918504249dfbe513,
            mid_deleteFile_9fd2eb66a64e6f0f,
            mid_fileLength_b1e05207ec98e246,
            mid_getExtension_9bfa75c9f141b67f,
            mid_getPendingDeletions_7dcf4034c6d1a92a,
            mid_getPrimaryDir_7452b086ce8219b2,
            mid_getSecondaryDir_7452b086ce8219b2,
            mid_listAll_9865da0b5ee490bc,
            mid_obtainLock_f265149b22017c5b,
            mid_openInput_cc9a9aabe8db93df,
            mid_rename_15b72f6a44ff93f2,
            mid_sync_50bc3ddc62a19f2d,
            mid_syncMetaData_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FileSwitchDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FileSwitchDirectory(const FileSwitchDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          FileSwitchDirectory(const ::java::util::Set &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, jboolean);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          static ::java::lang::String getExtension(const ::java::lang::String &);
          ::java::util::Set getPendingDeletions() const;
          ::org::apache::lucene::store::Directory getPrimaryDir() const;
          ::org::apache::lucene::store::Directory getSecondaryDir() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(FileSwitchDirectory);
        extern PyTypeObject *PY_TYPE(FileSwitchDirectory);

        class t_FileSwitchDirectory {
        public:
          PyObject_HEAD
          FileSwitchDirectory object;
          static PyObject *wrap_Object(const FileSwitchDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
