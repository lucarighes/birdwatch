#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTermsReader_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class SegmentReadState;
      }
      namespace codecs {
        namespace uniformsplit {
          class BlockDecoder;
        }
        class PostingsReaderBase;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Iterator;
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

          class UniformSplitTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
           public:
            enum {
              mid_init$_72f63d35d3099b63,
              mid_checkIntegrity_f2cc1bce94666404,
              mid_close_f2cc1bce94666404,
              mid_iterator_233a192dadb0917d,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_size_9972fcc56b44e79d,
              mid_terms_3976802ad88273cd,
              mid_fillFieldMap_e54b52c5e61e05e0,
              mid_createDictionaryBrowserSupplier_03b5cc4bd6df9eea,
              mid_readFieldsMetadata_88f96fa89297f7a6,
              mid_readEncodedFieldsMetadata_f8199330988075b8,
              mid_readUnencodedFieldsMetadata_d288adeb3eb3c324,
              mid_getTermsRamBytesUsed_2e5ae9edcb9b072f,
              mid_seekFieldsMetadata_129f336879c18407,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitTermsReader(const UniformSplitTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            UniformSplitTermsReader(const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::index::SegmentReadState &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, jboolean);

            void checkIntegrity() const;
            void close() const;
            ::java::util::Iterator iterator() const;
            jlong ramBytesUsed() const;
            jint size() const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(UniformSplitTermsReader);
          extern PyTypeObject *PY_TYPE(UniformSplitTermsReader);

          class t_UniformSplitTermsReader {
          public:
            PyObject_HEAD
            UniformSplitTermsReader object;
            static PyObject *wrap_Object(const UniformSplitTermsReader&);
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
