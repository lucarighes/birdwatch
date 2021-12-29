#ifndef org_apache_lucene_util_IOUtils_H
#define org_apache_lucene_util_IOUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IOUtils$IOConsumer;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace io {
    class InputStream;
    class Closeable;
    class Reader;
    class IOException;
  }
  namespace lang {
    class RuntimeException;
    class Error;
    class Class;
    class Iterable;
    class String;
    class Throwable;
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
      namespace util {

        class IOUtils : public ::java::lang::Object {
         public:
          enum {
            mid_applyToAll_a3344025c13ee64b,
            mid_close_3048febe8f7127cb,
            mid_close_870d7079aa6e0153,
            mid_closeWhileHandlingException_3048febe8f7127cb,
            mid_closeWhileHandlingException_870d7079aa6e0153,
            mid_deleteFiles_14ec9b100e8ac4e0,
            mid_deleteFilesIfExist_4db5a2d07e173b79,
            mid_deleteFilesIfExist_50bc3ddc62a19f2d,
            mid_deleteFilesIgnoringExceptions_4db5a2d07e173b79,
            mid_deleteFilesIgnoringExceptions_50bc3ddc62a19f2d,
            mid_deleteFilesIgnoringExceptions_efc0d6c34cd5cf40,
            mid_deleteFilesIgnoringExceptions_14ec9b100e8ac4e0,
            mid_fsync_a06445184861073e,
            mid_reThrow_471cfbdb800444a7,
            mid_reThrowUnchecked_471cfbdb800444a7,
            mid_rethrowAlways_3e4061c09a843c89,
            mid_rm_4db5a2d07e173b79,
            mid_spins_1524023b507b00a9,
            mid_spins_64eb4236a3fd11dc,
            mid_useOrSuppress_b5c7b48107b7c674,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOUtils(const IOUtils& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *UTF_8;

          static void applyToAll(const ::java::util::Collection &, const ::org::apache::lucene::util::IOUtils$IOConsumer &);
          static void close(const JArray< ::java::io::Closeable > &);
          static void close(const ::java::lang::Iterable &);
          static void closeWhileHandlingException(const JArray< ::java::io::Closeable > &);
          static void closeWhileHandlingException(const ::java::lang::Iterable &);
          static void deleteFiles(const ::org::apache::lucene::store::Directory &, const ::java::util::Collection &);
          static void deleteFilesIfExist(const JArray< ::java::nio::file::Path > &);
          static void deleteFilesIfExist(const ::java::util::Collection &);
          static void deleteFilesIgnoringExceptions(const JArray< ::java::nio::file::Path > &);
          static void deleteFilesIgnoringExceptions(const ::java::util::Collection &);
          static void deleteFilesIgnoringExceptions(const ::org::apache::lucene::store::Directory &, const JArray< ::java::lang::String > &);
          static void deleteFilesIgnoringExceptions(const ::org::apache::lucene::store::Directory &, const ::java::util::Collection &);
          static void fsync(const ::java::nio::file::Path &, jboolean);
          static void reThrow(const ::java::lang::Throwable &);
          static void reThrowUnchecked(const ::java::lang::Throwable &);
          static ::java::lang::Error rethrowAlways(const ::java::lang::Throwable &);
          static void rm(const JArray< ::java::nio::file::Path > &);
          static jboolean spins(const ::org::apache::lucene::store::Directory &);
          static jboolean spins(const ::java::nio::file::Path &);
          static ::java::lang::Throwable useOrSuppress(const ::java::lang::Throwable &, const ::java::lang::Throwable &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(IOUtils);
        extern PyTypeObject *PY_TYPE(IOUtils);

        class t_IOUtils {
        public:
          PyObject_HEAD
          IOUtils object;
          static PyObject *wrap_Object(const IOUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
