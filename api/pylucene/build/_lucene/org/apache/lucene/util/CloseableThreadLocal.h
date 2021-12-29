#ifndef org_apache_lucene_util_CloseableThreadLocal_H
#define org_apache_lucene_util_CloseableThreadLocal_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
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

        class CloseableThreadLocal : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_close_f2cc1bce94666404,
            mid_get_d6bcd06f3102c4d9,
            mid_set_d20f626183f72f7d,
            mid_initialValue_d6bcd06f3102c4d9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CloseableThreadLocal(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CloseableThreadLocal(const CloseableThreadLocal& obj) : ::java::lang::Object(obj) {}

          CloseableThreadLocal();

          void close() const;
          ::java::lang::Object get() const;
          void set(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(CloseableThreadLocal);
        extern PyTypeObject *PY_TYPE(CloseableThreadLocal);

        class t_CloseableThreadLocal {
        public:
          PyObject_HEAD
          CloseableThreadLocal object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CloseableThreadLocal *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CloseableThreadLocal&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CloseableThreadLocal&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
