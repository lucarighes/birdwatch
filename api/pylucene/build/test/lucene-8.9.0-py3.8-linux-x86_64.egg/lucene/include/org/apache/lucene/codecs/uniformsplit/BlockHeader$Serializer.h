#ifndef org_apache_lucene_codecs_uniformsplit_BlockHeader$Serializer_H
#define org_apache_lucene_codecs_uniformsplit_BlockHeader$Serializer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class BlockHeader;
        }
      }
      namespace store {
        class DataOutput;
        class DataInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class BlockHeader$Serializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_read_5de64dae06a1e52a,
              mid_write_4a6c02945a492592,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockHeader$Serializer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockHeader$Serializer(const BlockHeader$Serializer& obj) : ::java::lang::Object(obj) {}

            BlockHeader$Serializer();

            ::org::apache::lucene::codecs::uniformsplit::BlockHeader read(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::codecs::uniformsplit::BlockHeader &) const;
            void write(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::BlockHeader &) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockHeader$Serializer);
          extern PyTypeObject *PY_TYPE(BlockHeader$Serializer);

          class t_BlockHeader$Serializer {
          public:
            PyObject_HEAD
            BlockHeader$Serializer object;
            static PyObject *wrap_Object(const BlockHeader$Serializer&);
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
