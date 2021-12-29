#ifndef org_apache_lucene_util_fst_FSTStore_H
#define org_apache_lucene_util_fst_FSTStore_H

#include "org/apache/lucene/util/Accountable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
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

          class FSTStore : public ::org::apache::lucene::util::Accountable {
           public:
            enum {
              mid_getReverseBytesReader_79a0688c6e123a32,
              mid_init_4833aa1d1f4cf120,
              mid_size_2e5ae9edcb9b072f,
              mid_writeTo_ead2c38342037c59,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTStore(jobject obj) : ::org::apache::lucene::util::Accountable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTStore(const FSTStore& obj) : ::org::apache::lucene::util::Accountable(obj) {}

            ::org::apache::lucene::util::fst::FST$BytesReader getReverseBytesReader() const;
            void init(const ::org::apache::lucene::store::DataInput &, jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(FSTStore);
          extern PyTypeObject *PY_TYPE(FSTStore);

          class t_FSTStore {
          public:
            PyObject_HEAD
            FSTStore object;
            static PyObject *wrap_Object(const FSTStore&);
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
