#ifndef org_apache_lucene_store_ByteBuffersDataOutput_H
#define org_apache_lucene_store_ByteBuffersDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace util {
    class Map;
    class ArrayList;
    namespace function {
      class Consumer;
      class IntFunction;
    }
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
        class ByteBuffersDataOutput;
        class ByteBuffersDataInput;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_9c778c9bce6694df,
            mid_copyTo_ead2c38342037c59,
            mid_newResettableInstance_1829fed7fddcb8b8,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_reset_f2cc1bce94666404,
            mid_size_2e5ae9edcb9b072f,
            mid_toArrayCopy_cf386cdb1bbd339f,
            mid_toDataInput_bef54df431d4ed45,
            mid_toString_db9b55ba01e03e4b,
            mid_writeByte_9c36fec3bac1d0c7,
            mid_writeBytes_9ffdf271836656c4,
            mid_writeBytes_2a8b02a5adcbf830,
            mid_writeBytes_43fdd39c09bb2fad,
            mid_writeInt_040c4cd0390c5aff,
            mid_writeLong_9c778c9bce6694df,
            mid_writeMapOfStrings_408bd889ee3beae5,
            mid_writeSetOfStrings_d5a4a8d4b806f0ba,
            mid_writeShort_265bc0a0a1840315,
            mid_writeString_9fd2eb66a64e6f0f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersDataOutput(const ByteBuffersDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          static jint DEFAULT_MAX_BITS_PER_BLOCK;
          static jint DEFAULT_MIN_BITS_PER_BLOCK;

          ByteBuffersDataOutput();
          ByteBuffersDataOutput(jlong);

          void copyTo(const ::org::apache::lucene::store::DataOutput &) const;
          static ByteBuffersDataOutput newResettableInstance();
          jlong ramBytesUsed() const;
          void reset() const;
          jlong size() const;
          JArray< jbyte > toArrayCopy() const;
          ::org::apache::lucene::store::ByteBuffersDataInput toDataInput() const;
          ::java::lang::String toString() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &) const;
          void writeBytes(const JArray< jbyte > &, jint) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeMapOfStrings(const ::java::util::Map &) const;
          void writeSetOfStrings(const ::java::util::Set &) const;
          void writeShort(jshort) const;
          void writeString(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersDataOutput);
        extern PyTypeObject *PY_TYPE(ByteBuffersDataOutput);

        class t_ByteBuffersDataOutput {
        public:
          PyObject_HEAD
          ByteBuffersDataOutput object;
          static PyObject *wrap_Object(const ByteBuffersDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
