#ifndef org_apache_lucene_index_DirectoryReader_H
#define org_apache_lucene_index_DirectoryReader_H

#include "org/apache/lucene/index/BaseCompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
        class IndexCommit;
        class DirectoryReader;
        class LeafReader;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
    class List;
  }
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

        class DirectoryReader : public ::org::apache::lucene::index::BaseCompositeReader {
         public:
          enum {
            mid_directory_7452b086ce8219b2,
            mid_getIndexCommit_4abaa8d830d8ecf1,
            mid_getVersion_2e5ae9edcb9b072f,
            mid_indexExists_1524023b507b00a9,
            mid_isCurrent_8454bd5aa23fd11e,
            mid_listCommits_90688d90915c8b74,
            mid_open_6b4aca5e21cc99e9,
            mid_open_f9995f21cd99d467,
            mid_open_890b80518dc93fd7,
            mid_open_fb8f244d0fe66d05,
            mid_open_8d74f7f05cdbccdf,
            mid_openIfChanged_bfd9949da06c4860,
            mid_openIfChanged_b276f058edd17465,
            mid_openIfChanged_7e09521a1ae1f0ab,
            mid_openIfChanged_9a28daa1a4d0bd99,
            mid_doOpenIfChanged_6b4aca5e21cc99e9,
            mid_doOpenIfChanged_f2740abbecd1a98f,
            mid_doOpenIfChanged_f2a35b536582c7c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DirectoryReader(jobject obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DirectoryReader(const DirectoryReader& obj) : ::org::apache::lucene::index::BaseCompositeReader(obj) {}

          ::org::apache::lucene::store::Directory directory() const;
          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          jlong getVersion() const;
          static jboolean indexExists(const ::org::apache::lucene::store::Directory &);
          jboolean isCurrent() const;
          static ::java::util::List listCommits(const ::org::apache::lucene::store::Directory &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexCommit &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexWriter &);
          static DirectoryReader open(const ::org::apache::lucene::store::Directory &);
          static DirectoryReader open(const ::org::apache::lucene::store::Directory &, const ::java::util::Comparator &);
          static DirectoryReader open(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean);
          static DirectoryReader openIfChanged(const DirectoryReader &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexCommit &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexWriter &);
          static DirectoryReader openIfChanged(const DirectoryReader &, const ::org::apache::lucene::index::IndexWriter &, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(DirectoryReader);
        extern PyTypeObject *PY_TYPE(DirectoryReader);

        class t_DirectoryReader {
        public:
          PyObject_HEAD
          DirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
