#ifndef org_apache_lucene_index_FilterDirectoryReader_H
#define org_apache_lucene_index_FilterDirectoryReader_H

#include "org/apache/lucene/index/DirectoryReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
        class LeafReader;
        class FilterDirectoryReader$SubReaderWrapper;
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

        class FilterDirectoryReader : public ::org::apache::lucene::index::DirectoryReader {
         public:
          enum {
            mid_init$_70267027c6eda7f7,
            mid_getDelegate_f2740abbecd1a98f,
            mid_getIndexCommit_4abaa8d830d8ecf1,
            mid_getVersion_2e5ae9edcb9b072f,
            mid_isCurrent_8454bd5aa23fd11e,
            mid_unwrap_bfd9949da06c4860,
            mid_doClose_f2cc1bce94666404,
            mid_doOpenIfChanged_f2740abbecd1a98f,
            mid_doOpenIfChanged_6b4aca5e21cc99e9,
            mid_doOpenIfChanged_f2a35b536582c7c2,
            mid_doWrapDirectoryReader_bfd9949da06c4860,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterDirectoryReader(jobject obj) : ::org::apache::lucene::index::DirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterDirectoryReader(const FilterDirectoryReader& obj) : ::org::apache::lucene::index::DirectoryReader(obj) {}

          FilterDirectoryReader(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::index::FilterDirectoryReader$SubReaderWrapper &);

          ::org::apache::lucene::index::DirectoryReader getDelegate() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jlong getVersion() const;
          jboolean isCurrent() const;
          static ::org::apache::lucene::index::DirectoryReader unwrap(const ::org::apache::lucene::index::DirectoryReader &);
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
        extern PyType_Def PY_TYPE_DEF(FilterDirectoryReader);
        extern PyTypeObject *PY_TYPE(FilterDirectoryReader);

        class t_FilterDirectoryReader {
        public:
          PyObject_HEAD
          FilterDirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FilterDirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterDirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterDirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
