#ifndef org_apache_pylucene_index_PythonIndexDeletionPolicy_H
#define org_apache_pylucene_index_PythonIndexDeletionPolicy_H

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
    class Throwable;
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
    namespace pylucene {
      namespace index {

        class PythonIndexDeletionPolicy : public ::org::apache::lucene::index::IndexDeletionPolicy {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_finalize_f2cc1bce94666404,
            mid_onCommit_d03990be0130160d,
            mid_onInit_d03990be0130160d,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexDeletionPolicy(jobject obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIndexDeletionPolicy(const PythonIndexDeletionPolicy& obj) : ::org::apache::lucene::index::IndexDeletionPolicy(obj) {}

          PythonIndexDeletionPolicy();

          void finalize() const;
          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PythonIndexDeletionPolicy);
        extern PyTypeObject *PY_TYPE(PythonIndexDeletionPolicy);

        class t_PythonIndexDeletionPolicy {
        public:
          PyObject_HEAD
          PythonIndexDeletionPolicy object;
          static PyObject *wrap_Object(const PythonIndexDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
