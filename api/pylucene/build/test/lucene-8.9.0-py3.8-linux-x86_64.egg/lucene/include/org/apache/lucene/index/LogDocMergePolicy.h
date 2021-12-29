#ifndef org_apache_lucene_index_LogDocMergePolicy_H
#define org_apache_lucene_index_LogDocMergePolicy_H

#include "org/apache/lucene/index/LogMergePolicy.h"

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

        class LogDocMergePolicy : public ::org::apache::lucene::index::LogMergePolicy {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_getMinMergeDocs_9972fcc56b44e79d,
            mid_setMinMergeDocs_040c4cd0390c5aff,
            mid_size_ad7dad42a292eb83,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LogDocMergePolicy(jobject obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LogDocMergePolicy(const LogDocMergePolicy& obj) : ::org::apache::lucene::index::LogMergePolicy(obj) {}

          static jint DEFAULT_MIN_MERGE_DOCS;

          LogDocMergePolicy();

          jint getMinMergeDocs() const;
          void setMinMergeDocs(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(LogDocMergePolicy);
        extern PyTypeObject *PY_TYPE(LogDocMergePolicy);

        class t_LogDocMergePolicy {
        public:
          PyObject_HEAD
          LogDocMergePolicy object;
          static PyObject *wrap_Object(const LogDocMergePolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
