#ifndef java_nio_file_WatchEvent$Modifier_H
#define java_nio_file_WatchEvent$Modifier_H

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

      class WatchEvent$Modifier : public ::java::lang::Object {
       public:
        enum {
          mid_name_db9b55ba01e03e4b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WatchEvent$Modifier(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WatchEvent$Modifier(const WatchEvent$Modifier& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String name() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(WatchEvent$Modifier);
      extern PyTypeObject *PY_TYPE(WatchEvent$Modifier);

      class t_WatchEvent$Modifier {
      public:
        PyObject_HEAD
        WatchEvent$Modifier object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_WatchEvent$Modifier *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const WatchEvent$Modifier&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const WatchEvent$Modifier&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
