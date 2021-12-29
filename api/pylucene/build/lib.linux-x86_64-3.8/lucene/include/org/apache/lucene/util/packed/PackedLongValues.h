#ifndef org_apache_lucene_util_packed_PackedLongValues_H
#define org_apache_lucene_util_packed_PackedLongValues_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedLongValues$Builder;
          class PackedLongValues$Iterator;
        }
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class PackedLongValues : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_deltaPackedBuilder_afde0be6d85ad6a8,
              mid_deltaPackedBuilder_df740e9b64bcc1f9,
              mid_get_d711eecdc469624a,
              mid_iterator_43993335cba3a7d8,
              mid_monotonicBuilder_afde0be6d85ad6a8,
              mid_monotonicBuilder_df740e9b64bcc1f9,
              mid_packedBuilder_afde0be6d85ad6a8,
              mid_packedBuilder_df740e9b64bcc1f9,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_size_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedLongValues(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedLongValues(const PackedLongValues& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            static ::org::apache::lucene::util::packed::PackedLongValues$Builder deltaPackedBuilder(jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder deltaPackedBuilder(jint, jfloat);
            jlong get(jlong) const;
            ::org::apache::lucene::util::packed::PackedLongValues$Iterator iterator() const;
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder monotonicBuilder(jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder monotonicBuilder(jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder packedBuilder(jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder packedBuilder(jint, jfloat);
            jlong ramBytesUsed() const;
            jlong size() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedLongValues);
          extern PyTypeObject *PY_TYPE(PackedLongValues);

          class t_PackedLongValues {
          public:
            PyObject_HEAD
            PackedLongValues object;
            static PyObject *wrap_Object(const PackedLongValues&);
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
