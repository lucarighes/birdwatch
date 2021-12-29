#ifndef java_nio_file_WatchEvent$Kind_H
#define java_nio_file_WatchEvent$Kind_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class WatchEvent$Kind : public ::java::lang::Object {
       public:
        enum {
          mid_name_db9b55ba01e03e4b,
          mid_type_9df2cc6ebce035fe,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WatchEvent$Kind(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WatchEvent$Kind(const WatchEvent$Kind& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String name() const;
        ::java::lang::Class type() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(WatchEvent$Kind);
      extern PyTypeObject *PY_TYPE(WatchEvent$Kind);

      class t_WatchEvent$Kind {
      public:
        PyObject_HEAD
        WatchEvent$Kind object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_WatchEvent$Kind *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const WatchEvent$Kind&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const WatchEvent$Kind&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
