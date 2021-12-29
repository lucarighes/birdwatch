#ifndef org_apache_lucene_util_bkd_HeapPointWriter_H
#define org_apache_lucene_util_bkd_HeapPointWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointWriter;
          class PointValue;
          class BKDConfig;
          class PointReader;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class HeapPointWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c4ce6b35e77cb8f0,
              mid_append_c20445b6b5276287,
              mid_append_2a8b02a5adcbf830,
              mid_close_f2cc1bce94666404,
              mid_computeCardinality_556cd67a8ecf89ce,
              mid_count_2e5ae9edcb9b072f,
              mid_destroy_f2cc1bce94666404,
              mid_getPackedValueSlice_a703faa59e58dca1,
              mid_getReader_d2caf9396a104071,
              mid_swap_438c62480c481c65,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_block,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HeapPointWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HeapPointWriter(const HeapPointWriter& obj) : ::java::lang::Object(obj) {}

            JArray< jbyte > _get_block() const;

            HeapPointWriter(const ::org::apache::lucene::util::bkd::BKDConfig &, jint);

            void append(const ::org::apache::lucene::util::bkd::PointValue &) const;
            void append(const JArray< jbyte > &, jint) const;
            void close() const;
            jint computeCardinality(jint, jint, const JArray< jint > &) const;
            jlong count() const;
            void destroy() const;
            ::org::apache::lucene::util::bkd::PointValue getPackedValueSlice(jint) const;
            ::org::apache::lucene::util::bkd::PointReader getReader(jlong, jlong) const;
            void swap(jint, jint) const;
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
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(HeapPointWriter);
          extern PyTypeObject *PY_TYPE(HeapPointWriter);

          class t_HeapPointWriter {
          public:
            PyObject_HEAD
            HeapPointWriter object;
            static PyObject *wrap_Object(const HeapPointWriter&);
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
