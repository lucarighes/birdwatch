#ifndef org_apache_lucene_index_MergeScheduler_H
#define org_apache_lucene_index_MergeScheduler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
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

        class MergeScheduler : public ::java::lang::Object {
         public:
          enum {
            mid_close_f2cc1bce94666404,
            mid_merge_d538047dffd358b1,
            mid_wrapForMerge_44a548f62b1a07fc,
            mid_verbose_8454bd5aa23fd11e,
            mid_message_9fd2eb66a64e6f0f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeScheduler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeScheduler(const MergeScheduler& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void merge(const ::org::apache::lucene::index::MergeScheduler$MergeSource &, const ::org::apache::lucene::index::MergeTrigger &) const;
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
        extern PyType_Def PY_TYPE_DEF(MergeScheduler);
        extern PyTypeObject *PY_TYPE(MergeScheduler);

        class t_MergeScheduler {
        public:
          PyObject_HEAD
          MergeScheduler object;
          static PyObject *wrap_Object(const MergeScheduler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
