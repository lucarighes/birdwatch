#ifndef org_apache_lucene_codecs_uniformsplit_FSTDictionary$BrowserSupplier_H
#define org_apache_lucene_codecs_uniformsplit_FSTDictionary$BrowserSupplier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
      }
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$Browser;
          class BlockDecoder;
          class IndexDictionary$BrowserSupplier;
        }
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

          class FSTDictionary$BrowserSupplier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_225b02013f5e3107,
              mid_get_f36d038b8a827a9e,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTDictionary$BrowserSupplier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTDictionary$BrowserSupplier(const FSTDictionary$BrowserSupplier& obj) : ::java::lang::Object(obj) {}

            FSTDictionary$BrowserSupplier(const ::org::apache::lucene::store::IndexInput &, jlong, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, jboolean);

            ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$Browser get() const;
            jlong ramBytesUsed() const;
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
          extern PyType_Def PY_TYPE_DEF(FSTDictionary$BrowserSupplier);
          extern PyTypeObject *PY_TYPE(FSTDictionary$BrowserSupplier);

          class t_FSTDictionary$BrowserSupplier {
          public:
            PyObject_HEAD
            FSTDictionary$BrowserSupplier object;
            static PyObject *wrap_Object(const FSTDictionary$BrowserSupplier&);
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
