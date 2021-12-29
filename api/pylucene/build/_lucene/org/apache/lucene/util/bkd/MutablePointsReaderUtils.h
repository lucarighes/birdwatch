#ifndef org_apache_lucene_util_bkd_MutablePointsReaderUtils_H
#define org_apache_lucene_util_bkd_MutablePointsReaderUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace bkd {
          class BKDConfig;
        }
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class MutablePointsReaderUtils : public ::java::lang::Object {
           public:
            enum {
              mid_partition_d947b26d2cfaa75c,
              mid_sort_5cf6a24348223585,
              mid_sortByDim_eb3f73bdec04dbde,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutablePointsReaderUtils(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MutablePointsReaderUtils(const MutablePointsReaderUtils& obj) : ::java::lang::Object(obj) {}

            static void partition(const ::org::apache::lucene::util::bkd::BKDConfig &, jint, jint, jint, const ::org::apache::lucene::codecs::MutablePointValues &, jint, jint, jint, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
            static void sort(const ::org::apache::lucene::util::bkd::BKDConfig &, jint, const ::org::apache::lucene::codecs::MutablePointValues &, jint, jint);
            static void sortByDim(const ::org::apache::lucene::util::bkd::BKDConfig &, jint, const JArray< jint > &, const ::org::apache::lucene::codecs::MutablePointValues &, jint, jint, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
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
          extern PyType_Def PY_TYPE_DEF(MutablePointsReaderUtils);
          extern PyTypeObject *PY_TYPE(MutablePointsReaderUtils);

          class t_MutablePointsReaderUtils {
          public:
            PyObject_HEAD
            MutablePointsReaderUtils object;
            static PyObject *wrap_Object(const MutablePointsReaderUtils&);
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
