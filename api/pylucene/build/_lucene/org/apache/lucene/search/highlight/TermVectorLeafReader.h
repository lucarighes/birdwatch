#ifndef org_apache_lucene_search_highlight_TermVectorLeafReader_H
#define org_apache_lucene_search_highlight_TermVectorLeafReader_H

#include "org/apache/lucene/index/LeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class Terms;
        class PointValues;
        class Fields;
        class BinaryDocValues;
        class SortedNumericDocValues;
        class SortedSetDocValues;
        class LeafMetaData;
        class NumericDocValues;
        class IndexReader$CacheHelper;
        class SortedDocValues;
        class StoredFieldVisitor;
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
      namespace search {
        namespace highlight {

          class TermVectorLeafReader : public ::org::apache::lucene::index::LeafReader {
           public:
            enum {
              mid_init$_ba8cc55c7bf534a9,
              mid_checkIntegrity_f2cc1bce94666404,
              mid_document_8f45e7464506ed2f,
              mid_getBinaryDocValues_6cf59c3533d4df22,
              mid_getCoreCacheHelper_a64c414fea9a8cf6,
              mid_getFieldInfos_f76601004b1c139b,
              mid_getLiveDocs_ad87da2b626b21cf,
              mid_getMetaData_07168aa94cc70619,
              mid_getNormValues_2b2c87c24a70ef49,
              mid_getNumericDocValues_2b2c87c24a70ef49,
              mid_getPointValues_72b990dbae0eea09,
              mid_getReaderCacheHelper_a64c414fea9a8cf6,
              mid_getSortedDocValues_adb16e9c5e3d9604,
              mid_getSortedNumericDocValues_25e77b19828c4dfa,
              mid_getSortedSetDocValues_379820f082b251eb,
              mid_getTermVectors_9997c94b783ad8be,
              mid_maxDoc_9972fcc56b44e79d,
              mid_numDocs_9972fcc56b44e79d,
              mid_terms_3976802ad88273cd,
              mid_doClose_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermVectorLeafReader(jobject obj) : ::org::apache::lucene::index::LeafReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermVectorLeafReader(const TermVectorLeafReader& obj) : ::org::apache::lucene::index::LeafReader(obj) {}

            TermVectorLeafReader(const ::java::lang::String &, const ::org::apache::lucene::index::Terms &);

            void checkIntegrity() const;
            void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
            ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
            ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
            ::org::apache::lucene::util::Bits getLiveDocs() const;
            ::org::apache::lucene::index::LeafMetaData getMetaData() const;
            ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
            ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::Fields getTermVectors(jint) const;
            jint maxDoc() const;
            jint numDocs() const;
            ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(TermVectorLeafReader);
          extern PyTypeObject *PY_TYPE(TermVectorLeafReader);

          class t_TermVectorLeafReader {
          public:
            PyObject_HEAD
            TermVectorLeafReader object;
            static PyObject *wrap_Object(const TermVectorLeafReader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
