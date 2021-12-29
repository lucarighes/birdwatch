#ifndef org_apache_lucene_store_FSDirectory_H
#define org_apache_lucene_store_FSDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class FSDirectory;
        class IOContext;
        class LockFactory;
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
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FSDirectory : public ::org::apache::lucene::store::BaseDirectory {
         public:
          enum {
            mid_close_f2cc1bce94666404,
            mid_createOutput_40e6d6dcc3f676b9,
            mid_createTempOutput_918504249dfbe513,
            mid_deleteFile_9fd2eb66a64e6f0f,
            mid_deletePendingFiles_f2cc1bce94666404,
            mid_fileLength_b1e05207ec98e246,
            mid_getDirectory_7f94726bf5834528,
            mid_getPendingDeletions_7dcf4034c6d1a92a,
            mid_listAll_9865da0b5ee490bc,
            mid_listAll_64c05ce96d6e63cc,
            mid_open_f2e573d00340f656,
            mid_open_79a7024ef94d560e,
            mid_rename_15b72f6a44ff93f2,
            mid_sync_50bc3ddc62a19f2d,
            mid_syncMetaData_f2cc1bce94666404,
            mid_toString_db9b55ba01e03e4b,
            mid_fsync_9fd2eb66a64e6f0f,
            mid_ensureCanRead_9fd2eb66a64e6f0f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FSDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FSDirectory(const FSDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          void deletePendingFiles() const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::nio::file::Path getDirectory() const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          static JArray< ::java::lang::String > listAll(const ::java::nio::file::Path &);
          static FSDirectory open(const ::java::nio::file::Path &);
          static FSDirectory open(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
          void syncMetaData() const;
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
        extern PyType_Def PY_TYPE_DEF(FSDirectory);
        extern PyTypeObject *PY_TYPE(FSDirectory);

        class t_FSDirectory {
        public:
          PyObject_HEAD
          FSDirectory object;
          static PyObject *wrap_Object(const FSDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
