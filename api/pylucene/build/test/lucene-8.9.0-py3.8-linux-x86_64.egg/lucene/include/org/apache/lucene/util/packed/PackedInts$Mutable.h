#ifndef org_apache_lucene_util_packed_PackedInts$Mutable_H
#define org_apache_lucene_util_packed_PackedInts$Mutable_H

#include "org/apache/lucene/util/packed/PackedInts$Reader.h"

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
      namespace util {
        namespace packed {

          class PackedInts$Mutable : public ::org::apache::lucene::util::packed::PackedInts$Reader {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_clear_f2cc1bce94666404,
              mid_fill_19ffe11235bb45e0,
              mid_getBitsPerValue_9972fcc56b44e79d,
              mid_save_ead2c38342037c59,
              mid_set_7b2f5b9ddfcb9416,
              mid_set_4c642cf3a1fd0041,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Mutable(jobject obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Mutable(const PackedInts$Mutable& obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {}

            PackedInts$Mutable();

            void clear() const;
            void fill(jint, jint, jlong) const;
            jint getBitsPerValue() const;
            void save(const ::org::apache::lucene::store::DataOutput &) const;
            void set(jint, jlong) const;
            jint set(jint, const JArray< jlong > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PackedInts$Mutable);
          extern PyTypeObject *PY_TYPE(PackedInts$Mutable);

          class t_PackedInts$Mutable {
          public:
            PyObject_HEAD
            PackedInts$Mutable object;
            static PyObject *wrap_Object(const PackedInts$Mutable&);
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
