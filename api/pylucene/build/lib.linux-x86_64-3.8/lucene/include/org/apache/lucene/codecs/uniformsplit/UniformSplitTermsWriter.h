#ifndef org_apache_lucene_codecs_uniformsplit_UniformSplitTermsWriter_H
#define org_apache_lucene_codecs_uniformsplit_UniformSplitTermsWriter_H

#include "org/apache/lucene/codecs/FieldsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Fields;
        class SegmentWriteState;
      }
      namespace codecs {
        class NormsProducer;
        namespace uniformsplit {
          class BlockEncoder;
        }
        class PostingsWriterBase;
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

          class UniformSplitTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
           public:
            enum {
              mid_init$_858a5da9538896c8,
              mid_init$_035eacbde5d790cf,
              mid_close_f2cc1bce94666404,
              mid_write_a02f5612a398fd43,
              mid_writeDictionary_f9451def1ea25bf5,
              mid_writePostingLine_668b78212341f993,
              mid_writeFieldsMetadata_2b54f802835ab89b,
              mid_writeFieldTerms_163a88a037f23099,
              mid_validateSettings_438c62480c481c65,
              mid_writeUnencodedFieldsMetadata_a44c60d9058935d3,
              mid_writeEncodedFieldsMetadata_a44c60d9058935d3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UniformSplitTermsWriter(jobject obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UniformSplitTermsWriter(const UniformSplitTermsWriter& obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {}

            static jint DEFAULT_DELTA_NUM_LINES;
            static jint DEFAULT_TARGET_NUM_BLOCK_LINES;

            UniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);
            UniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);

            void close() const;
            void write(const ::org::apache::lucene::index::Fields &, const ::org::apache::lucene::codecs::NormsProducer &) const;
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
          extern PyType_Def PY_TYPE_DEF(UniformSplitTermsWriter);
          extern PyTypeObject *PY_TYPE(UniformSplitTermsWriter);

          class t_UniformSplitTermsWriter {
          public:
            PyObject_HEAD
            UniformSplitTermsWriter object;
            static PyObject *wrap_Object(const UniformSplitTermsWriter&);
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
