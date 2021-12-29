#ifndef org_apache_lucene_util_bkd_HeapPointReader_H
#define org_apache_lucene_util_bkd_HeapPointReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class BKDConfig;
          class PointReader;
          class PointValue;
        }
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

          class HeapPointReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3e49d4b5950e6c9e,
              mid_close_f2cc1bce94666404,
              mid_next_8454bd5aa23fd11e,
              mid_pointValue_0a50bb6f782eac99,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HeapPointReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HeapPointReader(const HeapPointReader& obj) : ::java::lang::Object(obj) {}

            HeapPointReader(const ::org::apache::lucene::util::bkd::BKDConfig &, const JArray< jbyte > &, jint, jint);

            void close() const;
            jboolean next() const;
            ::org::apache::lucene::util::bkd::PointValue pointValue() const;
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
          extern PyType_Def PY_TYPE_DEF(HeapPointReader);
          extern PyTypeObject *PY_TYPE(HeapPointReader);

          class t_HeapPointReader {
          public:
            PyObject_HEAD
            HeapPointReader object;
            static PyObject *wrap_Object(const HeapPointReader&);
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
