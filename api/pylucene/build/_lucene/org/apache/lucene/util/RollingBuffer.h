#ifndef org_apache_lucene_util_RollingBuffer_H
#define org_apache_lucene_util_RollingBuffer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class RollingBuffer$Resettable;
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

        class RollingBuffer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_freeBefore_040c4cd0390c5aff,
            mid_get_a00453d23ae80529,
            mid_getBufferSize_9972fcc56b44e79d,
            mid_getMaxPos_9972fcc56b44e79d,
            mid_reset_f2cc1bce94666404,
            mid_newInstance_a3dd803aa6dd9c73,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RollingBuffer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RollingBuffer(const RollingBuffer& obj) : ::java::lang::Object(obj) {}

          RollingBuffer();

          void freeBefore(jint) const;
          ::org::apache::lucene::util::RollingBuffer$Resettable get(jint) const;
          jint getBufferSize() const;
          jint getMaxPos() const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(RollingBuffer);
        extern PyTypeObject *PY_TYPE(RollingBuffer);

        class t_RollingBuffer {
        public:
          PyObject_HEAD
          RollingBuffer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RollingBuffer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RollingBuffer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RollingBuffer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
