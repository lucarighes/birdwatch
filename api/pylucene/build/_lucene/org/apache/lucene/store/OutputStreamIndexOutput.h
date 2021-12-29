#ifndef org_apache_lucene_store_OutputStreamIndexOutput_H
#define org_apache_lucene_store_OutputStreamIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace io {
    class OutputStream;
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class OutputStreamIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_21a35b5e7d0be5d2,
            mid_close_f2cc1bce94666404,
            mid_getChecksum_2e5ae9edcb9b072f,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_writeByte_9c36fec3bac1d0c7,
            mid_writeBytes_43fdd39c09bb2fad,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OutputStreamIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OutputStreamIndexOutput(const OutputStreamIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          OutputStreamIndexOutput(const ::java::lang::String &, const ::java::lang::String &, const ::java::io::OutputStream &, jint);

          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(OutputStreamIndexOutput);
        extern PyTypeObject *PY_TYPE(OutputStreamIndexOutput);

        class t_OutputStreamIndexOutput {
        public:
          PyObject_HEAD
          OutputStreamIndexOutput object;
          static PyObject *wrap_Object(const OutputStreamIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
