#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/BlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class FieldInfos;
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
        class PostingsReaderBase;
      }
      namespace util {
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
          namespace sharedterms {

            class STBlockReader : public ::org::apache::lucene::codecs::uniformsplit::BlockReader {
             public:
              enum {
                mid_init$_091726feda784e90,
                mid_next_7af2ea2e37ce82b8,
                mid_seekCeil_78824f53cd7bdb8a,
                mid_seekExact_553d972fe19daaec,
                mid_nextTerm_7af2ea2e37ce82b8,
                mid_isBeyondLastTerm_70c1ccb4f1d27d02,
                mid_createBlockLineSerializer_b823d7b540bbfc47,
                mid_readTermState_ec21239f6d5a0c5b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STBlockReader(const STBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {}

              STBlockReader(const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$BrowserSupplier &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, const ::org::apache::lucene::index::FieldInfos &);

              ::org::apache::lucene::util::BytesRef next() const;
              ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
              jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
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
            extern PyType_Def PY_TYPE_DEF(STBlockReader);
            extern PyTypeObject *PY_TYPE(STBlockReader);

            class t_STBlockReader {
            public:
              PyObject_HEAD
              STBlockReader object;
              static PyObject *wrap_Object(const STBlockReader&);
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
