#ifndef org_apache_lucene_codecs_blocktree_BlockTreeTermsWriter_H
#define org_apache_lucene_codecs_blocktree_BlockTreeTermsWriter_H

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
        namespace blocktree {

          class BlockTreeTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
           public:
            enum {
              mid_init$_6610f1188867ac3d,
              mid_close_f2cc1bce94666404,
              mid_validateSettings_438c62480c481c65,
              mid_write_a02f5612a398fd43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockTreeTermsWriter(jobject obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockTreeTermsWriter(const BlockTreeTermsWriter& obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {}

            static jint DEFAULT_MAX_BLOCK_SIZE;
            static jint DEFAULT_MIN_BLOCK_SIZE;

            BlockTreeTermsWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::PostingsWriterBase &, jint, jint);

            void close() const;
            static void validateSettings(jint, jint);
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
        namespace blocktree {
          extern PyType_Def PY_TYPE_DEF(BlockTreeTermsWriter);
          extern PyTypeObject *PY_TYPE(BlockTreeTermsWriter);

          class t_BlockTreeTermsWriter {
          public:
            PyObject_HEAD
            BlockTreeTermsWriter object;
            static PyObject *wrap_Object(const BlockTreeTermsWriter&);
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
