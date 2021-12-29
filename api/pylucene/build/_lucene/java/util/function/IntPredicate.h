#ifndef java_util_function_IntPredicate_H
#define java_util_function_IntPredicate_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class IntPredicate;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace function {

      class IntPredicate : public ::java::lang::Object {
       public:
        enum {
          mid_and_d2b2daee352ef5df,
          mid_negate_5e8762d763b30087,
          mid_or_d2b2daee352ef5df,
          mid_test_a1d30e1ee40c89a2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IntPredicate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IntPredicate(const IntPredicate& obj) : ::java::lang::Object(obj) {}

        IntPredicate and$(const IntPredicate &) const;
        IntPredicate negate() const;
        IntPredicate or$(const IntPredicate &) const;
        jboolean test(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace function {
      extern PyType_Def PY_TYPE_DEF(IntPredicate);
      extern PyTypeObject *PY_TYPE(IntPredicate);

      class t_IntPredicate {
      public:
        PyObject_HEAD
        IntPredicate object;
        static PyObject *wrap_Object(const IntPredicate&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
