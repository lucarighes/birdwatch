#ifndef org_apache_lucene_analysis_util_RollingCharBuffer_H
#define org_apache_lucene_analysis_util_RollingCharBuffer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class RollingCharBuffer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_freeBefore_040c4cd0390c5aff,
              mid_get_1e143afe1894d213,
              mid_get_a06225f5be59d337,
              mid_reset_b2f3c57f5e6eb3f2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RollingCharBuffer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RollingCharBuffer(const RollingCharBuffer& obj) : ::java::lang::Object(obj) {}

            RollingCharBuffer();

            void freeBefore(jint) const;
            jint get(jint) const;
            JArray< jchar > get(jint, jint) const;
            void reset(const ::java::io::Reader &) const;
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
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(RollingCharBuffer);
          extern PyTypeObject *PY_TYPE(RollingCharBuffer);

          class t_RollingCharBuffer {
          public:
            PyObject_HEAD
            RollingCharBuffer object;
            static PyObject *wrap_Object(const RollingCharBuffer&);
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
