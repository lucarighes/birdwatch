#ifndef org_apache_lucene_codecs_compressing_CompressingStoredFieldsReader_H
#define org_apache_lucene_codecs_compressing_CompressingStoredFieldsReader_H

#include "org/apache/lucene/codecs/StoredFieldsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace util {
        class Accountable;
      }
      namespace index {
        class SegmentInfo;
        class StoredFieldVisitor;
        class FieldInfos;
      }
      namespace codecs {
        namespace compressing {
          class CompressionMode;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
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
        namespace compressing {

          class CompressingStoredFieldsReader : public ::org::apache::lucene::codecs::StoredFieldsReader {
           public:
            enum {
              mid_init$_f8f677347d54d3ca,
              mid_checkIntegrity_f2cc1bce94666404,
              mid_clone_ba629b83d3686969,
              mid_close_f2cc1bce94666404,
              mid_getChildResources_d4dfbf7a26ff41df,
              mid_getMergeInstance_ba629b83d3686969,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              mid_visitDocument_8f45e7464506ed2f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingStoredFieldsReader(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompressingStoredFieldsReader(const CompressingStoredFieldsReader& obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {}

            CompressingStoredFieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &);

            void checkIntegrity() const;
            ::org::apache::lucene::codecs::StoredFieldsReader clone() const;
            void close() const;
            ::java::util::Collection getChildResources() const;
            ::org::apache::lucene::codecs::StoredFieldsReader getMergeInstance() const;
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
        namespace compressing {
          extern PyType_Def PY_TYPE_DEF(CompressingStoredFieldsReader);
          extern PyTypeObject *PY_TYPE(CompressingStoredFieldsReader);

          class t_CompressingStoredFieldsReader {
          public:
            PyObject_HEAD
            CompressingStoredFieldsReader object;
            static PyObject *wrap_Object(const CompressingStoredFieldsReader&);
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
