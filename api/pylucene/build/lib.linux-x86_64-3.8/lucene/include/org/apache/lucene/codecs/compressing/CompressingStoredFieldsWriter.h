#ifndef org_apache_lucene_codecs_compressing_CompressingStoredFieldsWriter_H
#define org_apache_lucene_codecs_compressing_CompressingStoredFieldsWriter_H

#include "org/apache/lucene/codecs/StoredFieldsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableField;
        class FieldInfo;
        class MergeState;
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
      namespace codecs {
        namespace compressing {

          class CompressingStoredFieldsWriter : public ::org::apache::lucene::codecs::StoredFieldsWriter {
           public:
            enum {
              mid_close_f2cc1bce94666404,
              mid_finish_8a63e70a8b43ee48,
              mid_finishDocument_f2cc1bce94666404,
              mid_merge_6926471512b57791,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_startDocument_f2cc1bce94666404,
              mid_writeField_c717cea83051791d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingStoredFieldsWriter(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompressingStoredFieldsWriter(const CompressingStoredFieldsWriter& obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {}

            static ::java::lang::String *FIELDS_EXTENSION;
            static ::java::lang::String *INDEX_CODEC_NAME;
            static ::java::lang::String *INDEX_EXTENSION;
            static ::java::lang::String *META_EXTENSION;

            void close() const;
            void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
            void finishDocument() const;
            jint merge(const ::org::apache::lucene::index::MergeState &) const;
            jlong ramBytesUsed() const;
            void startDocument() const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::IndexableField &) const;
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
        namespace compressing {
          extern PyType_Def PY_TYPE_DEF(CompressingStoredFieldsWriter);
          extern PyTypeObject *PY_TYPE(CompressingStoredFieldsWriter);

          class t_CompressingStoredFieldsWriter {
          public:
            PyObject_HEAD
            CompressingStoredFieldsWriter object;
            static PyObject *wrap_Object(const CompressingStoredFieldsWriter&);
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
