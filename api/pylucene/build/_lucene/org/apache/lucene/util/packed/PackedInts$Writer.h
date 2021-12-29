#ifndef org_apache_lucene_util_packed_PackedInts$Writer_H
#define org_apache_lucene_util_packed_PackedInts$Writer_H

#include "java/lang/Object.h"

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

          class PackedInts$Writer : public ::java::lang::Object {
           public:
            enum {
              mid_add_9c778c9bce6694df,
              mid_bitsPerValue_9972fcc56b44e79d,
              mid_finish_f2cc1bce94666404,
              mid_ord_9972fcc56b44e79d,
              mid_getFormat_19338728cfc4522e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Writer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Writer(const PackedInts$Writer& obj) : ::java::lang::Object(obj) {}

            void add(jlong) const;
            jint bitsPerValue() const;
            void finish() const;
            jint ord() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedInts$Writer);
          extern PyTypeObject *PY_TYPE(PackedInts$Writer);

          class t_PackedInts$Writer {
          public:
            PyObject_HEAD
            PackedInts$Writer object;
            static PyObject *wrap_Object(const PackedInts$Writer&);
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
