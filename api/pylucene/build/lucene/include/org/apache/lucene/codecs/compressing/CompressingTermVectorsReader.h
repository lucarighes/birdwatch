#ifndef org_apache_lucene_codecs_compressing_CompressingTermVectorsReader_H
#define org_apache_lucene_codecs_compressing_CompressingTermVectorsReader_H

#include "org/apache/lucene/codecs/TermVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class Fields;
        class SegmentInfo;
        class FieldInfos;
      }
      namespace util {
        class Accountable;
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

          class CompressingTermVectorsReader : public ::org::apache::lucene::codecs::TermVectorsReader {
           public:
            enum {
              mid_init$_f8f677347d54d3ca,
              mid_checkIntegrity_f2cc1bce94666404,
              mid_clone_f69eb90f55592154,
              mid_close_f2cc1bce94666404,
              mid_get_9997c94b783ad8be,
              mid_getChildResources_d4dfbf7a26ff41df,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingTermVectorsReader(jobject obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompressingTermVectorsReader(const CompressingTermVectorsReader& obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {}

            CompressingTermVectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &);

            void checkIntegrity() const;
            ::org::apache::lucene::codecs::TermVectorsReader clone() const;
            void close() const;
            ::org::apache::lucene::index::Fields get(jint) const;
            ::java::util::Collection getChildResources() const;
            jlong ramBytesUsed() const;
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
          extern PyType_Def PY_TYPE_DEF(CompressingTermVectorsReader);
          extern PyTypeObject *PY_TYPE(CompressingTermVectorsReader);

          class t_CompressingTermVectorsReader {
          public:
            PyObject_HEAD
            CompressingTermVectorsReader object;
            static PyObject *wrap_Object(const CompressingTermVectorsReader&);
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
