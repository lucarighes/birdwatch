#ifndef org_apache_pylucene_store_PythonDirectory_H
#define org_apache_pylucene_store_PythonDirectory_H

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
    class Throwable;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_close_f2cc1bce94666404,
            mid_createOutput_40e6d6dcc3f676b9,
            mid_createTempOutput_918504249dfbe513,
            mid_deleteFile_9fd2eb66a64e6f0f,
            mid_fileLength_b1e05207ec98e246,
            mid_finalize_f2cc1bce94666404,
            mid_getPendingDeletions_7dcf4034c6d1a92a,
            mid_listAll_9865da0b5ee490bc,
            mid_obtainLock_f265149b22017c5b,
            mid_openInput_cc9a9aabe8db93df,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            mid_rename_15b72f6a44ff93f2,
            mid_sync_9fd2eb66a64e6f0f,
            mid_sync_50bc3ddc62a19f2d,
            mid_syncMetaData_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonDirectory(const PythonDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          PythonDirectory();

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          void finalize() const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::lang::String &) const;
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
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonDirectory);
        extern PyTypeObject *PY_TYPE(PythonDirectory);

        class t_PythonDirectory {
        public:
          PyObject_HEAD
          PythonDirectory object;
          static PyObject *wrap_Object(const PythonDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
