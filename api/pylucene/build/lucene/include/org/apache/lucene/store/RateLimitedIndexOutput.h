#ifndef org_apache_lucene_store_RateLimitedIndexOutput_H
#define org_apache_lucene_store_RateLimitedIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RateLimiter;
      }
    }
  }
}
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

        class RateLimitedIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_fab312cc674c57e8,
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

          explicit RateLimitedIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RateLimitedIndexOutput(const RateLimitedIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          RateLimitedIndexOutput(const ::org::apache::lucene::store::RateLimiter &, const ::org::apache::lucene::store::IndexOutput &);

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
        extern PyType_Def PY_TYPE_DEF(RateLimitedIndexOutput);
        extern PyTypeObject *PY_TYPE(RateLimitedIndexOutput);

        class t_RateLimitedIndexOutput {
        public:
          PyObject_HEAD
          RateLimitedIndexOutput object;
          static PyObject *wrap_Object(const RateLimitedIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
