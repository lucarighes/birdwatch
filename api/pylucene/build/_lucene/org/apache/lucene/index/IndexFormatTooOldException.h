#ifndef org_apache_lucene_index_IndexFormatTooOldException_H
#define org_apache_lucene_index_IndexFormatTooOldException_H

#include "java/io/IOException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Integer;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexFormatTooOldException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_15b72f6a44ff93f2,
            mid_init$_5aa4f44d6ba79c5f,
            mid_init$_76b561b3dd9414f1,
            mid_init$_856da08abc13bb8d,
            mid_getMaxVersion_44afe7bc382a8996,
            mid_getMinVersion_44afe7bc382a8996,
            mid_getReason_db9b55ba01e03e4b,
            mid_getResourceDescription_db9b55ba01e03e4b,
            mid_getVersion_44afe7bc382a8996,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFormatTooOldException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexFormatTooOldException(const IndexFormatTooOldException& obj) : ::java::io::IOException(obj) {}

          IndexFormatTooOldException(const ::java::lang::String &, const ::java::lang::String &);
          IndexFormatTooOldException(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &);
          IndexFormatTooOldException(const ::java::lang::String &, jint, jint, jint);
          IndexFormatTooOldException(const ::org::apache::lucene::store::DataInput &, jint, jint, jint);

          ::java::lang::Integer getMaxVersion() const;
          ::java::lang::Integer getMinVersion() const;
          ::java::lang::String getReason() const;
          ::java::lang::String getResourceDescription() const;
          ::java::lang::Integer getVersion() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexFormatTooOldException);
        extern PyTypeObject *PY_TYPE(IndexFormatTooOldException);

        class t_IndexFormatTooOldException {
        public:
          PyObject_HEAD
          IndexFormatTooOldException object;
          static PyObject *wrap_Object(const IndexFormatTooOldException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
