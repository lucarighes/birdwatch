#ifndef org_apache_lucene_util_packed_DirectMonotonicReader_H
#define org_apache_lucene_util_packed_DirectMonotonicReader_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class DirectMonotonicReader$Meta;
          class DirectMonotonicReader;
        }
        class Accountable;
      }
      namespace store {
        class IndexInput;
        class RandomAccessInput;
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
        namespace packed {

          class DirectMonotonicReader : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_binarySearch_4ffe5f948304ec00,
              mid_get_d711eecdc469624a,
              mid_getInstance_f2bc5ef27a52e341,
              mid_loadMeta_6ebb00c4301b0598,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectMonotonicReader(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectMonotonicReader(const DirectMonotonicReader& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            jlong binarySearch(jlong, jlong, jlong) const;
            jlong get(jlong) const;
            static DirectMonotonicReader getInstance(const ::org::apache::lucene::util::packed::DirectMonotonicReader$Meta &, const ::org::apache::lucene::store::RandomAccessInput &);
            static ::org::apache::lucene::util::packed::DirectMonotonicReader$Meta loadMeta(const ::org::apache::lucene::store::IndexInput &, jlong, jint);
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
      namespace util {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(DirectMonotonicReader);
          extern PyTypeObject *PY_TYPE(DirectMonotonicReader);

          class t_DirectMonotonicReader {
          public:
            PyObject_HEAD
            DirectMonotonicReader object;
            static PyObject *wrap_Object(const DirectMonotonicReader&);
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
