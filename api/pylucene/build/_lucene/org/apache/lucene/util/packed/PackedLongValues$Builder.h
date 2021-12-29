#ifndef org_apache_lucene_util_packed_PackedLongValues$Builder_H
#define org_apache_lucene_util_packed_PackedLongValues$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedLongValues;
          class PackedLongValues$Builder;
        }
        class Accountable;
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
        namespace packed {

          class PackedLongValues$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_add_f1342620ec58d093,
              mid_build_9abfa442b6513fc8,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_size_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedLongValues$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedLongValues$Builder(const PackedLongValues$Builder& obj) : ::java::lang::Object(obj) {}

            PackedLongValues$Builder add(jlong) const;
            ::org::apache::lucene::util::packed::PackedLongValues build() const;
            jlong ramBytesUsed() const;
            jlong size() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedLongValues$Builder);
          extern PyTypeObject *PY_TYPE(PackedLongValues$Builder);

          class t_PackedLongValues$Builder {
          public:
            PyObject_HEAD
            PackedLongValues$Builder object;
            static PyObject *wrap_Object(const PackedLongValues$Builder&);
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
