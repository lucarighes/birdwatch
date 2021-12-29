#ifndef org_apache_lucene_store_ByteBuffersIndexInput_H
#define org_apache_lucene_store_ByteBuffersIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
  namespace util {
    class Map;
    class Set;
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
      namespace store {
        class ByteBuffersIndexInput;
        class RandomAccessInput;
        class ByteBuffersDataInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_init$_0bcdfaabb86f2aa7,
            mid_clone_831b777072456914,
            mid_close_f2cc1bce94666404,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_length_2e5ae9edcb9b072f,
            mid_randomAccessSlice_0b9b799a40079550,
            mid_readByte_871cd52a74f26213,
            mid_readByte_70f46e25a8aca047,
            mid_readBytes_43fdd39c09bb2fad,
            mid_readBytes_2cb00acb3a58ec31,
            mid_readInt_9972fcc56b44e79d,
            mid_readInt_694afffd0eb7dc3c,
            mid_readLong_2e5ae9edcb9b072f,
            mid_readLong_d711eecdc469624a,
            mid_readMapOfStrings_1c3426541413a55d,
            mid_readSetOfStrings_7dcf4034c6d1a92a,
            mid_readShort_ec20af88366b851e,
            mid_readShort_e963ff2cc414b347,
            mid_readString_db9b55ba01e03e4b,
            mid_readVInt_9972fcc56b44e79d,
            mid_readVLong_2e5ae9edcb9b072f,
            mid_readZInt_9972fcc56b44e79d,
            mid_readZLong_2e5ae9edcb9b072f,
            mid_seek_9c778c9bce6694df,
            mid_skipBytes_9c778c9bce6694df,
            mid_slice_94359d6c0c7b0525,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersIndexInput(const ByteBuffersIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          ByteBuffersIndexInput(const ::org::apache::lucene::store::ByteBuffersDataInput &, const ::java::lang::String &);

          ::org::apache::lucene::store::IndexInput clone() const;
          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          ::org::apache::lucene::store::RandomAccessInput randomAccessSlice(jlong, jlong) const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          jint readInt() const;
          jint readInt(jlong) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          ::java::util::Map readMapOfStrings() const;
          ::java::util::Set readSetOfStrings() const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          ::java::lang::String readString() const;
          jint readVInt() const;
          jlong readVLong() const;
          jint readZInt() const;
          jlong readZLong() const;
          void seek(jlong) const;
          void skipBytes(jlong) const;
          ByteBuffersIndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersIndexInput);
        extern PyTypeObject *PY_TYPE(ByteBuffersIndexInput);

        class t_ByteBuffersIndexInput {
        public:
          PyObject_HEAD
          ByteBuffersIndexInput object;
          static PyObject *wrap_Object(const ByteBuffersIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
