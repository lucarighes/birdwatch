#ifndef org_apache_lucene_store_ByteBuffersIndexOutput_H
#define org_apache_lucene_store_ByteBuffersIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

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
        class ByteBuffersDataOutput;
        class DataInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_03e852ad6e11b191,
            mid_close_f2cc1bce94666404,
            mid_copyBytes_4833aa1d1f4cf120,
            mid_getChecksum_2e5ae9edcb9b072f,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_writeByte_9c36fec3bac1d0c7,
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

          explicit ByteBuffersIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersIndexOutput(const ByteBuffersIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          ByteBuffersIndexOutput(const ::org::apache::lucene::store::ByteBuffersDataOutput &, const ::java::lang::String &, const ::java::lang::String &);

          void close() const;
          void copyBytes(const ::org::apache::lucene::store::DataInput &, jlong) const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          void writeByte(jbyte) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteBuffersIndexOutput);
        extern PyTypeObject *PY_TYPE(ByteBuffersIndexOutput);

        class t_ByteBuffersIndexOutput {
        public:
          PyObject_HEAD
          ByteBuffersIndexOutput object;
          static PyObject *wrap_Object(const ByteBuffersIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
