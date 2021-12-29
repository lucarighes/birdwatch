#ifndef org_apache_lucene_document_InetAddressPoint_H
#define org_apache_lucene_document_InetAddressPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class InetAddressPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_setBytesValue_0bdfd2603b7490a8,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InetAddressPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InetAddressPoint(const InetAddressPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;

          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(InetAddressPoint);
        extern PyTypeObject *PY_TYPE(InetAddressPoint);

        class t_InetAddressPoint {
        public:
          PyObject_HEAD
          InetAddressPoint object;
          static PyObject *wrap_Object(const InetAddressPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
