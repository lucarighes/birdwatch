#ifndef org_apache_lucene_index_SegmentReader_H
#define org_apache_lucene_index_SegmentReader_H

#include "org/apache/lucene/index/CodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace codecs {
        class StoredFieldsReader;
        class TermVectorsReader;
        class NormsProducer;
        class DocValuesProducer;
        class PointsReader;
        class FieldsProducer;
      }
      namespace store {
        class Directory;
      }
      namespace index {
        class LeafMetaData;
        class SegmentCommitInfo;
        class IndexReader$CacheHelper;
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

        class SegmentReader : public ::org::apache::lucene::index::CodecReader {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_directory_7452b086ce8219b2,
            mid_getCoreCacheHelper_a64c414fea9a8cf6,
            mid_getDocValuesReader_2703cdf07eabd0a4,
            mid_getFieldInfos_f76601004b1c139b,
            mid_getFieldsReader_ba629b83d3686969,
            mid_getHardLiveDocs_ad87da2b626b21cf,
            mid_getLiveDocs_ad87da2b626b21cf,
            mid_getMetaData_07168aa94cc70619,
            mid_getNormsReader_0502194d89d40c22,
            mid_getPointsReader_0a5d82ff6781f22b,
            mid_getPostingsReader_573c1a94549f7937,
            mid_getReaderCacheHelper_a64c414fea9a8cf6,
            mid_getSegmentInfo_88665de6b57af2eb,
            mid_getSegmentName_db9b55ba01e03e4b,
            mid_getTermVectorsReader_f69eb90f55592154,
            mid_maxDoc_9972fcc56b44e79d,
            mid_numDocs_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            mid_doClose_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentReader(jobject obj) : ::org::apache::lucene::index::CodecReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentReader(const SegmentReader& obj) : ::org::apache::lucene::index::CodecReader(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::store::Directory directory() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::util::Bits getHardLiveDocs() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SegmentCommitInfo getSegmentInfo() const;
          ::java::lang::String getSegmentName() const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          jint maxDoc() const;
          jint numDocs() const;
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
      namespace index {
        extern PyType_Def PY_TYPE_DEF(SegmentReader);
        extern PyTypeObject *PY_TYPE(SegmentReader);

        class t_SegmentReader {
        public:
          PyObject_HEAD
          SegmentReader object;
          static PyObject *wrap_Object(const SegmentReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
