#ifndef org_apache_lucene_store_IndexOutput_H
#define org_apache_lucene_store_IndexOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
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

        class IndexOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_close_f2cc1bce94666404,
            mid_getChecksum_2e5ae9edcb9b072f,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_getName_db9b55ba01e03e4b,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexOutput(const IndexOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          ::java::lang::String getName() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexOutput);
        extern PyTypeObject *PY_TYPE(IndexOutput);

        class t_IndexOutput {
        public:
          PyObject_HEAD
          IndexOutput object;
          static PyObject *wrap_Object(const IndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
