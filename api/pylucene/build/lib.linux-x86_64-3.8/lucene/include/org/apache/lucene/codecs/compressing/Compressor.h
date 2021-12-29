#ifndef org_apache_lucene_codecs_compressing_Compressor_H
#define org_apache_lucene_codecs_compressing_Compressor_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
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
        namespace compressing {

          class Compressor : public ::java::lang::Object {
           public:
            enum {
              mid_compress_734992c6e1bace7e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Compressor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Compressor(const Compressor& obj) : ::java::lang::Object(obj) {}

            void compress(const JArray< jbyte > &, jint, jint, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(Compressor);
          extern PyTypeObject *PY_TYPE(Compressor);

          class t_Compressor {
          public:
            PyObject_HEAD
            Compressor object;
            static PyObject *wrap_Object(const Compressor&);
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
