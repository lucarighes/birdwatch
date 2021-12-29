#ifndef org_apache_lucene_codecs_compressing_CompressingTermVectorsFormat_H
#define org_apache_lucene_codecs_compressing_CompressingTermVectorsFormat_H

#include "org/apache/lucene/codecs/TermVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace codecs {
        class TermVectorsReader;
        namespace compressing {
          class CompressionMode;
        }
        class TermVectorsWriter;
      }
      namespace index {
        class FieldInfos;
        class SegmentInfo;
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

          class CompressingTermVectorsFormat : public ::org::apache::lucene::codecs::TermVectorsFormat {
           public:
            enum {
              mid_init$_1bd7087d30e64209,
              mid_toString_db9b55ba01e03e4b,
              mid_vectorsReader_e8da19a02e97f6f0,
              mid_vectorsWriter_0dc3e01ac1525114,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingTermVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompressingTermVectorsFormat(const CompressingTermVectorsFormat& obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {}

            CompressingTermVectorsFormat(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint, jint, jint);

            ::java::lang::String toString() const;
            ::org::apache::lucene::codecs::TermVectorsReader vectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::codecs::TermVectorsWriter vectorsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(CompressingTermVectorsFormat);
          extern PyTypeObject *PY_TYPE(CompressingTermVectorsFormat);

          class t_CompressingTermVectorsFormat {
          public:
            PyObject_HEAD
            CompressingTermVectorsFormat object;
            static PyObject *wrap_Object(const CompressingTermVectorsFormat&);
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
