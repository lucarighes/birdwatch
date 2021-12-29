#ifndef org_apache_lucene_util_bkd_OfflinePointReader_H
#define org_apache_lucene_util_bkd_OfflinePointReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointValue;
          class BKDConfig;
          class PointReader;
        }
      }
      namespace store {
        class Directory;
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
        namespace bkd {

          class OfflinePointReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c0f49336633b78f7,
              mid_close_f2cc1bce94666404,
              mid_next_8454bd5aa23fd11e,
              mid_pointValue_0a50bb6f782eac99,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OfflinePointReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OfflinePointReader(const OfflinePointReader& obj) : ::java::lang::Object(obj) {}

            OfflinePointReader(const ::org::apache::lucene::util::bkd::BKDConfig &, const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, jlong, jlong, const JArray< jbyte > &);

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
          extern PyType_Def PY_TYPE_DEF(OfflinePointReader);
          extern PyTypeObject *PY_TYPE(OfflinePointReader);

          class t_OfflinePointReader {
          public:
            PyObject_HEAD
            OfflinePointReader object;
            static PyObject *wrap_Object(const OfflinePointReader&);
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
