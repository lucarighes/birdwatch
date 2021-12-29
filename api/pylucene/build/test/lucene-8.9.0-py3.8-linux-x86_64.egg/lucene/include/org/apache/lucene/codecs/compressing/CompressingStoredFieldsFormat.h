#ifndef org_apache_lucene_codecs_compressing_CompressingStoredFieldsFormat_H
#define org_apache_lucene_codecs_compressing_CompressingStoredFieldsFormat_H

#include "org/apache/lucene/codecs/StoredFieldsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class StoredFieldsReader;
        class StoredFieldsWriter;
        namespace compressing {
          class CompressionMode;
        }
      }
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class SegmentInfo;
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

          class CompressingStoredFieldsFormat : public ::org::apache::lucene::codecs::StoredFieldsFormat {
           public:
            enum {
              mid_init$_1b5940461b8aa07f,
              mid_init$_1bd7087d30e64209,
              mid_fieldsReader_a32861160154ecdb,
              mid_fieldsWriter_e1dda5bd7531bf25,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingStoredFieldsFormat(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompressingStoredFieldsFormat(const CompressingStoredFieldsFormat& obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {}

            CompressingStoredFieldsFormat(const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint, jint, jint);
            CompressingStoredFieldsFormat(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint, jint, jint);

            ::org::apache::lucene::codecs::StoredFieldsReader fieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::codecs::StoredFieldsWriter fieldsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        namespace compressing {
          extern PyType_Def PY_TYPE_DEF(CompressingStoredFieldsFormat);
          extern PyTypeObject *PY_TYPE(CompressingStoredFieldsFormat);

          class t_CompressingStoredFieldsFormat {
          public:
            PyObject_HEAD
            CompressingStoredFieldsFormat object;
            static PyObject *wrap_Object(const CompressingStoredFieldsFormat&);
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
