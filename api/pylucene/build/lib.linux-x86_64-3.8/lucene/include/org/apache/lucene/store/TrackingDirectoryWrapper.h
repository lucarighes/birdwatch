#ifndef org_apache_lucene_store_TrackingDirectoryWrapper_H
#define org_apache_lucene_store_TrackingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class IOContext;
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
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

        class TrackingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_c51fd9fb1cf0392d,
            mid_clearCreatedFiles_f2cc1bce94666404,
            mid_copyFrom_a0726436aec3a466,
            mid_createOutput_40e6d6dcc3f676b9,
            mid_createTempOutput_918504249dfbe513,
            mid_deleteFile_9fd2eb66a64e6f0f,
            mid_getCreatedFiles_7dcf4034c6d1a92a,
            mid_rename_15b72f6a44ff93f2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TrackingDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TrackingDirectoryWrapper(const TrackingDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          TrackingDirectoryWrapper(const ::org::apache::lucene::store::Directory &);

          void clearCreatedFiles() const;
          void copyFrom(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          ::java::util::Set getCreatedFiles() const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(TrackingDirectoryWrapper);
        extern PyTypeObject *PY_TYPE(TrackingDirectoryWrapper);

        class t_TrackingDirectoryWrapper {
        public:
          PyObject_HEAD
          TrackingDirectoryWrapper object;
          static PyObject *wrap_Object(const TrackingDirectoryWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
