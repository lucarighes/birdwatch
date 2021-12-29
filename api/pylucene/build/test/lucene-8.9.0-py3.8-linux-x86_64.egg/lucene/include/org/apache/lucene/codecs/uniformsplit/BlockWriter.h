#ifndef org_apache_lucene_codecs_uniformsplit_BlockWriter_H
#define org_apache_lucene_codecs_uniformsplit_BlockWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class BlockWriter : public ::java::lang::Object {
           public:
            enum {
              mid_finishLastBlock_f9451def1ea25bf5,
              mid_addLine_3d33d1145ecf0ca5,
              mid_writeBlock_98f43c031216cc0e,
              mid_createDeltaBaseTermStateSerializer_582cc298510958b7,
              mid_createBlockHeaderSerializer_d9142c3f0777a24f,
              mid_createBlockLineSerializer_8d7f678ac5857d60,
              mid_updateFieldMetadata_9c778c9bce6694df,
              mid_splitAndWriteBlock_f9451def1ea25bf5,
              mid_addBlockKey_98f43c031216cc0e,
              mid_writeBlockLine_fa6b8f0fea2f0a11,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockWriter(const BlockWriter& obj) : ::java::lang::Object(obj) {}
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
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(BlockWriter);
          extern PyTypeObject *PY_TYPE(BlockWriter);

          class t_BlockWriter {
          public:
            PyObject_HEAD
            BlockWriter object;
            static PyObject *wrap_Object(const BlockWriter&);
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
