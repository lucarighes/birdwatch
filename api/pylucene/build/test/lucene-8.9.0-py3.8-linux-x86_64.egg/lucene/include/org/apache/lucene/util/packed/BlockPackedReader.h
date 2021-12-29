#ifndef org_apache_lucene_util_packed_BlockPackedReader_H
#define org_apache_lucene_util_packed_BlockPackedReader_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
      }
      namespace util {
        class Accountable;
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
      namespace util {
        namespace packed {

          class BlockPackedReader : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_init$_d48e2201f1f1ae5b,
              mid_get_d711eecdc469624a,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockPackedReader(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockPackedReader(const BlockPackedReader& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            BlockPackedReader(const ::org::apache::lucene::store::IndexInput &, jint, jint, jlong, jboolean);

            jlong get(jlong) const;
            jlong ramBytesUsed() const;
            ::java::lang::String toString() const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(BlockPackedReader);
          extern PyTypeObject *PY_TYPE(BlockPackedReader);

          class t_BlockPackedReader {
          public:
            PyObject_HEAD
            BlockPackedReader object;
            static PyObject *wrap_Object(const BlockPackedReader&);
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
