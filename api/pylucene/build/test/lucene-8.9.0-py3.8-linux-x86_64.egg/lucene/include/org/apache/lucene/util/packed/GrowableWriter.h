#ifndef org_apache_lucene_util_packed_GrowableWriter_H
#define org_apache_lucene_util_packed_GrowableWriter_H

#include "org/apache/lucene/util/packed/PackedInts$Mutable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class GrowableWriter;
        }
      }
      namespace store {
        class DataOutput;
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

          class GrowableWriter : public ::org::apache::lucene::util::packed::PackedInts$Mutable {
           public:
            enum {
              mid_init$_06b3fb68215ac523,
              mid_clear_f2cc1bce94666404,
              mid_fill_19ffe11235bb45e0,
              mid_get_0f1d64a641e8af53,
              mid_get_4c642cf3a1fd0041,
              mid_getBitsPerValue_9972fcc56b44e79d,
              mid_getMutable_ef13df3a0c6e16c1,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_resize_65e99d1e4e6b8086,
              mid_save_ead2c38342037c59,
              mid_set_7b2f5b9ddfcb9416,
              mid_set_4c642cf3a1fd0041,
              mid_size_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GrowableWriter(jobject obj) : ::org::apache::lucene::util::packed::PackedInts$Mutable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GrowableWriter(const GrowableWriter& obj) : ::org::apache::lucene::util::packed::PackedInts$Mutable(obj) {}

            GrowableWriter(jint, jint, jfloat);

            void clear() const;
            void fill(jint, jint, jlong) const;
            jlong get(jint) const;
            jint get(jint, const JArray< jlong > &, jint, jint) const;
            jint getBitsPerValue() const;
            ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable() const;
            jlong ramBytesUsed() const;
            GrowableWriter resize(jint) const;
            void save(const ::org::apache::lucene::store::DataOutput &) const;
            void set(jint, jlong) const;
            jint set(jint, const JArray< jlong > &, jint, jint) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(GrowableWriter);
          extern PyTypeObject *PY_TYPE(GrowableWriter);

          class t_GrowableWriter {
          public:
            PyObject_HEAD
            GrowableWriter object;
            static PyObject *wrap_Object(const GrowableWriter&);
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
