#ifndef org_apache_lucene_index_FilterCodecReader_H
#define org_apache_lucene_index_FilterCodecReader_H

#include "org/apache/lucene/index/CodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class Accountable;
      }
      namespace codecs {
        class StoredFieldsReader;
        class TermVectorsReader;
        class NormsProducer;
        class DocValuesProducer;
        class PointsReader;
        class FieldsProducer;
      }
      namespace index {
        class LeafMetaData;
        class FieldInfos;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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

        class FilterCodecReader : public ::org::apache::lucene::index::CodecReader {
         public:
          enum {
            mid_init$_a681a30a093522b3,
            mid_checkIntegrity_f2cc1bce94666404,
            mid_getChildResources_d4dfbf7a26ff41df,
            mid_getDelegate_e615b5c7a728716b,
            mid_getDocValuesReader_2703cdf07eabd0a4,
            mid_getFieldInfos_f76601004b1c139b,
            mid_getFieldsReader_ba629b83d3686969,
            mid_getLiveDocs_ad87da2b626b21cf,
            mid_getMetaData_07168aa94cc70619,
            mid_getNormsReader_0502194d89d40c22,
            mid_getPointsReader_0a5d82ff6781f22b,
            mid_getPostingsReader_573c1a94549f7937,
            mid_getTermVectorsReader_f69eb90f55592154,
            mid_maxDoc_9972fcc56b44e79d,
            mid_numDocs_9972fcc56b44e79d,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_unwrap_5a4a763f0e786638,
            mid_doClose_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterCodecReader(jobject obj) : ::org::apache::lucene::index::CodecReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterCodecReader(const FilterCodecReader& obj) : ::org::apache::lucene::index::CodecReader(obj) {}

          FilterCodecReader(const ::org::apache::lucene::index::CodecReader &);

          void checkIntegrity() const;
          ::java::util::Collection getChildResources() const;
          ::org::apache::lucene::index::CodecReader getDelegate() const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          jint maxDoc() const;
          jint numDocs() const;
          jlong ramBytesUsed() const;
          static ::org::apache::lucene::index::CodecReader unwrap(const ::org::apache::lucene::index::CodecReader &);
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
        extern PyType_Def PY_TYPE_DEF(FilterCodecReader);
        extern PyTypeObject *PY_TYPE(FilterCodecReader);

        class t_FilterCodecReader {
        public:
          PyObject_HEAD
          FilterCodecReader object;
          static PyObject *wrap_Object(const FilterCodecReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
