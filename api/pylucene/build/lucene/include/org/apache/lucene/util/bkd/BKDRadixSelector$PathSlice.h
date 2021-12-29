#ifndef org_apache_lucene_util_bkd_BKDRadixSelector$PathSlice_H
#define org_apache_lucene_util_bkd_BKDRadixSelector$PathSlice_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointWriter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDRadixSelector$PathSlice : public ::java::lang::Object {
           public:
            enum {
              mid_init$_32caaaecee39461f,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_count,
              fid_start,
              fid_writer,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDRadixSelector$PathSlice(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDRadixSelector$PathSlice(const BKDRadixSelector$PathSlice& obj) : ::java::lang::Object(obj) {}

            jlong _get_count() const;
            jlong _get_start() const;
            ::org::apache::lucene::util::bkd::PointWriter _get_writer() const;

            BKDRadixSelector$PathSlice(const ::org::apache::lucene::util::bkd::PointWriter &, jlong, jlong);

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
          extern PyType_Def PY_TYPE_DEF(BKDRadixSelector$PathSlice);
          extern PyTypeObject *PY_TYPE(BKDRadixSelector$PathSlice);

          class t_BKDRadixSelector$PathSlice {
          public:
            PyObject_HEAD
            BKDRadixSelector$PathSlice object;
            static PyObject *wrap_Object(const BKDRadixSelector$PathSlice&);
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
