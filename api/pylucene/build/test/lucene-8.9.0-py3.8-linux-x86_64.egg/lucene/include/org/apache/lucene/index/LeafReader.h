#ifndef org_apache_lucene_index_LeafReader_H
#define org_apache_lucene_index_LeafReader_H

#include "org/apache/lucene/index/IndexReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class Terms;
        class PointValues;
        class SortedNumericDocValues;
        class BinaryDocValues;
        class Term;
        class SortedSetDocValues;
        class LeafReaderContext;
        class PostingsEnum;
        class LeafMetaData;
        class NumericDocValues;
        class IndexReader$CacheHelper;
        class SortedDocValues;
        class FieldInfos;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

        class LeafReader : public ::org::apache::lucene::index::IndexReader {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_docFreq_d7008d5a6820eefc,
            mid_getBinaryDocValues_6cf59c3533d4df22,
            mid_getContext_fb87af9aadb3c2c5,
            mid_getCoreCacheHelper_a64c414fea9a8cf6,
            mid_getDocCount_a5a7d1128e9e2bb7,
            mid_getFieldInfos_f76601004b1c139b,
            mid_getLiveDocs_ad87da2b626b21cf,
            mid_getMetaData_07168aa94cc70619,
            mid_getNormValues_2b2c87c24a70ef49,
            mid_getNumericDocValues_2b2c87c24a70ef49,
            mid_getPointValues_72b990dbae0eea09,
            mid_getSortedDocValues_adb16e9c5e3d9604,
            mid_getSortedNumericDocValues_25e77b19828c4dfa,
            mid_getSortedSetDocValues_379820f082b251eb,
            mid_getSumDocFreq_b1e05207ec98e246,
            mid_getSumTotalTermFreq_b1e05207ec98e246,
            mid_postings_506464e9109e6038,
            mid_postings_4e0cd4a8b48be744,
            mid_terms_3976802ad88273cd,
            mid_totalTermFreq_4edac0e8611d73f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafReader(jobject obj) : ::org::apache::lucene::index::IndexReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafReader(const LeafReader& obj) : ::org::apache::lucene::index::IndexReader(obj) {}

          void checkIntegrity() const;
          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::LeafReaderContext getContext() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          jint getDocCount(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::Term &) const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::Term &, jint) const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
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
        extern PyType_Def PY_TYPE_DEF(LeafReader);
        extern PyTypeObject *PY_TYPE(LeafReader);

        class t_LeafReader {
        public:
          PyObject_HEAD
          LeafReader object;
          static PyObject *wrap_Object(const LeafReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
