#ifndef org_apache_lucene_index_StandardDirectoryReader_H
#define org_apache_lucene_index_StandardDirectoryReader_H

#include "org/apache/lucene/index/DirectoryReader.h"

namespace java {
  namespace util {
    class Comparator;
    class List;
  }
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
        class IndexCommit;
        class LeafReader;
        class IndexReader$CacheHelper;
        class SegmentInfos;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class StandardDirectoryReader : public ::org::apache::lucene::index::DirectoryReader {
         public:
          enum {
            mid_getIndexCommit_4abaa8d830d8ecf1,
            mid_getReaderCacheHelper_a64c414fea9a8cf6,
            mid_getSegmentInfos_ecb6478d4be6f78b,
            mid_getVersion_2e5ae9edcb9b072f,
            mid_isCurrent_8454bd5aa23fd11e,
            mid_open_bbcec4207edeaa85,
            mid_toString_db9b55ba01e03e4b,
            mid_doClose_f2cc1bce94666404,
            mid_doOpenIfChanged_6b4aca5e21cc99e9,
            mid_doOpenIfChanged_f2740abbecd1a98f,
            mid_doOpenIfChanged_f2a35b536582c7c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StandardDirectoryReader(jobject obj) : ::org::apache::lucene::index::DirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StandardDirectoryReader(const StandardDirectoryReader& obj) : ::org::apache::lucene::index::DirectoryReader(obj) {}

          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SegmentInfos getSegmentInfos() const;
          jlong getVersion() const;
          jboolean isCurrent() const;
          static ::org::apache::lucene::index::DirectoryReader open(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfos &, const ::java::util::List &, const ::java::util::Comparator &);
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(StandardDirectoryReader);
        extern PyTypeObject *PY_TYPE(StandardDirectoryReader);

        class t_StandardDirectoryReader {
        public:
          PyObject_HEAD
          StandardDirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_StandardDirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const StandardDirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const StandardDirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
