#ifndef org_apache_lucene_codecs_DocValuesProducer_H
#define org_apache_lucene_codecs_DocValuesProducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class BinaryDocValues;
        class SortedSetDocValues;
        class NumericDocValues;
        class FieldInfo;
        class SortedDocValues;
      }
      namespace util {
        class Accountable;
      }
      namespace codecs {
        class DocValuesProducer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
      namespace codecs {

        class DocValuesProducer : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_getBinary_cc93390a800a98c7,
            mid_getMergeInstance_2703cdf07eabd0a4,
            mid_getNumeric_d63b818fc8746ddc,
            mid_getSorted_c19eb99297e55136,
            mid_getSortedNumeric_0c331c793dd9b6b8,
            mid_getSortedSet_5c6b5be0c46973db,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesProducer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesProducer(const DocValuesProducer& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::FieldInfo &) const;
          DocValuesProducer getMergeInstance() const;
          ::org::apache::lucene::index::NumericDocValues getNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedDocValues getSorted(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSet(const ::org::apache::lucene::index::FieldInfo &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(DocValuesProducer);
        extern PyTypeObject *PY_TYPE(DocValuesProducer);

        class t_DocValuesProducer {
        public:
          PyObject_HEAD
          DocValuesProducer object;
          static PyObject *wrap_Object(const DocValuesProducer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
