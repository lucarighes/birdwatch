#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STMergingBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STMergingBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STBlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class FieldInfos;
        class TermState;
        class PostingsEnum;
      }
      namespace store {
        class IndexInput;
      }
      namespace codecs {
        namespace uniformsplit {
          class BlockDecoder;
          class FieldMetadata;
          class IndexDictionary$BrowserSupplier;
        }
        class BlockTermState;
        class PostingsReaderBase;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
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
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STMergingBlockReader : public ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockReader {
             public:
              enum {
                mid_init$_091726feda784e90,
                mid_next_7af2ea2e37ce82b8,
                mid_postings_d68d14f154b8a983,
                mid_readFieldTermStatesMap_408bd889ee3beae5,
                mid_seekCeil_78824f53cd7bdb8a,
                mid_seekExact_553d972fe19daaec,
                mid_seekExact_9c778c9bce6694df,
                mid_seekExact_59a5c9565dacabef,
                mid_readTermStateIfNotRead_ec21239f6d5a0c5b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STMergingBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STMergingBlockReader(const STMergingBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockReader(obj) {}

              STMergingBlockReader(const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$BrowserSupplier &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, const ::org::apache::lucene::index::FieldInfos &);

              ::org::apache::lucene::util::BytesRef next() const;
              ::org::apache::lucene::index::PostingsEnum postings(const ::java::lang::String &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::index::PostingsEnum &, jint) const;
              void readFieldTermStatesMap(const ::java::util::Map &) const;
              ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
              jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
              void seekExact(jlong) const;
              void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
            };
          }
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
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(STMergingBlockReader);
            extern PyTypeObject *PY_TYPE(STMergingBlockReader);

            class t_STMergingBlockReader {
            public:
              PyObject_HEAD
              STMergingBlockReader object;
              static PyObject *wrap_Object(const STMergingBlockReader&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
