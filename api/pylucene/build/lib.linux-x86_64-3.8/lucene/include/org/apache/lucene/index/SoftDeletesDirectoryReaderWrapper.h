#ifndef org_apache_lucene_index_SoftDeletesDirectoryReaderWrapper_H
#define org_apache_lucene_index_SoftDeletesDirectoryReaderWrapper_H

#include "org/apache/lucene/index/FilterDirectoryReader.h"

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
      namespace index {
        class DirectoryReader;
        class LeafReader;
        class IndexReader$CacheHelper;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SoftDeletesDirectoryReaderWrapper : public ::org::apache::lucene::index::FilterDirectoryReader {
         public:
          enum {
            mid_init$_3e5cfde576a79434,
            mid_getReaderCacheHelper_a64c414fea9a8cf6,
            mid_doWrapDirectoryReader_bfd9949da06c4860,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SoftDeletesDirectoryReaderWrapper(jobject obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SoftDeletesDirectoryReaderWrapper(const SoftDeletesDirectoryReaderWrapper& obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {}

          SoftDeletesDirectoryReaderWrapper(const ::org::apache::lucene::index::DirectoryReader &, const ::java::lang::String &);

          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
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
        extern PyType_Def PY_TYPE_DEF(SoftDeletesDirectoryReaderWrapper);
        extern PyTypeObject *PY_TYPE(SoftDeletesDirectoryReaderWrapper);

        class t_SoftDeletesDirectoryReaderWrapper {
        public:
          PyObject_HEAD
          SoftDeletesDirectoryReaderWrapper object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SoftDeletesDirectoryReaderWrapper *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SoftDeletesDirectoryReaderWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SoftDeletesDirectoryReaderWrapper&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
