#ifndef java_util_Spliterator_H
#define java_util_Spliterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    namespace function {
      class Consumer;
    }
    class Spliterator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator : public ::java::lang::Object {
     public:
      enum {
        mid_characteristics_9972fcc56b44e79d,
        mid_estimateSize_2e5ae9edcb9b072f,
        mid_forEachRemaining_39fdd8ee24bf1a00,
        mid_getComparator_beb0414e0ec1de00,
        mid_getExactSizeIfKnown_2e5ae9edcb9b072f,
        mid_hasCharacteristics_a1d30e1ee40c89a2,
        mid_tryAdvance_9aa53ce3333098c2,
        mid_trySplit_7a761c107a8e14bd,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Spliterator(const Spliterator& obj) : ::java::lang::Object(obj) {}

      static jint CONCURRENT;
      static jint DISTINCT;
      static jint IMMUTABLE;
      static jint NONNULL;
      static jint ORDERED;
      static jint SIZED;
      static jint SORTED;
      static jint SUBSIZED;

      jint characteristics() const;
      jlong estimateSize() const;
      void forEachRemaining(const ::java::util::function::Consumer &) const;
      ::java::util::Comparator getComparator() const;
      jlong getExactSizeIfKnown() const;
      jboolean hasCharacteristics(jint) const;
      jboolean tryAdvance(const ::java::util::function::Consumer &) const;
      Spliterator trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Spliterator);
    extern PyTypeObject *PY_TYPE(Spliterator);

    class t_Spliterator {
    public:
      PyObject_HEAD
      Spliterator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Spliterator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
