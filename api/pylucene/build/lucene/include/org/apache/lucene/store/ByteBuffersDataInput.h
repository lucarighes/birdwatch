#ifndef org_apache_lucene_store_ByteBuffersDataInput_H
#define org_apache_lucene_store_ByteBuffersDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class RandomAccessInput;
        class ByteBuffersDataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class EOFException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_position_2e5ae9edcb9b072f,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_readByte_871cd52a74f26213,
            mid_readByte_70f46e25a8aca047,
            mid_readBytes_43fdd39c09bb2fad,
            mid_readInt_694afffd0eb7dc3c,
            mid_readLong_d711eecdc469624a,
            mid_readShort_e963ff2cc414b347,
            mid_seek_9c778c9bce6694df,
            mid_size_2e5ae9edcb9b072f,
            mid_slice_0b770bd4d9848e43,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersDataInput(const ByteBuffersDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          jlong position() const;
          jlong ramBytesUsed() const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          jint readInt(jlong) const;
          jlong readLong(jlong) const;
          jshort readShort(jlong) const;
          void seek(jlong) const;
          jlong size() const;
          ByteBuffersDataInput slice(jlong, jlong) const;
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
      namespace store {
        extern PyType_Def PY_TYPE_DEF(ByteBuffersDataInput);
        extern PyTypeObject *PY_TYPE(ByteBuffersDataInput);

        class t_ByteBuffersDataInput {
        public:
          PyObject_HEAD
          ByteBuffersDataInput object;
          static PyObject *wrap_Object(const ByteBuffersDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
