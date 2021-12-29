#ifndef org_apache_lucene_util_ByteBlockPool_H
#define org_apache_lucene_util_ByteBlockPool_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class ByteBlockPool$Allocator;
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ByteBlockPool : public ::java::lang::Object {
         public:
          enum {
            mid_init$_815b2bd959e148a5,
            mid_allocSlice_7cdc0fb0850d95a0,
            mid_append_0bdfd2603b7490a8,
            mid_newSlice_1e143afe1894d213,
            mid_nextBuffer_f2cc1bce94666404,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_readByte_70f46e25a8aca047,
            mid_readBytes_29c102c3728da619,
            mid_reset_f2cc1bce94666404,
            mid_reset_33bb9a5a88dc139c,
            mid_setBytesRef_327a6f4e8624d9f4,
            mid_setRawBytesRef_c61df66683b6c9c2,
            max_mid
          };

          enum {
            fid_buffer,
            fid_buffers,
            fid_byteOffset,
            fid_byteUpto,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBlockPool(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBlockPool(const ByteBlockPool& obj) : ::java::lang::Object(obj) {}

          static jint BYTE_BLOCK_MASK;
          static jint BYTE_BLOCK_SHIFT;
          static jint BYTE_BLOCK_SIZE;
          static jint FIRST_LEVEL_SIZE;
          static JArray< jint > *LEVEL_SIZE_ARRAY;
          static JArray< jint > *NEXT_LEVEL_ARRAY;

          JArray< jbyte > _get_buffer() const;
          void _set_buffer(const JArray< jbyte > &) const;
          JArray< JArray< jbyte > > _get_buffers() const;
          void _set_buffers(const JArray< JArray< jbyte > > &) const;
          jint _get_byteOffset() const;
          void _set_byteOffset(jint) const;
          jint _get_byteUpto() const;
          void _set_byteUpto(jint) const;

          ByteBlockPool(const ::org::apache::lucene::util::ByteBlockPool$Allocator &);

          jint allocSlice(const JArray< jbyte > &, jint) const;
          void append(const ::org::apache::lucene::util::BytesRef &) const;
          jint newSlice(jint) const;
          void nextBuffer() const;
          jlong ramBytesUsed() const;
          jbyte readByte(jlong) const;
          void readBytes(jlong, const JArray< jbyte > &, jint, jint) const;
          void reset() const;
          void reset(jboolean, jboolean) const;
          void setBytesRef(const ::org::apache::lucene::util::BytesRef &, jint) const;
          void setRawBytesRef(const ::org::apache::lucene::util::BytesRef &, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBlockPool);
        extern PyTypeObject *PY_TYPE(ByteBlockPool);

        class t_ByteBlockPool {
        public:
          PyObject_HEAD
          ByteBlockPool object;
          static PyObject *wrap_Object(const ByteBlockPool&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
