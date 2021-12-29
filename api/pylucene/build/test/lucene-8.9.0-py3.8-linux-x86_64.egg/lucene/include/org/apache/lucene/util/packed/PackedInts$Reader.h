#ifndef org_apache_lucene_util_packed_PackedInts$Reader_H
#define org_apache_lucene_util_packed_PackedInts$Reader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
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

          class PackedInts$Reader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_get_0f1d64a641e8af53,
              mid_get_4c642cf3a1fd0041,
              mid_size_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Reader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Reader(const PackedInts$Reader& obj) : ::java::lang::Object(obj) {}

            PackedInts$Reader();

            jlong get(jint) const;
            jint get(jint, const JArray< jlong > &, jint, jint) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedInts$Reader);
          extern PyTypeObject *PY_TYPE(PackedInts$Reader);

          class t_PackedInts$Reader {
          public:
            PyObject_HEAD
            PackedInts$Reader object;
            static PyObject *wrap_Object(const PackedInts$Reader&);
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
