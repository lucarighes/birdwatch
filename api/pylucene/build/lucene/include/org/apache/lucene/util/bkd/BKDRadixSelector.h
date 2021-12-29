#ifndef org_apache_lucene_util_bkd_BKDRadixSelector_H
#define org_apache_lucene_util_bkd_BKDRadixSelector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace util {
        namespace bkd {
          class BKDConfig;
          class HeapPointWriter;
          class BKDRadixSelector$PathSlice;
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
        namespace bkd {

          class BKDRadixSelector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_439c4dbe2b0da88d,
              mid_heapRadixSort_c44072e7efb0b802,
              mid_select_b17b46e672a3854d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDRadixSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDRadixSelector(const BKDRadixSelector& obj) : ::java::lang::Object(obj) {}

            BKDRadixSelector(const ::org::apache::lucene::util::bkd::BKDConfig &, jint, const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);

            void heapRadixSort(const ::org::apache::lucene::util::bkd::HeapPointWriter &, jint, jint, jint, jint) const;
            JArray< jbyte > select(const ::org::apache::lucene::util::bkd::BKDRadixSelector$PathSlice &, const JArray< ::org::apache::lucene::util::bkd::BKDRadixSelector$PathSlice > &, jlong, jlong, jlong, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(BKDRadixSelector);
          extern PyTypeObject *PY_TYPE(BKDRadixSelector);

          class t_BKDRadixSelector {
          public:
            PyObject_HEAD
            BKDRadixSelector object;
            static PyObject *wrap_Object(const BKDRadixSelector&);
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
