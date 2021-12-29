#ifndef org_apache_lucene_store_RAMOutputStream_H
#define org_apache_lucene_store_RAMOutputStream_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace util {
    class Collection;
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
      namespace util {
        class Accountable;
      }
      namespace store {
        class DataOutput;
        class RAMFile;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RAMOutputStream : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_a0cb299f25d483d9,
            mid_init$_ba22c6ee653e1e85,
            mid_close_f2cc1bce94666404,
            mid_getChecksum_2e5ae9edcb9b072f,
            mid_getChildResources_d4dfbf7a26ff41df,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_reset_f2cc1bce94666404,
            mid_writeByte_9c36fec3bac1d0c7,
            mid_writeBytes_43fdd39c09bb2fad,
            mid_writeTo_ead2c38342037c59,
            mid_writeTo_2a8b02a5adcbf830,
            mid_flush_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RAMOutputStream(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RAMOutputStream(const RAMOutputStream& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          RAMOutputStream();
          RAMOutputStream(const ::org::apache::lucene::store::RAMFile &, jboolean);
          RAMOutputStream(const ::java::lang::String &, const ::org::apache::lucene::store::RAMFile &, jboolean);

          void close() const;
          jlong getChecksum() const;
          ::java::util::Collection getChildResources() const;
          jlong getFilePointer() const;
          jlong ramBytesUsed() const;
          void reset() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeTo(const ::org::apache::lucene::store::DataOutput &) const;
          void writeTo(const JArray< jbyte > &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(RAMOutputStream);
        extern PyTypeObject *PY_TYPE(RAMOutputStream);

        class t_RAMOutputStream {
        public:
          PyObject_HEAD
          RAMOutputStream object;
          static PyObject *wrap_Object(const RAMOutputStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
