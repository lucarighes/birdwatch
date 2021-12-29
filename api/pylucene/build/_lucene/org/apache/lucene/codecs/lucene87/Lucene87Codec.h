#ifndef org_apache_lucene_codecs_lucene87_Lucene87Codec_H
#define org_apache_lucene_codecs_lucene87_Lucene87Codec_H

#include "org/apache/lucene/codecs/Codec.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class FieldInfosFormat;
        class DocValuesFormat;
        class CompoundFormat;
        class SegmentInfoFormat;
        class StoredFieldsFormat;
        class LiveDocsFormat;
        namespace lucene87 {
          class Lucene87Codec$Mode;
        }
        class NormsFormat;
        class PointsFormat;
        class TermVectorsFormat;
        class PostingsFormat;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene87 {

          class Lucene87Codec : public ::org::apache::lucene::codecs::Codec {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_cab424022a56459e,
              mid_compoundFormat_1641e3035b5e7063,
              mid_docValuesFormat_a9c08d7c2b76eed3,
              mid_fieldInfosFormat_48c0c59677397219,
              mid_getDocValuesFormatForField_6b92af620136a934,
              mid_getPostingsFormatForField_62d8049c839a109a,
              mid_liveDocsFormat_3c23f7d462a4a754,
              mid_normsFormat_913a021834acbf93,
              mid_pointsFormat_b24443532b28970b,
              mid_postingsFormat_1a5e16ceada7aa64,
              mid_segmentInfoFormat_579fd0b88c210118,
              mid_storedFieldsFormat_a6cbef21a6c483b7,
              mid_termVectorsFormat_ae08b71ce8366567,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene87Codec(jobject obj) : ::org::apache::lucene::codecs::Codec(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene87Codec(const Lucene87Codec& obj) : ::org::apache::lucene::codecs::Codec(obj) {}

            Lucene87Codec();
            Lucene87Codec(const ::org::apache::lucene::codecs::lucene87::Lucene87Codec$Mode &);

            ::org::apache::lucene::codecs::CompoundFormat compoundFormat() const;
            ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
            ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
            ::org::apache::lucene::codecs::DocValuesFormat getDocValuesFormatForField(const ::java::lang::String &) const;
            ::org::apache::lucene::codecs::PostingsFormat getPostingsFormatForField(const ::java::lang::String &) const;
            ::org::apache::lucene::codecs::LiveDocsFormat liveDocsFormat() const;
            ::org::apache::lucene::codecs::NormsFormat normsFormat() const;
            ::org::apache::lucene::codecs::PointsFormat pointsFormat() const;
            ::org::apache::lucene::codecs::PostingsFormat postingsFormat() const;
            ::org::apache::lucene::codecs::SegmentInfoFormat segmentInfoFormat() const;
            ::org::apache::lucene::codecs::StoredFieldsFormat storedFieldsFormat() const;
            ::org::apache::lucene::codecs::TermVectorsFormat termVectorsFormat() const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene87Codec);
          extern PyTypeObject *PY_TYPE(Lucene87Codec);

          class t_Lucene87Codec {
          public:
            PyObject_HEAD
            Lucene87Codec object;
            static PyObject *wrap_Object(const Lucene87Codec&);
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
