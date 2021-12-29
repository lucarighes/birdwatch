#ifndef org_apache_lucene_util_packed_DirectWriter_H
#define org_apache_lucene_util_packed_DirectWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class DirectWriter;
        }
      }
      namespace store {
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
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

          class DirectWriter : public ::java::lang::Object {
           public:
            enum {
              mid_add_9c778c9bce6694df,
              mid_bitsRequired_694afffd0eb7dc3c,
              mid_finish_f2cc1bce94666404,
              mid_getInstance_3d6128d9b8d37f02,
              mid_unsignedBitsRequired_694afffd0eb7dc3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectWriter(const DirectWriter& obj) : ::java::lang::Object(obj) {}

            void add(jlong) const;
            static jint bitsRequired(jlong);
            void finish() const;
            static DirectWriter getInstance(const ::org::apache::lucene::store::DataOutput &, jlong, jint);
            static jint unsignedBitsRequired(jlong);
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
          extern PyType_Def PY_TYPE_DEF(DirectWriter);
          extern PyTypeObject *PY_TYPE(DirectWriter);

          class t_DirectWriter {
          public:
            PyObject_HEAD
            DirectWriter object;
            static PyObject *wrap_Object(const DirectWriter&);
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
