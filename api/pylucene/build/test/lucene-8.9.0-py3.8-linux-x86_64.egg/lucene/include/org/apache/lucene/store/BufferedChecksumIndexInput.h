#ifndef org_apache_lucene_store_BufferedChecksumIndexInput_H
#define org_apache_lucene_store_BufferedChecksumIndexInput_H

#include "org/apache/lucene/store/ChecksumIndexInput.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class BufferedChecksumIndexInput : public ::org::apache::lucene::store::ChecksumIndexInput {
         public:
          enum {
            mid_init$_129f336879c18407,
            mid_clone_831b777072456914,
            mid_close_f2cc1bce94666404,
            mid_getChecksum_2e5ae9edcb9b072f,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_length_2e5ae9edcb9b072f,
            mid_readByte_871cd52a74f26213,
            mid_readBytes_43fdd39c09bb2fad,
            mid_slice_552ef5e8b06b1e84,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedChecksumIndexInput(jobject obj) : ::org::apache::lucene::store::ChecksumIndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BufferedChecksumIndexInput(const BufferedChecksumIndexInput& obj) : ::org::apache::lucene::store::ChecksumIndexInput(obj) {}

          BufferedChecksumIndexInput(const ::org::apache::lucene::store::IndexInput &);

          ::org::apache::lucene::store::IndexInput clone() const;
          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(BufferedChecksumIndexInput);
        extern PyTypeObject *PY_TYPE(BufferedChecksumIndexInput);

        class t_BufferedChecksumIndexInput {
        public:
          PyObject_HEAD
          BufferedChecksumIndexInput object;
          static PyObject *wrap_Object(const BufferedChecksumIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
