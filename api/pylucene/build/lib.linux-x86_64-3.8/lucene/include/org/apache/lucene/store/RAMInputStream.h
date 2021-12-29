#ifndef org_apache_lucene_store_RAMInputStream_H
#define org_apache_lucene_store_RAMInputStream_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
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
      namespace store {
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

        class RAMInputStream : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_init$_b0581cc4c8f36a2c,
            mid_close_f2cc1bce94666404,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_length_2e5ae9edcb9b072f,
            mid_readByte_871cd52a74f26213,
            mid_readBytes_43fdd39c09bb2fad,
            mid_seek_9c778c9bce6694df,
            mid_slice_552ef5e8b06b1e84,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RAMInputStream(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RAMInputStream(const RAMInputStream& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          RAMInputStream(const ::java::lang::String &, const ::org::apache::lucene::store::RAMFile &);

          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void seek(jlong) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(RAMInputStream);
        extern PyTypeObject *PY_TYPE(RAMInputStream);

        class t_RAMInputStream {
        public:
          PyObject_HEAD
          RAMInputStream object;
          static PyObject *wrap_Object(const RAMInputStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
