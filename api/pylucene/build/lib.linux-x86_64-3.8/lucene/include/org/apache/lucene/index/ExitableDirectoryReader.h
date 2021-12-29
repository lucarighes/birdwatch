#ifndef org_apache_lucene_index_ExitableDirectoryReader_H
#define org_apache_lucene_index_ExitableDirectoryReader_H

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
        class QueryTimeout;
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

        class ExitableDirectoryReader : public ::org::apache::lucene::index::FilterDirectoryReader {
         public:
          enum {
            mid_init$_2e4facfc618ffa37,
            mid_getReaderCacheHelper_a64c414fea9a8cf6,
            mid_toString_db9b55ba01e03e4b,
            mid_wrap_90dbc9f4c9894dd8,
            mid_doWrapDirectoryReader_bfd9949da06c4860,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader(jobject obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader(const ExitableDirectoryReader& obj) : ::org::apache::lucene::index::FilterDirectoryReader(obj) {}

          ExitableDirectoryReader(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::index::DirectoryReader wrap(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::index::QueryTimeout &);
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
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader);

        class t_ExitableDirectoryReader {
        public:
          PyObject_HEAD
          ExitableDirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
