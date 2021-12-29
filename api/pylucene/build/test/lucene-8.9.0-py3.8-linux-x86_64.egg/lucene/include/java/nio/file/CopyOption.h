#ifndef java_nio_file_CopyOption_H
#define java_nio_file_CopyOption_H

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

      class CopyOption : public ::java::lang::Object {
       public:

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CopyOption(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CopyOption(const CopyOption& obj) : ::java::lang::Object(obj) {}
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(CopyOption);
      extern PyTypeObject *PY_TYPE(CopyOption);

      class t_CopyOption {
      public:
        PyObject_HEAD
        CopyOption object;
        static PyObject *wrap_Object(const CopyOption&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
