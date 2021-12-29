#ifndef org_apache_lucene_util_packed_PackedInts$FormatAndBits_H
#define org_apache_lucene_util_packed_PackedInts$FormatAndBits_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedInts$Format;
        }
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

          class PackedInts$FormatAndBits : public ::java::lang::Object {
           public:
            enum {
              mid_init$_29ee7cafa1b68892,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_bitsPerValue,
              fid_format,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$FormatAndBits(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$FormatAndBits(const PackedInts$FormatAndBits& obj) : ::java::lang::Object(obj) {}

            jint _get_bitsPerValue() const;
            ::org::apache::lucene::util::packed::PackedInts$Format _get_format() const;

            PackedInts$FormatAndBits(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint);

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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts$FormatAndBits);
          extern PyTypeObject *PY_TYPE(PackedInts$FormatAndBits);

          class t_PackedInts$FormatAndBits {
          public:
            PyObject_HEAD
            PackedInts$FormatAndBits object;
            static PyObject *wrap_Object(const PackedInts$FormatAndBits&);
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
