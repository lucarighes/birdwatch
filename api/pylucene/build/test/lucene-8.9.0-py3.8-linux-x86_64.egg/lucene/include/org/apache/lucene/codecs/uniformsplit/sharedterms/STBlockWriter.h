#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockWriter_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockWriter_H

#include "org/apache/lucene/codecs/uniformsplit/BlockWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
      }
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$Builder;
          class BlockEncoder;
          namespace sharedterms {
            class FieldMetadataTermState;
          }
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STBlockWriter : public ::org::apache::lucene::codecs::uniformsplit::BlockWriter {
             public:
              enum {
                mid_init$_38d0a74f45854c03,
                mid_addLine_aa368c320c94943e,
                mid_finishLastBlock_f9451def1ea25bf5,
                mid_createBlockLineSerializer_8d7f678ac5857d60,
                mid_updateFieldMetadata_9c778c9bce6694df,
                mid_writeBlockLine_fa6b8f0fea2f0a11,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STBlockWriter(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STBlockWriter(const STBlockWriter& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockWriter(obj) {}

              STBlockWriter(const ::org::apache::lucene::store::IndexOutput &, jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);

              void addLine(const ::org::apache::lucene::util::BytesRef &, const ::java::util::List &, const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$Builder &) const;
            };
          }
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
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(STBlockWriter);
            extern PyTypeObject *PY_TYPE(STBlockWriter);

            class t_STBlockWriter {
            public:
              PyObject_HEAD
              STBlockWriter object;
              static PyObject *wrap_Object(const STBlockWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
