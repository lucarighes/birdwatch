#ifndef org_apache_lucene_document_InetAddressRange_H
#define org_apache_lucene_document_InetAddressRange_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class InetAddressRange : public ::org::apache::lucene::document::Field {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InetAddressRange(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InetAddressRange(const InetAddressRange& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;
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
        extern PyType_Def PY_TYPE_DEF(InetAddressRange);
        extern PyTypeObject *PY_TYPE(InetAddressRange);

        class t_InetAddressRange {
        public:
          PyObject_HEAD
          InetAddressRange object;
          static PyObject *wrap_Object(const InetAddressRange&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
