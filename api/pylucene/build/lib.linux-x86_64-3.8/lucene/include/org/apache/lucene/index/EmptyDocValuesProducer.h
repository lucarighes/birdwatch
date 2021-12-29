#ifndef org_apache_lucene_index_EmptyDocValuesProducer_H
#define org_apache_lucene_index_EmptyDocValuesProducer_H

#include "org/apache/lucene/codecs/DocValuesProducer.h"

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
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class EmptyDocValuesProducer : public ::org::apache::lucene::codecs::DocValuesProducer {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_close_f2cc1bce94666404,
            mid_getBinary_cc93390a800a98c7,
            mid_getNumeric_d63b818fc8746ddc,
            mid_getSorted_c19eb99297e55136,
            mid_getSortedNumeric_0c331c793dd9b6b8,
            mid_getSortedSet_5c6b5be0c46973db,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EmptyDocValuesProducer(jobject obj) : ::org::apache::lucene::codecs::DocValuesProducer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EmptyDocValuesProducer(const EmptyDocValuesProducer& obj) : ::org::apache::lucene::codecs::DocValuesProducer(obj) {}

          void checkIntegrity() const;
          void close() const;
          ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::NumericDocValues getNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedDocValues getSorted(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSet(const ::org::apache::lucene::index::FieldInfo &) const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(EmptyDocValuesProducer);
        extern PyTypeObject *PY_TYPE(EmptyDocValuesProducer);

        class t_EmptyDocValuesProducer {
        public:
          PyObject_HEAD
          EmptyDocValuesProducer object;
          static PyObject *wrap_Object(const EmptyDocValuesProducer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
