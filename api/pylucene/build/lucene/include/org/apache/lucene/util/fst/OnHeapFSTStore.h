#ifndef org_apache_lucene_util_fst_OnHeapFSTStore_H
#define org_apache_lucene_util_fst_OnHeapFSTStore_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class FSTStore;
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
      namespace util {
        namespace fst {

          class OnHeapFSTStore : public ::java::lang::Object {
           public:
            enum {
              mid_init$_040c4cd0390c5aff,
              mid_getReverseBytesReader_79a0688c6e123a32,
              mid_init_4833aa1d1f4cf120,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_size_2e5ae9edcb9b072f,
              mid_writeTo_ead2c38342037c59,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnHeapFSTStore(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnHeapFSTStore(const OnHeapFSTStore& obj) : ::java::lang::Object(obj) {}

            OnHeapFSTStore(jint);

            ::org::apache::lucene::util::fst::FST$BytesReader getReverseBytesReader() const;
            void init(const ::org::apache::lucene::store::DataInput &, jlong) const;
            jlong ramBytesUsed() const;
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
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(OnHeapFSTStore);
          extern PyTypeObject *PY_TYPE(OnHeapFSTStore);

          class t_OnHeapFSTStore {
          public:
            PyObject_HEAD
            OnHeapFSTStore object;
            static PyObject *wrap_Object(const OnHeapFSTStore&);
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
