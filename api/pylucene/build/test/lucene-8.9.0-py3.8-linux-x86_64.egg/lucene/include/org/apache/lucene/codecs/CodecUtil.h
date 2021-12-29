#ifndef org_apache_lucene_codecs_CodecUtil_H
#define org_apache_lucene_codecs_CodecUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class IndexInput;
        class ChecksumIndexInput;
        class DataOutput;
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
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

        class CodecUtil : public ::java::lang::Object {
         public:
          enum {
            mid_checkFooter_c911576f239ebaf2,
            mid_checkFooter_4f775016b80d28f0,
            mid_checkHeader_bf49a7095d8bc856,
            mid_checkHeaderNoMagic_bf49a7095d8bc856,
            mid_checkIndexHeader_7770713b5ab4ce2a,
            mid_checkIndexHeaderID_8ba8bbcdd022af1c,
            mid_checkIndexHeaderSuffix_11c3a6f5c5fa95f0,
            mid_checksumEntireFile_3ae65187e601f00f,
            mid_footerLength_9972fcc56b44e79d,
            mid_headerLength_a5a7d1128e9e2bb7,
            mid_indexHeaderLength_b842b27f8e76eceb,
            mid_readFooter_8f8462a668d2669e,
            mid_readIndexHeader_8f8462a668d2669e,
            mid_retrieveChecksum_3ae65187e601f00f,
            mid_retrieveChecksum_2f522ac45bddc028,
            mid_verifyAndCopyIndexHeader_9fca6d299846d2b0,
            mid_writeFooter_c832dc158b3caad3,
            mid_writeHeader_a5ec96da49fac821,
            mid_writeIndexHeader_b6ba21127a8a4d23,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CodecUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CodecUtil(const CodecUtil& obj) : ::java::lang::Object(obj) {}

          static jint CODEC_MAGIC;
          static jint FOOTER_MAGIC;

          static jlong checkFooter(const ::org::apache::lucene::store::ChecksumIndexInput &);
          static void checkFooter(const ::org::apache::lucene::store::ChecksumIndexInput &, const ::java::lang::Throwable &);
          static jint checkHeader(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint);
          static jint checkHeaderNoMagic(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint);
          static jint checkIndexHeader(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &, jint, jint, const JArray< jbyte > &, const ::java::lang::String &);
          static JArray< jbyte > checkIndexHeaderID(const ::org::apache::lucene::store::DataInput &, const JArray< jbyte > &);
          static ::java::lang::String checkIndexHeaderSuffix(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &);
          static jlong checksumEntireFile(const ::org::apache::lucene::store::IndexInput &);
          static jint footerLength();
          static jint headerLength(const ::java::lang::String &);
          static jint indexHeaderLength(const ::java::lang::String &, const ::java::lang::String &);
          static JArray< jbyte > readFooter(const ::org::apache::lucene::store::IndexInput &);
          static JArray< jbyte > readIndexHeader(const ::org::apache::lucene::store::IndexInput &);
          static jlong retrieveChecksum(const ::org::apache::lucene::store::IndexInput &);
          static jlong retrieveChecksum(const ::org::apache::lucene::store::IndexInput &, jlong);
          static void verifyAndCopyIndexHeader(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::store::DataOutput &, const JArray< jbyte > &);
          static void writeFooter(const ::org::apache::lucene::store::IndexOutput &);
          static void writeHeader(const ::org::apache::lucene::store::DataOutput &, const ::java::lang::String &, jint);
          static void writeIndexHeader(const ::org::apache::lucene::store::DataOutput &, const ::java::lang::String &, jint, const JArray< jbyte > &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(CodecUtil);
        extern PyTypeObject *PY_TYPE(CodecUtil);

        class t_CodecUtil {
        public:
          PyObject_HEAD
          CodecUtil object;
          static PyObject *wrap_Object(const CodecUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
