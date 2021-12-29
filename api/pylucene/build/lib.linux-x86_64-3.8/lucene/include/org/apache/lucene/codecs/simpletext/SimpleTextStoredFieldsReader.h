#ifndef org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsReader_H
#define org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsReader_H

#include "org/apache/lucene/codecs/StoredFieldsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class SegmentInfo;
        class StoredFieldVisitor;
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

          class SimpleTextStoredFieldsReader : public ::org::apache::lucene::codecs::StoredFieldsReader {
           public:
            enum {
              mid_init$_5ab8220dbafb2f4c,
              mid_checkIntegrity_f2cc1bce94666404,
              mid_clone_ba629b83d3686969,
              mid_close_f2cc1bce94666404,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              mid_visitDocument_8f45e7464506ed2f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextStoredFieldsReader(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextStoredFieldsReader(const SimpleTextStoredFieldsReader& obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {}

            SimpleTextStoredFieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &);

            void checkIntegrity() const;
            ::org::apache::lucene::codecs::StoredFieldsReader clone() const;
            void close() const;
            jlong ramBytesUsed() const;
            ::java::lang::String toString() const;
            void visitDocument(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleTextStoredFieldsReader);
          extern PyTypeObject *PY_TYPE(SimpleTextStoredFieldsReader);

          class t_SimpleTextStoredFieldsReader {
          public:
            PyObject_HEAD
            SimpleTextStoredFieldsReader object;
            static PyObject *wrap_Object(const SimpleTextStoredFieldsReader&);
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
