#ifndef org_apache_lucene_store_ByteArrayDataInput_H
#define org_apache_lucene_store_ByteArrayDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteArrayDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_9ffdf271836656c4,
            mid_init$_43fdd39c09bb2fad,
            mid_eof_8454bd5aa23fd11e,
            mid_getPosition_9972fcc56b44e79d,
            mid_length_9972fcc56b44e79d,
            mid_readByte_871cd52a74f26213,
            mid_readBytes_43fdd39c09bb2fad,
            mid_readInt_9972fcc56b44e79d,
            mid_readLong_2e5ae9edcb9b072f,
            mid_readShort_ec20af88366b851e,
            mid_readVInt_9972fcc56b44e79d,
            mid_readVLong_2e5ae9edcb9b072f,
            mid_reset_9ffdf271836656c4,
            mid_reset_43fdd39c09bb2fad,
            mid_rewind_f2cc1bce94666404,
            mid_setPosition_040c4cd0390c5aff,
            mid_skipBytes_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteArrayDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteArrayDataInput(const ByteArrayDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          ByteArrayDataInput();
          ByteArrayDataInput(const JArray< jbyte > &);
          ByteArrayDataInput(const JArray< jbyte > &, jint, jint);

          jboolean eof() const;
          jint getPosition() const;
          jint length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          jint readInt() const;
          jlong readLong() const;
          jshort readShort() const;
          jint readVInt() const;
          jlong readVLong() const;
          void reset(const JArray< jbyte > &) const;
          void reset(const JArray< jbyte > &, jint, jint) const;
          void rewind() const;
          void setPosition(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteArrayDataInput);
        extern PyTypeObject *PY_TYPE(ByteArrayDataInput);

        class t_ByteArrayDataInput {
        public:
          PyObject_HEAD
          ByteArrayDataInput object;
          static PyObject *wrap_Object(const ByteArrayDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
