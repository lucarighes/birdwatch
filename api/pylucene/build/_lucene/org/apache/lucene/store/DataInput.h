#ifndef org_apache_lucene_store_DataInput_H
#define org_apache_lucene_store_DataInput_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Cloneable;
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

        class DataInput : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_clone_68b5e10aafd1a740,
            mid_readByte_871cd52a74f26213,
            mid_readBytes_43fdd39c09bb2fad,
            mid_readBytes_2cb00acb3a58ec31,
            mid_readInt_9972fcc56b44e79d,
            mid_readLELongs_d07f51188c558bf8,
            mid_readLong_2e5ae9edcb9b072f,
            mid_readMapOfStrings_1c3426541413a55d,
            mid_readSetOfStrings_7dcf4034c6d1a92a,
            mid_readShort_ec20af88366b851e,
            mid_readString_db9b55ba01e03e4b,
            mid_readVInt_9972fcc56b44e79d,
            mid_readVLong_2e5ae9edcb9b072f,
            mid_readZInt_9972fcc56b44e79d,
            mid_readZLong_2e5ae9edcb9b072f,
            mid_skipBytes_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DataInput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DataInput(const DataInput& obj) : ::java::lang::Object(obj) {}

          DataInput();

          DataInput clone() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          jint readInt() const;
          void readLELongs(const JArray< jlong > &, jint, jint) const;
          jlong readLong() const;
          ::java::util::Map readMapOfStrings() const;
          ::java::util::Set readSetOfStrings() const;
          jshort readShort() const;
          ::java::lang::String readString() const;
          jint readVInt() const;
          jlong readVLong() const;
          jint readZInt() const;
          jlong readZLong() const;
          void skipBytes(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(DataInput);
        extern PyTypeObject *PY_TYPE(DataInput);

        class t_DataInput {
        public:
          PyObject_HEAD
          DataInput object;
          static PyObject *wrap_Object(const DataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
