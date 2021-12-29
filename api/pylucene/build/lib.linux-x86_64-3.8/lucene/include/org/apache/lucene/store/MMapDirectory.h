#ifndef org_apache_lucene_store_MMapDirectory_H
#define org_apache_lucene_store_MMapDirectory_H

#include "org/apache/lucene/store/FSDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class IndexInput;
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

        class MMapDirectory : public ::org::apache::lucene::store::FSDirectory {
         public:
          enum {
            mid_init$_636077fee54d306c,
            mid_init$_71c9ab2266463084,
            mid_init$_1307b7f570696af0,
            mid_init$_82ba2369f6784dd8,
            mid_getMaxChunkSize_9972fcc56b44e79d,
            mid_getPreload_8454bd5aa23fd11e,
            mid_getUseUnmap_8454bd5aa23fd11e,
            mid_openInput_cc9a9aabe8db93df,
            mid_setPreload_9d72768e8fdce2b7,
            mid_setUseUnmap_9d72768e8fdce2b7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MMapDirectory(jobject obj) : ::org::apache::lucene::store::FSDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MMapDirectory(const MMapDirectory& obj) : ::org::apache::lucene::store::FSDirectory(obj) {}

          static jint DEFAULT_MAX_CHUNK_SIZE;
          static ::java::lang::String *UNMAP_NOT_SUPPORTED_REASON;
          static jboolean UNMAP_SUPPORTED;

          MMapDirectory(const ::java::nio::file::Path &);
          MMapDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
          MMapDirectory(const ::java::nio::file::Path &, jint);
          MMapDirectory(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &, jint);

          jint getMaxChunkSize() const;
          jboolean getPreload() const;
          jboolean getUseUnmap() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void setPreload(jboolean) const;
          void setUseUnmap(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(MMapDirectory);
        extern PyTypeObject *PY_TYPE(MMapDirectory);

        class t_MMapDirectory {
        public:
          PyObject_HEAD
          MMapDirectory object;
          static PyObject *wrap_Object(const MMapDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
