#ifndef org_apache_lucene_index_MergeRateLimiter_H
#define org_apache_lucene_index_MergeRateLimiter_H

#include "org/apache/lucene/store/RateLimiter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$MergeAbortedException;
        class MergePolicy$OneMergeProgress;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergeRateLimiter : public ::org::apache::lucene::store::RateLimiter {
         public:
          enum {
            mid_init$_3d9ee0c465d85423,
            mid_getMBPerSec_8c74b787998ce4bc,
            mid_getMinPauseCheckBytes_2e5ae9edcb9b072f,
            mid_getTotalBytesWritten_2e5ae9edcb9b072f,
            mid_getTotalPausedNS_2e5ae9edcb9b072f,
            mid_getTotalStoppedNS_2e5ae9edcb9b072f,
            mid_pause_d711eecdc469624a,
            mid_setMBPerSec_3c435f10a3b1e038,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeRateLimiter(jobject obj) : ::org::apache::lucene::store::RateLimiter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeRateLimiter(const MergeRateLimiter& obj) : ::org::apache::lucene::store::RateLimiter(obj) {}

          MergeRateLimiter(const ::org::apache::lucene::index::MergePolicy$OneMergeProgress &);

          jdouble getMBPerSec() const;
          jlong getMinPauseCheckBytes() const;
          jlong getTotalBytesWritten() const;
          jlong getTotalPausedNS() const;
          jlong getTotalStoppedNS() const;
          jlong pause(jlong) const;
          void setMBPerSec(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(MergeRateLimiter);
        extern PyTypeObject *PY_TYPE(MergeRateLimiter);

        class t_MergeRateLimiter {
        public:
          PyObject_HEAD
          MergeRateLimiter object;
          static PyObject *wrap_Object(const MergeRateLimiter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
