#ifndef org_apache_lucene_index_SnapshotDeletionPolicy_H
#define org_apache_lucene_index_SnapshotDeletionPolicy_H

#include "org/apache/lucene/index/IndexDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SnapshotDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
         public:
          enum {
            mid_init$_91f3017565dd4804,
            mid_getIndexCommit_9b0caf1c02abc6bb,
            mid_getSnapshotCount_9972fcc56b44e79d,
            mid_getSnapshots_49ec78390f08338a,
            mid_onCommit_d03990be0130160d,
            mid_onInit_d03990be0130160d,
            mid_release_d519b4b694415d4a,
            mid_snapshot_4abaa8d830d8ecf1,
            mid_incRef_d519b4b694415d4a,
            mid_releaseGen_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SnapshotDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SnapshotDeletionPolicy(const SnapshotDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          SnapshotDeletionPolicy(const ::org::apache::lucene::index::IndexDeletionPolicy &);

          ::org::apache::lucene::index::IndexCommit getIndexCommit(jlong) const;
          jint getSnapshotCount() const;
          ::java::util::List getSnapshots() const;
          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
          void release(const ::org::apache::lucene::index::IndexCommit &) const;
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
        extern PyType_Def PY_TYPE_DEF(SnapshotDeletionPolicy);
        extern PyTypeObject *PY_TYPE(SnapshotDeletionPolicy);

        class t_SnapshotDeletionPolicy {
        public:
          PyObject_HEAD
          SnapshotDeletionPolicy object;
          static PyObject *wrap_Object(const SnapshotDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
