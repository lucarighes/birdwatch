#ifndef java_nio_file_OpenOption_H
#define java_nio_file_OpenOption_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class OpenOption : public ::java::lang::Object {
       public:

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OpenOption(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OpenOption(const OpenOption& obj) : ::java::lang::Object(obj) {}
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(OpenOption);
      extern PyTypeObject *PY_TYPE(OpenOption);

      class t_OpenOption {
      public:
        PyObject_HEAD
        OpenOption object;
        static PyObject *wrap_Object(const OpenOption&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
