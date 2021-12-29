#ifndef org_apache_lucene_index_SortingCodecReader_H
#define org_apache_lucene_index_SortingCodecReader_H

#include "org/apache/lucene/index/FilterCodecReader.h"

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
      namespace search {
        class Sort;
      }
      namespace index {
        class CodecReader;
        class LeafMetaData;
        class IndexReader$CacheHelper;
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

        class SortingCodecReader : public ::org::apache::lucene::index::FilterCodecReader {
         public:
          enum {
            mid_getCoreCacheHelper_a64c414fea9a8cf6,
            mid_getDocValuesReader_2703cdf07eabd0a4,
            mid_getFieldsReader_ba629b83d3686969,
            mid_getLiveDocs_ad87da2b626b21cf,
            mid_getMetaData_07168aa94cc70619,
            mid_getNormsReader_0502194d89d40c22,
            mid_getPointsReader_0a5d82ff6781f22b,
            mid_getPostingsReader_573c1a94549f7937,
            mid_getReaderCacheHelper_a64c414fea9a8cf6,
            mid_getTermVectorsReader_f69eb90f55592154,
            mid_toString_db9b55ba01e03e4b,
            mid_wrap_77fdfbdd4d261550,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortingCodecReader(jobject obj) : ::org::apache::lucene::index::FilterCodecReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortingCodecReader(const SortingCodecReader& obj) : ::org::apache::lucene::index::FilterCodecReader(obj) {}

          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::index::CodecReader wrap(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::search::Sort &);
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
        extern PyType_Def PY_TYPE_DEF(SortingCodecReader);
        extern PyTypeObject *PY_TYPE(SortingCodecReader);

        class t_SortingCodecReader {
        public:
          PyObject_HEAD
          SortingCodecReader object;
          static PyObject *wrap_Object(const SortingCodecReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
