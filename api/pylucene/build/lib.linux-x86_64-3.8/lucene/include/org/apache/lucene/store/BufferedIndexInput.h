#ifndef org_apache_lucene_store_BufferedIndexInput_H
#define org_apache_lucene_store_BufferedIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class BufferedIndexInput;
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

        class BufferedIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_init$_605be02e51b1fbf8,
            mid_init$_3fb1dae8d4037984,
            mid_bufferSize_9fcc23c496125d03,
            mid_clone_34606e0c8dd07fbf,
            mid_getBufferSize_9972fcc56b44e79d,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_readByte_871cd52a74f26213,
            mid_readByte_70f46e25a8aca047,
            mid_readBytes_43fdd39c09bb2fad,
            mid_readBytes_2cb00acb3a58ec31,
            mid_readInt_9972fcc56b44e79d,
            mid_readInt_694afffd0eb7dc3c,
            mid_readLong_2e5ae9edcb9b072f,
            mid_readLong_d711eecdc469624a,
            mid_readShort_ec20af88366b851e,
            mid_readShort_e963ff2cc414b347,
            mid_readVInt_9972fcc56b44e79d,
            mid_readVLong_2e5ae9edcb9b072f,
            mid_seek_9c778c9bce6694df,
            mid_setBufferSize_040c4cd0390c5aff,
            mid_slice_552ef5e8b06b1e84,
            mid_wrap_4ba4458b28897e10,
            mid_seekInternal_9c778c9bce6694df,
            mid_readInternal_d159d3a3e7127e81,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BufferedIndexInput(const BufferedIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          static jint BUFFER_SIZE;
          static jint MERGE_BUFFER_SIZE;
          static jint MIN_BUFFER_SIZE;

          BufferedIndexInput(const ::java::lang::String &);
          BufferedIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
          BufferedIndexInput(const ::java::lang::String &, jint);

          static jint bufferSize(const ::org::apache::lucene::store::IOContext &);
          BufferedIndexInput clone() const;
          jint getBufferSize() const;
          jlong getFilePointer() const;
          jbyte readByte() const;
          jbyte readByte(jlong) const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          jint readInt() const;
          jint readInt(jlong) const;
          jlong readLong() const;
          jlong readLong(jlong) const;
          jshort readShort() const;
          jshort readShort(jlong) const;
          jint readVInt() const;
          jlong readVLong() const;
          void seek(jlong) const;
          void setBufferSize(jint) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
          static BufferedIndexInput wrap(const ::java::lang::String &, const ::org::apache::lucene::store::IndexInput &, jlong, jlong);
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
        extern PyType_Def PY_TYPE_DEF(BufferedIndexInput);
        extern PyTypeObject *PY_TYPE(BufferedIndexInput);

        class t_BufferedIndexInput {
        public:
          PyObject_HEAD
          BufferedIndexInput object;
          static PyObject *wrap_Object(const BufferedIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
