#ifndef org_apache_pylucene_store_PythonIndexOutput_H
#define org_apache_pylucene_store_PythonIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace lang {
    class Throwable;
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_15b72f6a44ff93f2,
            mid_close_f2cc1bce94666404,
            mid_finalize_f2cc1bce94666404,
            mid_getChecksum_2e5ae9edcb9b072f,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            mid_writeByte_9c36fec3bac1d0c7,
            mid_writeBytes_9ffdf271836656c4,
            mid_writeBytes_43fdd39c09bb2fad,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIndexOutput(const PythonIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          PythonIndexOutput(const ::java::lang::String &, const ::java::lang::String &);

          void close() const;
          void finalize() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonIndexOutput);
        extern PyTypeObject *PY_TYPE(PythonIndexOutput);

        class t_PythonIndexOutput {
        public:
          PyObject_HEAD
          PythonIndexOutput object;
          static PyObject *wrap_Object(const PythonIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
