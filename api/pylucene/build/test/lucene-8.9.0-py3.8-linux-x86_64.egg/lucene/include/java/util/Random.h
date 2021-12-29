#ifndef java_util_Random_H
#define java_util_Random_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Random : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f2cc1bce94666404,
        mid_init$_9c778c9bce6694df,
        mid_nextBoolean_8454bd5aa23fd11e,
        mid_nextBytes_9ffdf271836656c4,
        mid_nextDouble_8c74b787998ce4bc,
        mid_nextFloat_58aec2b64dff50c8,
        mid_nextGaussian_8c74b787998ce4bc,
        mid_nextInt_9972fcc56b44e79d,
        mid_nextInt_1e143afe1894d213,
        mid_nextLong_2e5ae9edcb9b072f,
        mid_setSeed_9c778c9bce6694df,
        mid_next_1e143afe1894d213,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Random(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Random(const Random& obj) : ::java::lang::Object(obj) {}

      Random();
      Random(jlong);

      jboolean nextBoolean() const;
      void nextBytes(const JArray< jbyte > &) const;
      jdouble nextDouble() const;
      jfloat nextFloat() const;
      jdouble nextGaussian() const;
      jint nextInt() const;
      jint nextInt(jint) const;
      jlong nextLong() const;
      void setSeed(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Random);
    extern PyTypeObject *PY_TYPE(Random);

    class t_Random {
    public:
      PyObject_HEAD
      Random object;
      static PyObject *wrap_Object(const Random&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
