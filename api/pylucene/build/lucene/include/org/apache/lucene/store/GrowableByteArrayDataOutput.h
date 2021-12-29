#ifndef org_apache_lucene_store_GrowableByteArrayDataOutput_H
#define org_apache_lucene_store_GrowableByteArrayDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
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

        class GrowableByteArrayDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_getBytes_cf386cdb1bbd339f,
            mid_getPosition_9972fcc56b44e79d,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_reset_f2cc1bce94666404,
            mid_writeByte_9c36fec3bac1d0c7,
            mid_writeBytes_43fdd39c09bb2fad,
            mid_writeString_9fd2eb66a64e6f0f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GrowableByteArrayDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GrowableByteArrayDataOutput(const GrowableByteArrayDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          GrowableByteArrayDataOutput(jint);

          JArray< jbyte > getBytes() const;
          jint getPosition() const;
          jlong ramBytesUsed() const;
          void reset() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(GrowableByteArrayDataOutput);
        extern PyTypeObject *PY_TYPE(GrowableByteArrayDataOutput);

        class t_GrowableByteArrayDataOutput {
        public:
          PyObject_HEAD
          GrowableByteArrayDataOutput object;
          static PyObject *wrap_Object(const GrowableByteArrayDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
