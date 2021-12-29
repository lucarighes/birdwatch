#ifndef org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsWriter_H
#define org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsWriter_H

#include "org/apache/lucene/codecs/StoredFieldsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class IndexableField;
        class FieldInfo;
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
        namespace simpletext {

          class SimpleTextStoredFieldsWriter : public ::org::apache::lucene::codecs::StoredFieldsWriter {
           public:
            enum {
              mid_init$_2bb5442de459a81e,
              mid_close_f2cc1bce94666404,
              mid_finish_8a63e70a8b43ee48,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_startDocument_f2cc1bce94666404,
              mid_writeField_c717cea83051791d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextStoredFieldsWriter(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextStoredFieldsWriter(const SimpleTextStoredFieldsWriter& obj) : ::org::apache::lucene::codecs::StoredFieldsWriter(obj) {}

            SimpleTextStoredFieldsWriter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);

            void close() const;
            void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextStoredFieldsWriter);
          extern PyTypeObject *PY_TYPE(SimpleTextStoredFieldsWriter);

          class t_SimpleTextStoredFieldsWriter {
          public:
            PyObject_HEAD
            SimpleTextStoredFieldsWriter object;
            static PyObject *wrap_Object(const SimpleTextStoredFieldsWriter&);
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
