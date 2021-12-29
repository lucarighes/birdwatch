#ifndef org_apache_lucene_codecs_CompoundDirectory_H
#define org_apache_lucene_codecs_CompoundDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class IOContext;
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
      namespace codecs {

        class CompoundDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_createOutput_40e6d6dcc3f676b9,
            mid_createTempOutput_918504249dfbe513,
            mid_deleteFile_9fd2eb66a64e6f0f,
            mid_obtainLock_f265149b22017c5b,
            mid_rename_15b72f6a44ff93f2,
            mid_sync_50bc3ddc62a19f2d,
            mid_syncMetaData_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompoundDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CompoundDirectory(const CompoundDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
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
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(CompoundDirectory);
        extern PyTypeObject *PY_TYPE(CompoundDirectory);

        class t_CompoundDirectory {
        public:
          PyObject_HEAD
          CompoundDirectory object;
          static PyObject *wrap_Object(const CompoundDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
