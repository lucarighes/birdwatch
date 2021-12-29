#ifndef org_apache_lucene_index_CorruptIndexException_H
#define org_apache_lucene_index_CorruptIndexException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CorruptIndexException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_15b72f6a44ff93f2,
            mid_init$_7f178f3aad405df6,
            mid_init$_e7dc457af7736fc4,
            mid_init$_fb9b37d4c9399590,
            mid_init$_830df5b4a59b21d0,
            mid_init$_5df93809587d438c,
            mid_getOriginalMessage_db9b55ba01e03e4b,
            mid_getResourceDescription_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CorruptIndexException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CorruptIndexException(const CorruptIndexException& obj) : ::java::io::IOException(obj) {}

          CorruptIndexException(const ::java::lang::String &, const ::java::lang::String &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataInput &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataOutput &);
          CorruptIndexException(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::Throwable &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataInput &, const ::java::lang::Throwable &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataOutput &, const ::java::lang::Throwable &);

          ::java::lang::String getOriginalMessage() const;
          ::java::lang::String getResourceDescription() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(CorruptIndexException);
        extern PyTypeObject *PY_TYPE(CorruptIndexException);

        class t_CorruptIndexException {
        public:
          PyObject_HEAD
          CorruptIndexException object;
          static PyObject *wrap_Object(const CorruptIndexException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
