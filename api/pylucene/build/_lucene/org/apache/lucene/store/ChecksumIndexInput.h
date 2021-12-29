#ifndef org_apache_lucene_store_ChecksumIndexInput_H
#define org_apache_lucene_store_ChecksumIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
  namespace io {
    class IOException;
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

        class ChecksumIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_getChecksum_2e5ae9edcb9b072f,
            mid_seek_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ChecksumIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ChecksumIndexInput(const ChecksumIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          jlong getChecksum() const;
          void seek(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(ChecksumIndexInput);
        extern PyTypeObject *PY_TYPE(ChecksumIndexInput);

        class t_ChecksumIndexInput {
        public:
          PyObject_HEAD
          ChecksumIndexInput object;
          static PyObject *wrap_Object(const ChecksumIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
