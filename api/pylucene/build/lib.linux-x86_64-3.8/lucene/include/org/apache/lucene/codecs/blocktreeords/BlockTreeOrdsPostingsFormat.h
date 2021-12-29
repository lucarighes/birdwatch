#ifndef org_apache_lucene_codecs_blocktreeords_BlockTreeOrdsPostingsFormat_H
#define org_apache_lucene_codecs_blocktreeords_BlockTreeOrdsPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class FieldsConsumer;
        class FieldsProducer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktreeords {

          class BlockTreeOrdsPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_438c62480c481c65,
              mid_fieldsConsumer_876dc181a1f61814,
              mid_fieldsProducer_c39bdf540a53fab9,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockTreeOrdsPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockTreeOrdsPostingsFormat(const BlockTreeOrdsPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static jint BLOCK_SIZE;

            BlockTreeOrdsPostingsFormat();
            BlockTreeOrdsPostingsFormat(jint, jint);

            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::java::lang::String toString() const;
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
        namespace blocktreeords {
          extern PyType_Def PY_TYPE_DEF(BlockTreeOrdsPostingsFormat);
          extern PyTypeObject *PY_TYPE(BlockTreeOrdsPostingsFormat);

          class t_BlockTreeOrdsPostingsFormat {
          public:
            PyObject_HEAD
            BlockTreeOrdsPostingsFormat object;
            static PyObject *wrap_Object(const BlockTreeOrdsPostingsFormat&);
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
