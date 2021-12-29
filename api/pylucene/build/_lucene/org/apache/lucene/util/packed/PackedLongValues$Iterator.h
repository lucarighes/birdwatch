#ifndef org_apache_lucene_util_packed_PackedLongValues$Iterator_H
#define org_apache_lucene_util_packed_PackedLongValues$Iterator_H

#include "java/lang/Object.h"

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
        namespace packed {

          class PackedLongValues$Iterator : public ::java::lang::Object {
           public:
            enum {
              mid_hasNext_8454bd5aa23fd11e,
              mid_next_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedLongValues$Iterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedLongValues$Iterator(const PackedLongValues$Iterator& obj) : ::java::lang::Object(obj) {}

            jboolean hasNext() const;
            jlong next() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedLongValues$Iterator);
          extern PyTypeObject *PY_TYPE(PackedLongValues$Iterator);

          class t_PackedLongValues$Iterator {
          public:
            PyObject_HEAD
            PackedLongValues$Iterator object;
            static PyObject *wrap_Object(const PackedLongValues$Iterator&);
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
