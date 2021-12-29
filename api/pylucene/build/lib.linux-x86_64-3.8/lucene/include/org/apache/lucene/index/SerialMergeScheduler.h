#ifndef org_apache_lucene_index_SerialMergeScheduler_H
#define org_apache_lucene_index_SerialMergeScheduler_H

#include "org/apache/lucene/index/MergeScheduler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeScheduler$MergeSource;
        class MergeTrigger;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SerialMergeScheduler : public ::org::apache::lucene::index::MergeScheduler {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_close_f2cc1bce94666404,
            mid_merge_d538047dffd358b1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SerialMergeScheduler(jobject obj) : ::org::apache::lucene::index::MergeScheduler(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SerialMergeScheduler(const SerialMergeScheduler& obj) : ::org::apache::lucene::index::MergeScheduler(obj) {}

          SerialMergeScheduler();

          void close() const;
          void merge(const ::org::apache::lucene::index::MergeScheduler$MergeSource &, const ::org::apache::lucene::index::MergeTrigger &) const;
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
        extern PyType_Def PY_TYPE_DEF(SerialMergeScheduler);
        extern PyTypeObject *PY_TYPE(SerialMergeScheduler);

        class t_SerialMergeScheduler {
        public:
          PyObject_HEAD
          SerialMergeScheduler object;
          static PyObject *wrap_Object(const SerialMergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
