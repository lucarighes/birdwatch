#ifndef org_apache_lucene_codecs_uniformsplit_BlockLine$Serializer_H
#define org_apache_lucene_codecs_uniformsplit_BlockLine$Serializer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace codecs {
        namespace uniformsplit {
          class BlockLine;
        }
      }
      namespace store {
        class DataOutput;
        class DataInput;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class BlockLine$Serializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_readLine_1c834a51f0e5e95d,
              mid_writeLine_28b30e53a960cd0b,
              mid_numBitsToEncode_1e143afe1894d213,
              mid_writeLineTermState_d6d12c23bed9c4f1,
              mid_writeIncrementallyEncodedTerm_5a9617c0c64d8529,
              mid_readIncrementallyEncodedTerm_c0993f829379ab75,
              mid_readBytes_b0d7740370e49a0c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockLine$Serializer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockLine$Serializer(const BlockLine$Serializer& obj) : ::java::lang::Object(obj) {}

            BlockLine$Serializer();

            jlong ramBytesUsed() const;
            ::org::apache::lucene::codecs::uniformsplit::BlockLine readLine(const ::org::apache::lucene::store::DataInput &, jboolean, const ::org::apache::lucene::codecs::uniformsplit::BlockLine &) const;
            void writeLine(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::BlockLine &, const ::org::apache::lucene::codecs::uniformsplit::BlockLine &, jint, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockLine$Serializer);
          extern PyTypeObject *PY_TYPE(BlockLine$Serializer);

          class t_BlockLine$Serializer {
          public:
            PyObject_HEAD
            BlockLine$Serializer object;
            static PyObject *wrap_Object(const BlockLine$Serializer&);
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
