#ifndef java_util_concurrent_Delayed_H
#define java_util_concurrent_Delayed_H

#include "java/lang/Comparable.h"

namespace java {
  namespace util {
    namespace concurrent {
      class Delayed;
      class TimeUnit;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace concurrent {

      class Delayed : public ::java::lang::Comparable {
       public:
        enum {
          mid_getDelay_3e6b60f4affbf1c6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Delayed(jobject obj) : ::java::lang::Comparable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Delayed(const Delayed& obj) : ::java::lang::Comparable(obj) {}

        jlong getDelay(const ::java::util::concurrent::TimeUnit &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace concurrent {
      extern PyType_Def PY_TYPE_DEF(Delayed);
      extern PyTypeObject *PY_TYPE(Delayed);

      class t_Delayed {
      public:
        PyObject_HEAD
        Delayed object;
        static PyObject *wrap_Object(const Delayed&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
