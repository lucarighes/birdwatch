#ifndef org_apache_lucene_index_ReaderManager_H
#define org_apache_lucene_index_ReaderManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class DirectoryReader;
      }
      namespace store {
        class Directory;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ReaderManager : public ::org::apache::lucene::search::ReferenceManager {
         public:
          enum {
            mid_init$_5f2cd3141a26022b,
            mid_init$_d99967ba03f4dedc,
            mid_init$_c51fd9fb1cf0392d,
            mid_init$_9e4fcd7c46f55ead,
            mid_refreshIfNeeded_bfd9949da06c4860,
            mid_tryIncRef_8be4f1fba5bf94a7,
            mid_decRef_5f2cd3141a26022b,
            mid_getRefCount_f4a60bc474d89f6a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReaderManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReaderManager(const ReaderManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

          ReaderManager(const ::org::apache::lucene::index::DirectoryReader &);
          ReaderManager(const ::org::apache::lucene::index::IndexWriter &);
          ReaderManager(const ::org::apache::lucene::store::Directory &);
          ReaderManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(ReaderManager);
        extern PyTypeObject *PY_TYPE(ReaderManager);

        class t_ReaderManager {
        public:
          PyObject_HEAD
          ReaderManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReaderManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReaderManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReaderManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
