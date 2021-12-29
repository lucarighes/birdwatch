#ifndef org_apache_lucene_index_MergePolicy$OneMergeProgress_H
#define org_apache_lucene_index_MergePolicy$OneMergeProgress_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    namespace function {
      class BooleanSupplier;
    }
  }
  namespace lang {
    class Long;
    class Class;
    class InterruptedException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$OneMergeProgress$PauseReason;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergePolicy$OneMergeProgress : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_abort_f2cc1bce94666404,
            mid_getPauseTimes_1c3426541413a55d,
            mid_isAborted_8454bd5aa23fd11e,
            mid_pauseNanos_3dfa57aab57335f1,
            mid_wakeup_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$OneMergeProgress(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$OneMergeProgress(const MergePolicy$OneMergeProgress& obj) : ::java::lang::Object(obj) {}

          MergePolicy$OneMergeProgress();

          void abort() const;
          ::java::util::Map getPauseTimes() const;
          jboolean isAborted() const;
          void pauseNanos(jlong, const ::org::apache::lucene::index::MergePolicy$OneMergeProgress$PauseReason &, const ::java::util::function::BooleanSupplier &) const;
          void wakeup() const;
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
        extern PyType_Def PY_TYPE_DEF(MergePolicy$OneMergeProgress);
        extern PyTypeObject *PY_TYPE(MergePolicy$OneMergeProgress);

        class t_MergePolicy$OneMergeProgress {
        public:
          PyObject_HEAD
          MergePolicy$OneMergeProgress object;
          static PyObject *wrap_Object(const MergePolicy$OneMergeProgress&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
