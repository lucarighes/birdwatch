#ifndef org_apache_lucene_util_OfflineSorter$ByteSequencesReader_H
#define org_apache_lucene_util_OfflineSorter$ByteSequencesReader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class ChecksumIndexInput;
      }
      namespace util {
        class BytesRefIterator;
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OfflineSorter$ByteSequencesReader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6966ad17494a9578,
            mid_close_f2cc1bce94666404,
            mid_next_7af2ea2e37ce82b8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter$ByteSequencesReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter$ByteSequencesReader(const OfflineSorter$ByteSequencesReader& obj) : ::java::lang::Object(obj) {}

          OfflineSorter$ByteSequencesReader(const ::org::apache::lucene::store::ChecksumIndexInput &, const ::java::lang::String &);

          void close() const;
          ::org::apache::lucene::util::BytesRef next() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(OfflineSorter$ByteSequencesReader);
        extern PyTypeObject *PY_TYPE(OfflineSorter$ByteSequencesReader);

        class t_OfflineSorter$ByteSequencesReader {
        public:
          PyObject_HEAD
          OfflineSorter$ByteSequencesReader object;
          static PyObject *wrap_Object(const OfflineSorter$ByteSequencesReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
