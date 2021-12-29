#ifndef org_apache_lucene_codecs_perfield_PerFieldDocValuesFormat_H
#define org_apache_lucene_codecs_perfield_PerFieldDocValuesFormat_H

#include "org/apache/lucene/codecs/DocValuesFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class DocValuesConsumer;
        class DocValuesProducer;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
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
        namespace perfield {

          class PerFieldDocValuesFormat : public ::org::apache::lucene::codecs::DocValuesFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_fieldsConsumer_4d0d89459a33e411,
              mid_fieldsProducer_4fca71c324f605dc,
              mid_getDocValuesFormatForField_6b92af620136a934,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PerFieldDocValuesFormat(jobject obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PerFieldDocValuesFormat(const PerFieldDocValuesFormat& obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {}

            static ::java::lang::String *PER_FIELD_FORMAT_KEY;
            static ::java::lang::String *PER_FIELD_NAME;
            static ::java::lang::String *PER_FIELD_SUFFIX_KEY;

            PerFieldDocValuesFormat();

            ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::DocValuesFormat getDocValuesFormatForField(const ::java::lang::String &) const;
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
        namespace perfield {
          extern PyType_Def PY_TYPE_DEF(PerFieldDocValuesFormat);
          extern PyTypeObject *PY_TYPE(PerFieldDocValuesFormat);

          class t_PerFieldDocValuesFormat {
          public:
            PyObject_HEAD
            PerFieldDocValuesFormat object;
            static PyObject *wrap_Object(const PerFieldDocValuesFormat&);
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
