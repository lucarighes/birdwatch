#ifndef org_apache_lucene_store_NRTCachingDirectory_H
#define org_apache_lucene_store_NRTCachingDirectory_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class IOContext;
        class IndexInput;
        class Directory;
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

        class NRTCachingDirectory : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_89dbb35cc117b30f,
            mid_close_f2cc1bce94666404,
            mid_createOutput_40e6d6dcc3f676b9,
            mid_createTempOutput_918504249dfbe513,
            mid_deleteFile_9fd2eb66a64e6f0f,
            mid_fileLength_b1e05207ec98e246,
            mid_getChildResources_d4dfbf7a26ff41df,
            mid_listAll_9865da0b5ee490bc,
            mid_listCachedFiles_9865da0b5ee490bc,
            mid_openInput_cc9a9aabe8db93df,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_rename_15b72f6a44ff93f2,
            mid_sync_50bc3ddc62a19f2d,
            mid_toString_db9b55ba01e03e4b,
            mid_doCacheWrite_14ea2b9ddd64ff45,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NRTCachingDirectory(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NRTCachingDirectory(const NRTCachingDirectory& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          NRTCachingDirectory(const ::org::apache::lucene::store::Directory &, jdouble, jdouble);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::util::Collection getChildResources() const;
          JArray< ::java::lang::String > listAll() const;
          JArray< ::java::lang::String > listCachedFiles() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          jlong ramBytesUsed() const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(NRTCachingDirectory);
        extern PyTypeObject *PY_TYPE(NRTCachingDirectory);

        class t_NRTCachingDirectory {
        public:
          PyObject_HEAD
          NRTCachingDirectory object;
          static PyObject *wrap_Object(const NRTCachingDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
