#ifndef org_apache_lucene_store_DataOutput_H
#define org_apache_lucene_store_DataOutput_H

#include "java/lang/Object.h"

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

        class DataOutput : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_copyBytes_4833aa1d1f4cf120,
            mid_writeByte_9c36fec3bac1d0c7,
            mid_writeBytes_2a8b02a5adcbf830,
            mid_writeBytes_43fdd39c09bb2fad,
            mid_writeInt_040c4cd0390c5aff,
            mid_writeLong_9c778c9bce6694df,
            mid_writeMapOfStrings_408bd889ee3beae5,
            mid_writeSetOfStrings_d5a4a8d4b806f0ba,
            mid_writeShort_265bc0a0a1840315,
            mid_writeString_9fd2eb66a64e6f0f,
            mid_writeVInt_040c4cd0390c5aff,
            mid_writeVLong_9c778c9bce6694df,
            mid_writeZInt_040c4cd0390c5aff,
            mid_writeZLong_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DataOutput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DataOutput(const DataOutput& obj) : ::java::lang::Object(obj) {}

          DataOutput();

          void copyBytes(const ::org::apache::lucene::store::DataInput &, jlong) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeMapOfStrings(const ::java::util::Map &) const;
          void writeSetOfStrings(const ::java::util::Set &) const;
          void writeShort(jshort) const;
          void writeString(const ::java::lang::String &) const;
          void writeVInt(jint) const;
          void writeVLong(jlong) const;
          void writeZInt(jint) const;
          void writeZLong(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(DataOutput);
        extern PyTypeObject *PY_TYPE(DataOutput);

        class t_DataOutput {
        public:
          PyObject_HEAD
          DataOutput object;
          static PyObject *wrap_Object(const DataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
