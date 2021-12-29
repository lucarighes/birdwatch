#ifndef org_apache_lucene_util_mutable_MutableValueDate_H
#define org_apache_lucene_util_mutable_MutableValueDate_H

#include "org/apache/lucene/util/mutable/MutableValueLong.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {
          class MutableValue;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {

          class MutableValueDate : public ::org::apache::lucene::util::mutable$::MutableValueLong {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_duplicate_b6a1db04136f7d9b,
              mid_toObject_d6bcd06f3102c4d9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutableValueDate(jobject obj) : ::org::apache::lucene::util::mutable$::MutableValueLong(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MutableValueDate(const MutableValueDate& obj) : ::org::apache::lucene::util::mutable$::MutableValueLong(obj) {}

            MutableValueDate();

            ::org::apache::lucene::util::mutable$::MutableValue duplicate() const;
            ::java::lang::Object toObject() const;
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
        namespace mutable$ {
          extern PyType_Def PY_TYPE_DEF(MutableValueDate);
          extern PyTypeObject *PY_TYPE(MutableValueDate);

          class t_MutableValueDate {
          public:
            PyObject_HEAD
            MutableValueDate object;
            static PyObject *wrap_Object(const MutableValueDate&);
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
