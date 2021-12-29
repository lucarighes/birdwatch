#ifndef org_apache_lucene_store_ByteBufferIndexInput_H
#define org_apache_lucene_store_ByteBufferIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class ByteBufferIndexInput;
        class RandomAccessInput;
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
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBufferIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_clone_22202b843a91ed14,
            mid_close_f2cc1bce94666404,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_length_2e5ae9edcb9b072f,
            mid_readByte_871cd52a74f26213,
            mid_readByte_70f46e25a8aca047,
            mid_readBytes_43fdd39c09bb2fad,
            mid_readInt_9972fcc56b44e79d,
            mid_readInt_694afffd0eb7dc3c,
            mid_readLELongs_d07f51188c558bf8,
            mid_readLong_2e5ae9edcb9b072f,
            mid_readLong_d711eecdc469624a,
            mid_readShort_ec20af88366b851e,
            mid_readShort_e963ff2cc414b347,
            mid_seek_9c778c9bce6694df,
            mid_slice_cbd827549aa1b1b1,
            mid_setCurBuf_d159d3a3e7127e81,
            mid_buildSlice_cbd827549aa1b1b1,
            mid_newCloneInstance_39b4902d924e213c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBufferIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBufferIndexInput(const ByteBufferIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          ByteBufferIndexInput clone() const;
          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          jint readInt() const;
          jint readInt(jlong) const;
          void readLELongs(const JArray< jlong > &, jint, jint) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          void seek(jlong) const;
          ByteBufferIndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBufferIndexInput);
        extern PyTypeObject *PY_TYPE(ByteBufferIndexInput);

        class t_ByteBufferIndexInput {
        public:
          PyObject_HEAD
          ByteBufferIndexInput object;
          static PyObject *wrap_Object(const ByteBufferIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
