#ifndef org_apache_lucene_index_PersistentSnapshotDeletionPolicy_H
#define org_apache_lucene_index_PersistentSnapshotDeletionPolicy_H

#include "org/apache/lucene/index/SnapshotDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
        class IndexWriterConfig$OpenMode;
        class IndexDeletionPolicy;
      }
      namespace store {
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PersistentSnapshotDeletionPolicy : public ::org::apache::lucene::index::SnapshotDeletionPolicy {
         public:
          enum {
            mid_init$_70d2cfd2842a2611,
            mid_init$_76c8bd5de273e038,
            mid_getLastSaveFile_db9b55ba01e03e4b,
            mid_release_d519b4b694415d4a,
            mid_release_9c778c9bce6694df,
            mid_snapshot_4abaa8d830d8ecf1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PersistentSnapshotDeletionPolicy(jobject obj) : ::org::apache::lucene::index::SnapshotDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PersistentSnapshotDeletionPolicy(const PersistentSnapshotDeletionPolicy& obj) : ::org::apache::lucene::index::SnapshotDeletionPolicy(obj) {}

          static ::java::lang::String *SNAPSHOTS_PREFIX;

          PersistentSnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &, const ::org::apache::lucene::store::Directory &);
          PersistentSnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &);

          ::java::lang::String getLastSaveFile() const;
          void release(const ::org::apache::lucene::index::IndexCommit &) const;
          void release(jlong) const;
          ::org::apache::lucene::index::IndexCommit snapshot() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PersistentSnapshotDeletionPolicy);
        extern PyTypeObject *PY_TYPE(PersistentSnapshotDeletionPolicy);

        class t_PersistentSnapshotDeletionPolicy {
        public:
          PyObject_HEAD
          PersistentSnapshotDeletionPolicy object;
          static PyObject *wrap_Object(const PersistentSnapshotDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
