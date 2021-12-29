#ifndef org_apache_lucene_index_MergeScheduler$MergeSource_H
#define org_apache_lucene_index_MergeScheduler$MergeSource_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$OneMerge;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergeScheduler$MergeSource : public ::java::lang::Object {
         public:
          enum {
            mid_getNextMerge_6a58f574dc79a20a,
            mid_hasPendingMerges_8454bd5aa23fd11e,
            mid_merge_b4144ef05f017168,
            mid_onMergeFinished_b4144ef05f017168,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeScheduler$MergeSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeScheduler$MergeSource(const MergeScheduler$MergeSource& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::MergePolicy$OneMerge getNextMerge() const;
          jboolean hasPendingMerges() const;
          void merge(const ::org::apache::lucene::index::MergePolicy$OneMerge &) const;
          void onMergeFinished(const ::org::apache::lucene::index::MergePolicy$OneMerge &) const;
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
        extern PyType_Def PY_TYPE_DEF(MergeScheduler$MergeSource);
        extern PyTypeObject *PY_TYPE(MergeScheduler$MergeSource);

        class t_MergeScheduler$MergeSource {
        public:
          PyObject_HEAD
          MergeScheduler$MergeSource object;
          static PyObject *wrap_Object(const MergeScheduler$MergeSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
