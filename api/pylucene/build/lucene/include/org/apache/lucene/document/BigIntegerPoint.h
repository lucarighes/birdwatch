#ifndef org_apache_lucene_document_BigIntegerPoint_H
#define org_apache_lucene_document_BigIntegerPoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class BigIntegerPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_numericValue_f5813404cc5e3a1e,
            mid_setBytesValue_0bdfd2603b7490a8,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BigIntegerPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BigIntegerPoint(const BigIntegerPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;

          ::java::lang::Number numericValue() const;
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
        extern PyType_Def PY_TYPE_DEF(BigIntegerPoint);
        extern PyTypeObject *PY_TYPE(BigIntegerPoint);

        class t_BigIntegerPoint {
        public:
          PyObject_HEAD
          BigIntegerPoint object;
          static PyObject *wrap_Object(const BigIntegerPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
