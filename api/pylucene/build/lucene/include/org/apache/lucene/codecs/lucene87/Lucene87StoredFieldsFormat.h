#ifndef org_apache_lucene_codecs_lucene87_Lucene87StoredFieldsFormat_H
#define org_apache_lucene_codecs_lucene87_Lucene87StoredFieldsFormat_H

#include "org/apache/lucene/codecs/StoredFieldsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class StoredFieldsReader;
        class StoredFieldsWriter;
        namespace lucene87 {
          class Lucene87StoredFieldsFormat$Mode;
        }
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
        namespace lucene87 {

          class Lucene87StoredFieldsFormat : public ::org::apache::lucene::codecs::StoredFieldsFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_1031f2dc03090e95,
              mid_fieldsReader_a32861160154ecdb,
              mid_fieldsWriter_e1dda5bd7531bf25,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene87StoredFieldsFormat(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene87StoredFieldsFormat(const Lucene87StoredFieldsFormat& obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {}

            static ::org::apache::lucene::codecs::compressing::CompressionMode *BEST_COMPRESSION_MODE;
            static ::org::apache::lucene::codecs::compressing::CompressionMode *BEST_SPEED_MODE;
            static ::java::lang::String *MODE_KEY;

            Lucene87StoredFieldsFormat();
            Lucene87StoredFieldsFormat(const ::org::apache::lucene::codecs::lucene87::Lucene87StoredFieldsFormat$Mode &);

            ::org::apache::lucene::codecs::StoredFieldsReader fieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::codecs::StoredFieldsWriter fieldsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        namespace lucene87 {
          extern PyType_Def PY_TYPE_DEF(Lucene87StoredFieldsFormat);
          extern PyTypeObject *PY_TYPE(Lucene87StoredFieldsFormat);

          class t_Lucene87StoredFieldsFormat {
          public:
            PyObject_HEAD
            Lucene87StoredFieldsFormat object;
            static PyObject *wrap_Object(const Lucene87StoredFieldsFormat&);
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
