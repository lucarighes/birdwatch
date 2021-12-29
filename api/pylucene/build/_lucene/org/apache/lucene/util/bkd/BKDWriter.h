#ifndef org_apache_lucene_util_bkd_BKDWriter_H
#define org_apache_lucene_util_bkd_BKDWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class Directory;
      }
      namespace util {
        namespace bkd {
          class BKDReader;
          class BKDConfig;
        }
      }
      namespace index {
        class MergeState$DocMap;
      }
      namespace codecs {
        class MutablePointValues;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Runnable;
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_874a69cfbdf26ce0,
              mid_add_2a8b02a5adcbf830,
              mid_close_f2cc1bce94666404,
              mid_finish_322db56b13c6465e,
              mid_merge_709351e38be71bf0,
              mid_writeField_750ab25e7139f476,
              mid_split_4b1769c6ea166762,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDWriter(const BKDWriter& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *CODEC_NAME;
            static jfloat DEFAULT_MAX_MB_SORT_IN_HEAP;
            static jint VERSION_CURRENT;
            static jint VERSION_LEAF_STORES_BOUNDS;
            static jint VERSION_LOW_CARDINALITY_LEAVES;
            static jint VERSION_META_FILE;
            static jint VERSION_SELECTIVE_INDEXING;
            static jint VERSION_START;

            BKDWriter(jint, const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::util::bkd::BKDConfig &, jdouble, jlong);

            void add(const JArray< jbyte > &, jint) const;
            void close() const;
            ::java::lang::Runnable finish(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &) const;
            ::java::lang::Runnable merge(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::java::util::List &, const ::java::util::List &) const;
            ::java::lang::Runnable writeField(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::java::lang::String &, const ::org::apache::lucene::codecs::MutablePointValues &) const;
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
          extern PyType_Def PY_TYPE_DEF(BKDWriter);
          extern PyTypeObject *PY_TYPE(BKDWriter);

          class t_BKDWriter {
          public:
            PyObject_HEAD
            BKDWriter object;
            static PyObject *wrap_Object(const BKDWriter&);
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
