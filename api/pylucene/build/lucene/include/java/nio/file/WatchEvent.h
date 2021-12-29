#ifndef java_nio_file_WatchEvent_H
#define java_nio_file_WatchEvent_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class WatchEvent$Kind;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class WatchEvent : public ::java::lang::Object {
       public:
        enum {
          mid_context_d6bcd06f3102c4d9,
          mid_count_9972fcc56b44e79d,
          mid_kind_0fa2c070f5131065,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WatchEvent(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WatchEvent(const WatchEvent& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object context() const;
        jint count() const;
        ::java::nio::file::WatchEvent$Kind kind() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(WatchEvent);
      extern PyTypeObject *PY_TYPE(WatchEvent);

      class t_WatchEvent {
      public:
        PyObject_HEAD
        WatchEvent object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_WatchEvent *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const WatchEvent&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const WatchEvent&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
