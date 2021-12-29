#ifndef org_apache_lucene_codecs_uniformsplit_BlockReader_H
#define org_apache_lucene_codecs_uniformsplit_BlockReader_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class ImpactsEnum;
        class TermState;
        class PostingsEnum;
      }
      namespace util {
        class Accountable;
        class BytesRef;
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
      namespace codecs {
        namespace uniformsplit {

          class BlockReader : public ::org::apache::lucene::index::BaseTermsEnum {
           public:
            enum {
              mid_docFreq_9972fcc56b44e79d,
              mid_impacts_db5ea3c87adc7c65,
              mid_next_7af2ea2e37ce82b8,
              mid_ord_2e5ae9edcb9b072f,
              mid_postings_bb7f8f714d51176b,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_seekCeil_78824f53cd7bdb8a,
              mid_seekExact_553d972fe19daaec,
              mid_seekExact_9c778c9bce6694df,
              mid_seekExact_59a5c9565dacabef,
              mid_term_7af2ea2e37ce82b8,
              mid_termState_774a8ebb2c222d2d,
              mid_totalTermFreq_2e5ae9edcb9b072f,
              mid_nextTerm_7af2ea2e37ce82b8,
              mid_getOrCreateDictionaryBrowser_f36d038b8a827a9e,
              mid_isBeyondLastTerm_70c1ccb4f1d27d02,
              mid_initializeHeader_c61df66683b6c9c2,
              mid_readLineInBlock_d9d7e41577bb8485,
              mid_seekInBlock_78824f53cd7bdb8a,
              mid_seekInBlock_4dd3141a587a8238,
              mid_createDeltaBaseTermStateSerializer_582cc298510958b7,
              mid_isCurrentTerm_553d972fe19daaec,
              mid_compareToMiddleAndJump_1c2e5fa34f4312de,
              mid_initializeBlockReadLazily_f2cc1bce94666404,
              mid_createBlockHeaderSerializer_d9142c3f0777a24f,
              mid_createBlockLineSerializer_8d7f678ac5857d60,
              mid_readHeader_8b6637037729ea33,
              mid_decodeBlockBytesIfNeeded_83238e65a54c68bb,
              mid_readTermStateIfNotRead_ec21239f6d5a0c5b,
              mid_readTermState_ec21239f6d5a0c5b,
              mid_clearTermState_f2cc1bce94666404,
              mid_newCorruptIndexException_798ec2323aebd6e3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockReader(jobject obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockReader(const BlockReader& obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {}

            jint docFreq() const;
            ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
            ::org::apache::lucene::util::BytesRef next() const;
            jlong ord() const;
            ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
            jlong ramBytesUsed() const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
            ::org::apache::lucene::util::BytesRef term() const;
            ::org::apache::lucene::index::TermState termState() const;
            jlong totalTermFreq() const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(BlockReader);
          extern PyTypeObject *PY_TYPE(BlockReader);

          class t_BlockReader {
          public:
            PyObject_HEAD
            BlockReader object;
            static PyObject *wrap_Object(const BlockReader&);
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
