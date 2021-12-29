#ifndef org_apache_lucene_store_IndexInput_H
#define org_apache_lucene_store_IndexInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
        class RandomAccessInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class IndexInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_clone_831b777072456914,
            mid_close_f2cc1bce94666404,
            mid_getFilePointer_2e5ae9edcb9b072f,
            mid_length_2e5ae9edcb9b072f,
            mid_randomAccessSlice_0b9b799a40079550,
            mid_seek_9c778c9bce6694df,
            mid_slice_552ef5e8b06b1e84,
            mid_toString_db9b55ba01e03e4b,
            mid_getFullSliceDescription_9bfa75c9f141b67f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexInput(const IndexInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          IndexInput clone() const;
          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          ::org::apache::lucene::store::RandomAccessInput randomAccessSlice(jlong, jlong) const;
          void seek(jlong) const;
          IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexInput);
        extern PyTypeObject *PY_TYPE(IndexInput);

        class t_IndexInput {
        public:
          PyObject_HEAD
          IndexInput object;
          static PyObject *wrap_Object(const IndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
