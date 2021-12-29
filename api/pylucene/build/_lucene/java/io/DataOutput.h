#ifndef java_io_DataOutput_H
#define java_io_DataOutput_H

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

    class DataOutput : public ::java::lang::Object {
     public:
      enum {
        mid_write_9ffdf271836656c4,
        mid_write_040c4cd0390c5aff,
        mid_write_43fdd39c09bb2fad,
        mid_writeBoolean_9d72768e8fdce2b7,
        mid_writeByte_040c4cd0390c5aff,
        mid_writeBytes_9fd2eb66a64e6f0f,
        mid_writeChar_040c4cd0390c5aff,
        mid_writeChars_9fd2eb66a64e6f0f,
        mid_writeDouble_3c435f10a3b1e038,
        mid_writeFloat_8e1d952dd65cdc3a,
        mid_writeInt_040c4cd0390c5aff,
        mid_writeLong_9c778c9bce6694df,
        mid_writeShort_040c4cd0390c5aff,
        mid_writeUTF_9fd2eb66a64e6f0f,
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

      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
      void writeBoolean(jboolean) const;
      void writeByte(jint) const;
      void writeBytes(const ::java::lang::String &) const;
      void writeChar(jint) const;
      void writeChars(const ::java::lang::String &) const;
      void writeDouble(jdouble) const;
      void writeFloat(jfloat) const;
      void writeInt(jint) const;
      void writeLong(jlong) const;
      void writeShort(jint) const;
      void writeUTF(const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
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

#endif
