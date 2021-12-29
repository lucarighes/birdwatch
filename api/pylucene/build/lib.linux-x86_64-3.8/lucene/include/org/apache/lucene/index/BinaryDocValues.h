#ifndef org_apache_lucene_index_BinaryDocValues_H
#define org_apache_lucene_index_BinaryDocValues_H

#include "org/apache/lucene/index/DocValuesIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace index {

        class BinaryDocValues : public ::org::apache::lucene::index::DocValuesIterator {
         public:
          enum {
            mid_binaryValue_7af2ea2e37ce82b8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinaryDocValues(jobject obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinaryDocValues(const BinaryDocValues& obj) : ::org::apache::lucene::index::DocValuesIterator(obj) {}

          ::org::apache::lucene::util::BytesRef binaryValue() const;
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
        extern PyType_Def PY_TYPE_DEF(BinaryDocValues);
        extern PyTypeObject *PY_TYPE(BinaryDocValues);

        class t_BinaryDocValues {
        public:
          PyObject_HEAD
          BinaryDocValues object;
          static PyObject *wrap_Object(const BinaryDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
