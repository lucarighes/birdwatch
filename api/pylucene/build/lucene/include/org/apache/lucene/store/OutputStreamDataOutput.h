#ifndef org_apache_lucene_store_OutputStreamDataOutput_H
#define org_apache_lucene_store_OutputStreamDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace io {
    class IOException;
    class OutputStream;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class OutputStreamDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_02fcdace254a9894,
            mid_close_f2cc1bce94666404,
            mid_writeByte_9c36fec3bac1d0c7,
            mid_writeBytes_43fdd39c09bb2fad,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OutputStreamDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OutputStreamDataOutput(const OutputStreamDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          OutputStreamDataOutput(const ::java::io::OutputStream &);

          void close() const;
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
        extern PyType_Def PY_TYPE_DEF(OutputStreamDataOutput);
        extern PyTypeObject *PY_TYPE(OutputStreamDataOutput);

        class t_OutputStreamDataOutput {
        public:
          PyObject_HEAD
          OutputStreamDataOutput object;
          static PyObject *wrap_Object(const OutputStreamDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
