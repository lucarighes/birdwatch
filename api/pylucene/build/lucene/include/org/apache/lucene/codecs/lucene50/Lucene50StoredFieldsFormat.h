#ifndef org_apache_lucene_codecs_lucene50_Lucene50StoredFieldsFormat_H
#define org_apache_lucene_codecs_lucene50_Lucene50StoredFieldsFormat_H

#include "org/apache/lucene/codecs/StoredFieldsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class StoredFieldsReader;
        class StoredFieldsWriter;
        namespace lucene50 {
          class Lucene50StoredFieldsFormat$Mode;
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
        namespace lucene50 {

          class Lucene50StoredFieldsFormat : public ::org::apache::lucene::codecs::StoredFieldsFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_6fcfbdc0d15e68b8,
              mid_fieldsReader_a32861160154ecdb,
              mid_fieldsWriter_e1dda5bd7531bf25,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene50StoredFieldsFormat(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene50StoredFieldsFormat(const Lucene50StoredFieldsFormat& obj) : ::org::apache::lucene::codecs::StoredFieldsFormat(obj) {}

            static ::java::lang::String *MODE_KEY;

            Lucene50StoredFieldsFormat();
            Lucene50StoredFieldsFormat(const ::org::apache::lucene::codecs::lucene50::Lucene50StoredFieldsFormat$Mode &);

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
        namespace lucene50 {
          extern PyType_Def PY_TYPE_DEF(Lucene50StoredFieldsFormat);
          extern PyTypeObject *PY_TYPE(Lucene50StoredFieldsFormat);

          class t_Lucene50StoredFieldsFormat {
          public:
            PyObject_HEAD
            Lucene50StoredFieldsFormat object;
            static PyObject *wrap_Object(const Lucene50StoredFieldsFormat&);
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
