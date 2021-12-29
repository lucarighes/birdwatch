#ifndef org_apache_lucene_index_ConcurrentMergeScheduler_H
#define org_apache_lucene_index_ConcurrentMergeScheduler_H

#include "org/apache/lucene/index/MergeScheduler.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class MergePolicy$OneMerge;
        class MergeTrigger;
        class MergeScheduler$MergeSource;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ConcurrentMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_close_f2cc1bce94666404,
            mid_disableAutoIOThrottle_f2cc1bce94666404,
            mid_enableAutoIOThrottle_f2cc1bce94666404,
            mid_getAutoIOThrottle_8454bd5aa23fd11e,
            mid_getForceMergeMBPerSec_8c74b787998ce4bc,
            mid_getIORateLimitMBPerSec_8c74b787998ce4bc,
            mid_getMaxMergeCount_9972fcc56b44e79d,
            mid_getMaxThreadCount_9972fcc56b44e79d,
            mid_merge_d538047dffd358b1,
            mid_mergeThreadCount_9972fcc56b44e79d,
            mid_setDefaultMaxMergesAndThreads_9d72768e8fdce2b7,
            mid_setForceMergeMBPerSec_3c435f10a3b1e038,
            mid_setMaxMergesAndThreads_438c62480c481c65,
            mid_sync_f2cc1bce94666404,
            mid_toString_db9b55ba01e03e4b,
            mid_wrapForMerge_44a548f62b1a07fc,
            mid_handleMergeException_471cfbdb800444a7,
            mid_updateMergeThreads_f2cc1bce94666404,
            mid_maybeStall_5bad7b33382dc900,
            mid_doStall_f2cc1bce94666404,
            mid_doMerge_c948bc497cbf33c2,
            mid_getMergeThread_025ff668b09a65a6,
            mid_targetMBPerSecChanged_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConcurrentMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConcurrentMergeScheduler(const ConcurrentMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          static jint AUTO_DETECT_MERGES_AND_THREADS;
          static ::java::lang::String *DEFAULT_CPU_CORE_COUNT_PROPERTY;
          static ::java::lang::String *DEFAULT_SPINS_PROPERTY;

          ConcurrentMergeScheduler();

          void close() const;
          void disableAutoIOThrottle() const;
          void enableAutoIOThrottle() const;
          jboolean getAutoIOThrottle() const;
          jdouble getForceMergeMBPerSec() const;
          jdouble getIORateLimitMBPerSec() const;
          jint getMaxMergeCount() const;
          jint getMaxThreadCount() const;
          void merge(const ::org::apache::lucene::index::MergeScheduler$MergeSource &, const ::org::apache::lucene::index::MergeTrigger &) const;
          jint mergeThreadCount() const;
          void setDefaultMaxMergesAndThreads(jboolean) const;
          void setForceMergeMBPerSec(jdouble) const;
          void setMaxMergesAndThreads(jint, jint) const;
          void sync() const;
          ::java::lang::String toString() const;
          ::org::apache::lucene::store::Directory wrapForMerge(const ::org::apache::lucene::index::MergePolicy$OneMerge &, const ::org::apache::lucene::store::Directory &) const;
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
        extern PyType_Def PY_TYPE_DEF(ConcurrentMergeScheduler);
        extern PyTypeObject *PY_TYPE(ConcurrentMergeScheduler);

        class t_ConcurrentMergeScheduler {
        public:
          PyObject_HEAD
          ConcurrentMergeScheduler object;
          static PyObject *wrap_Object(const ConcurrentMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
