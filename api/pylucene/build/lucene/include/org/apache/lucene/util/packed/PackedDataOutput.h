#ifndef org_apache_lucene_util_packed_PackedDataOutput_H
#define org_apache_lucene_util_packed_PackedDataOutput_H

#include "java/lang/Object.h"

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

          class PackedDataOutput : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ead2c38342037c59,
              mid_flush_f2cc1bce94666404,
              mid_writeLong_7cbcb52ba5068aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedDataOutput(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedDataOutput(const PackedDataOutput& obj) : ::java::lang::Object(obj) {}

            PackedDataOutput(const ::org::apache::lucene::store::DataOutput &);

            void flush() const;
            void writeLong(jlong, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PackedDataOutput);
          extern PyTypeObject *PY_TYPE(PackedDataOutput);

          class t_PackedDataOutput {
          public:
            PyObject_HEAD
            PackedDataOutput object;
            static PyObject *wrap_Object(const PackedDataOutput&);
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
