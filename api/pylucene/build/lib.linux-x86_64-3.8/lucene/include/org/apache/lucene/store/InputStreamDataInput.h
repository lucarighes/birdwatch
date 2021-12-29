#ifndef org_apache_lucene_store_InputStreamDataInput_H
#define org_apache_lucene_store_InputStreamDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
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

        class InputStreamDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_init$_a227449bf251faf1,
            mid_close_f2cc1bce94666404,
            mid_readByte_871cd52a74f26213,
            mid_readBytes_43fdd39c09bb2fad,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InputStreamDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InputStreamDataInput(const InputStreamDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          InputStreamDataInput(const ::java::io::InputStream &);

          void close() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(InputStreamDataInput);
        extern PyTypeObject *PY_TYPE(InputStreamDataInput);

        class t_InputStreamDataInput {
        public:
          PyObject_HEAD
          InputStreamDataInput object;
          static PyObject *wrap_Object(const InputStreamDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
