#ifndef java_nio_file_Paths_H
#define java_nio_file_Paths_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Paths : public ::java::lang::Object {
       public:
        enum {
          mid_get_561e2076b428372b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Paths(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Paths(const Paths& obj) : ::java::lang::Object(obj) {}

        static ::java::nio::file::Path get(const ::java::lang::String &, const JArray< ::java::lang::String > &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(Paths);
      extern PyTypeObject *PY_TYPE(Paths);

      class t_Paths {
      public:
        PyObject_HEAD
        Paths object;
        static PyObject *wrap_Object(const Paths&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
