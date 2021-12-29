#ifndef org_apache_lucene_store_NativeUnixDirectory_H
#define org_apache_lucene_store_NativeUnixDirectory_H

#include "org/apache/lucene/store/FSDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class IOContext;
        class IndexInput;
        class Directory;
        class LockFactory;
      }
    }
  }
}
namespace java {
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

        class NativeUnixDirectory : public ::org::apache::lucene::store::FSDirectory {
         public:
          enum {
            mid_init$_214edc4870a6ab39,
            mid_init$_db939f381d52ac91,
            mid_init$_0a269b46338b41e2,
            mid_createOutput_40e6d6dcc3f676b9,
            mid_openInput_cc9a9aabe8db93df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NativeUnixDirectory(jobject obj) : ::org::apache::lucene::store::FSDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NativeUnixDirectory(const NativeUnixDirectory& obj) : ::org::apache::lucene::store::FSDirectory(obj) {}

          static jint DEFAULT_MERGE_BUFFER_SIZE;
          static jlong DEFAULT_MIN_BYTES_DIRECT;

          NativeUnixDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::Directory &);
          NativeUnixDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &, const ::org::apache::lucene::store::Directory &);
          NativeUnixDirectory(const ::java::nio::file::Path &, jint, jlong, const ::org::apache::lucene::store::LockFactory &, const ::org::apache::lucene::store::Directory &);

          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(NativeUnixDirectory);
        extern PyTypeObject *PY_TYPE(NativeUnixDirectory);

        class t_NativeUnixDirectory {
        public:
          PyObject_HEAD
          NativeUnixDirectory object;
          static PyObject *wrap_Object(const NativeUnixDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
