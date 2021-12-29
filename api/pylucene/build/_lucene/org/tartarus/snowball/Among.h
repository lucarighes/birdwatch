#ifndef org_tartarus_snowball_Among_H
#define org_tartarus_snowball_Among_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {

      class Among : public ::java::lang::Object {
       public:

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Among(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Among(const Among& obj) : ::java::lang::Object(obj) {}
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      extern PyType_Def PY_TYPE_DEF(Among);
      extern PyTypeObject *PY_TYPE(Among);

      class t_Among {
      public:
        PyObject_HEAD
        Among object;
        static PyObject *wrap_Object(const Among&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
