#ifndef org_apache_lucene_codecs_uniformsplit_BlockEncoder$WritableBytes_H
#define org_apache_lucene_codecs_uniformsplit_BlockEncoder$WritableBytes_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
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

          class BlockEncoder$WritableBytes : public ::java::lang::Object {
           public:
            enum {
              mid_size_2e5ae9edcb9b072f,
              mid_writeTo_ead2c38342037c59,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockEncoder$WritableBytes(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockEncoder$WritableBytes(const BlockEncoder$WritableBytes& obj) : ::java::lang::Object(obj) {}

            jlong size() const;
            void writeTo(const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockEncoder$WritableBytes);
          extern PyTypeObject *PY_TYPE(BlockEncoder$WritableBytes);

          class t_BlockEncoder$WritableBytes {
          public:
            PyObject_HEAD
            BlockEncoder$WritableBytes object;
            static PyObject *wrap_Object(const BlockEncoder$WritableBytes&);
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
