#ifndef java_io_DataInput_H
#define java_io_DataInput_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class DataInput : public ::java::lang::Object {
     public:
      enum {
        mid_readBoolean_8454bd5aa23fd11e,
        mid_readByte_871cd52a74f26213,
        mid_readChar_8eea1dd85c3239c3,
        mid_readDouble_8c74b787998ce4bc,
        mid_readFloat_58aec2b64dff50c8,
        mid_readFully_9ffdf271836656c4,
        mid_readFully_43fdd39c09bb2fad,
        mid_readInt_9972fcc56b44e79d,
        mid_readLine_db9b55ba01e03e4b,
        mid_readLong_2e5ae9edcb9b072f,
        mid_readShort_ec20af88366b851e,
        mid_readUTF_db9b55ba01e03e4b,
        mid_readUnsignedByte_9972fcc56b44e79d,
        mid_readUnsignedShort_9972fcc56b44e79d,
        mid_skipBytes_1e143afe1894d213,
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

      jboolean readBoolean() const;
      jbyte readByte() const;
      jchar readChar() const;
      jdouble readDouble() const;
      jfloat readFloat() const;
      void readFully(const JArray< jbyte > &) const;
      void readFully(const JArray< jbyte > &, jint, jint) const;
      jint readInt() const;
      ::java::lang::String readLine() const;
      jlong readLong() const;
      jshort readShort() const;
      ::java::lang::String readUTF() const;
      jint readUnsignedByte() const;
      jint readUnsignedShort() const;
      jint skipBytes(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
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

#endif
