#ifndef org_apache_lucene_index_CodecReader_H
#define org_apache_lucene_index_CodecReader_H

#include "org/apache/lucene/index/LeafReader.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class FieldsProducer;
        class PointsReader;
        class StoredFieldsReader;
        class TermVectorsReader;
        class NormsProducer;
        class DocValuesProducer;
      }
      namespace index {
        class PointValues;
        class BinaryDocValues;
        class NumericDocValues;
        class SortedDocValues;
        class StoredFieldVisitor;
        class Terms;
        class SortedNumericDocValues;
        class Fields;
        class SortedSetDocValues;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CodecReader : public ::org::apache::lucene::index::LeafReader {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_document_8f45e7464506ed2f,
            mid_getBinaryDocValues_6cf59c3533d4df22,
            mid_getChildResources_d4dfbf7a26ff41df,
            mid_getDocValuesReader_2703cdf07eabd0a4,
            mid_getFieldsReader_ba629b83d3686969,
            mid_getNormValues_2b2c87c24a70ef49,
            mid_getNormsReader_0502194d89d40c22,
            mid_getNumericDocValues_2b2c87c24a70ef49,
            mid_getPointValues_72b990dbae0eea09,
            mid_getPointsReader_0a5d82ff6781f22b,
            mid_getPostingsReader_573c1a94549f7937,
            mid_getSortedDocValues_adb16e9c5e3d9604,
            mid_getSortedNumericDocValues_25e77b19828c4dfa,
            mid_getSortedSetDocValues_379820f082b251eb,
            mid_getTermVectors_9997c94b783ad8be,
            mid_getTermVectorsReader_f69eb90f55592154,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_terms_3976802ad88273cd,
            mid_doClose_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CodecReader(jobject obj) : ::org::apache::lucene::index::LeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CodecReader(const CodecReader& obj) : ::org::apache::lucene::index::LeafReader(obj) {}

          void checkIntegrity() const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::java::util::Collection getChildResources() const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::Fields getTermVectors(jint) const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          jlong ramBytesUsed() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(CodecReader);
        extern PyTypeObject *PY_TYPE(CodecReader);

        class t_CodecReader {
        public:
          PyObject_HEAD
          CodecReader object;
          static PyObject *wrap_Object(const CodecReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
