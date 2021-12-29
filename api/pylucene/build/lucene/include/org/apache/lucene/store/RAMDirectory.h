#ifndef org_apache_lucene_store_RAMDirectory_H
#define org_apache_lucene_store_RAMDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class FSDirectory;
        class IndexOutput;
        class IOContext;
        class IndexInput;
        class LockFactory;
      }
      namespace util {
        class Accountable;
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

        class RAMDirectory : public ::org::apache::lucene::store::BaseDirectory {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_267cdd0916f1154a,
            mid_init$_29136ca1969a76af,
            mid_close_f2cc1bce94666404,
            mid_createOutput_40e6d6dcc3f676b9,
            mid_createTempOutput_918504249dfbe513,
            mid_deleteFile_9fd2eb66a64e6f0f,
            mid_fileLength_b1e05207ec98e246,
            mid_fileNameExists_145b2d0af0c06b93,
            mid_getChildResources_d4dfbf7a26ff41df,
            mid_getPendingDeletions_7dcf4034c6d1a92a,
            mid_listAll_9865da0b5ee490bc,
            mid_openInput_cc9a9aabe8db93df,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_rename_15b72f6a44ff93f2,
            mid_sync_50bc3ddc62a19f2d,
            mid_syncMetaData_f2cc1bce94666404,
            mid_newRAMFile_47b105fc7d63f6a1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RAMDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RAMDirectory(const RAMDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          RAMDirectory();
          RAMDirectory(const ::org::apache::lucene::store::LockFactory &);
          RAMDirectory(const ::org::apache::lucene::store::FSDirectory &, const ::org::apache::lucene::store::IOContext &);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          jboolean fileNameExists(const ::java::lang::String &) const;
          ::java::util::Collection getChildResources() const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(RAMDirectory);
        extern PyTypeObject *PY_TYPE(RAMDirectory);

        class t_RAMDirectory {
        public:
          PyObject_HEAD
          RAMDirectory object;
          static PyObject *wrap_Object(const RAMDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
