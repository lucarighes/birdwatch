#ifndef org_apache_lucene_util_packed_PackedInts_H
#define org_apache_lucene_util_packed_PackedInts_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
        class DataOutput;
        class DataInput;
      }
      namespace util {
        namespace packed {
          class PackedInts$Mutable;
          class PackedInts$FormatAndBits;
          class PackedInts$Format;
          class PackedInts$ReaderIterator;
          class PackedInts$Decoder;
          class PackedInts$Writer;
          class PackedInts$Reader;
          class PackedInts$Encoder;
        }
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
      namespace util {
        namespace packed {

          class PackedInts : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_bitsRequired_694afffd0eb7dc3c,
              mid_checkVersion_040c4cd0390c5aff,
              mid_copy_85a1d205a3dbdd7e,
              mid_fastestFormatAndBits_e37f260c09ba0078,
              mid_getDecoder_365715f47dcb52cc,
              mid_getDirectReader_ea621a243364bc47,
              mid_getDirectReaderNoHeader_c1c4b12c598a8066,
              mid_getEncoder_feca54b1dd46075b,
              mid_getMutable_351b73df51e39810,
              mid_getMutable_8190aa0f7eac9798,
              mid_getReader_a4c4701ae160298b,
              mid_getReaderIterator_a735c3a51d9abcc6,
              mid_getReaderIteratorNoHeader_624a89fd02863178,
              mid_getReaderNoHeader_9fc73ca5a7d635f8,
              mid_getWriter_d7f96e4a635f30d5,
              mid_getWriterNoHeader_8a668bd28100ef9b,
              mid_maxValue_0f1d64a641e8af53,
              mid_unsignedBitsRequired_694afffd0eb7dc3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts(const PackedInts& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *CODEC_NAME;
            static jfloat COMPACT;
            static jfloat DEFAULT;
            static jint DEFAULT_BUFFER_SIZE;
            static jfloat FAST;
            static jfloat FASTEST;
            static jint VERSION_CURRENT;
            static jint VERSION_MONOTONIC_WITHOUT_ZIGZAG;
            static jint VERSION_START;

            PackedInts();

            static jint bitsRequired(jlong);
            static void checkVersion(jint);
            static void copy(const ::org::apache::lucene::util::packed::PackedInts$Reader &, jint, const ::org::apache::lucene::util::packed::PackedInts$Mutable &, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$FormatAndBits fastestFormatAndBits(jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$Decoder getDecoder(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getDirectReader(const ::org::apache::lucene::store::IndexInput &);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getDirectReaderNoHeader(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Encoder getEncoder(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable(jint, jint, const ::org::apache::lucene::util::packed::PackedInts$Format &);
            static ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable(jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getReader(const ::org::apache::lucene::store::DataInput &);
            static ::org::apache::lucene::util::packed::PackedInts$ReaderIterator getReaderIterator(const ::org::apache::lucene::store::DataInput &, jint);
            static ::org::apache::lucene::util::packed::PackedInts$ReaderIterator getReaderIteratorNoHeader(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Reader getReaderNoHeader(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Writer getWriter(const ::org::apache::lucene::store::DataOutput &, jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$Writer getWriterNoHeader(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
            static jlong maxValue(jint);
            static jint unsignedBitsRequired(jlong);
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
      namespace util {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts);
          extern PyTypeObject *PY_TYPE(PackedInts);

          class t_PackedInts {
          public:
            PyObject_HEAD
            PackedInts object;
            static PyObject *wrap_Object(const PackedInts&);
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
