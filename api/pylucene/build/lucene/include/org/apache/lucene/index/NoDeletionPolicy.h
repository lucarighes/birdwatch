#ifndef org_apache_lucene_index_NoDeletionPolicy_H
#define org_apache_lucene_index_NoDeletionPolicy_H

#include "org/apache/lucene/index/IndexDeletionPolicy.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class NoDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
         public:
          enum {
            mid_onCommit_d03990be0130160d,
            mid_onInit_d03990be0130160d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NoDeletionPolicy(const NoDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          static ::org::apache::lucene::index::IndexDeletionPolicy *INSTANCE;

          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
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
        extern PyType_Def PY_TYPE_DEF(NoDeletionPolicy);
        extern PyTypeObject *PY_TYPE(NoDeletionPolicy);

        class t_NoDeletionPolicy {
        public:
          PyObject_HEAD
          NoDeletionPolicy object;
          static PyObject *wrap_Object(const NoDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
