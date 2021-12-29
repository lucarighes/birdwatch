#ifndef org_apache_lucene_codecs_Codec_H
#define org_apache_lucene_codecs_Codec_H

#include "java/lang/Object.h"

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
        class NormsFormat;
        class PointsFormat;
        class TermVectorsFormat;
        class PostingsFormat;
        class Codec;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class Codec : public ::java::lang::Object {
         public:
          enum {
            mid_availableCodecs_7dcf4034c6d1a92a,
            mid_compoundFormat_1641e3035b5e7063,
            mid_docValuesFormat_a9c08d7c2b76eed3,
            mid_fieldInfosFormat_48c0c59677397219,
            mid_forName_83c6f80543ee756e,
            mid_getDefault_a302ebac25c26553,
            mid_getName_db9b55ba01e03e4b,
            mid_liveDocsFormat_3c23f7d462a4a754,
            mid_normsFormat_913a021834acbf93,
            mid_pointsFormat_b24443532b28970b,
            mid_postingsFormat_1a5e16ceada7aa64,
            mid_reloadCodecs_98a876e82795b112,
            mid_segmentInfoFormat_579fd0b88c210118,
            mid_setDefault_945acc7dbd39be07,
            mid_storedFieldsFormat_a6cbef21a6c483b7,
            mid_termVectorsFormat_ae08b71ce8366567,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Codec(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Codec(const Codec& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableCodecs();
          ::org::apache::lucene::codecs::CompoundFormat compoundFormat() const;
          ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
          ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
          static Codec forName(const ::java::lang::String &);
          static Codec getDefault();
          ::java::lang::String getName() const;
          ::org::apache::lucene::codecs::LiveDocsFormat liveDocsFormat() const;
          ::org::apache::lucene::codecs::NormsFormat normsFormat() const;
          ::org::apache::lucene::codecs::PointsFormat pointsFormat() const;
          ::org::apache::lucene::codecs::PostingsFormat postingsFormat() const;
          static void reloadCodecs(const ::java::lang::ClassLoader &);
          ::org::apache::lucene::codecs::SegmentInfoFormat segmentInfoFormat() const;
          static void setDefault(const Codec &);
          ::org::apache::lucene::codecs::StoredFieldsFormat storedFieldsFormat() const;
          ::org::apache::lucene::codecs::TermVectorsFormat termVectorsFormat() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(Codec);
        extern PyTypeObject *PY_TYPE(Codec);

        class t_Codec {
        public:
          PyObject_HEAD
          Codec object;
          static PyObject *wrap_Object(const Codec&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
