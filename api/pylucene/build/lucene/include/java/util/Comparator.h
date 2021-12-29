#ifndef java_util_Comparator_H
#define java_util_Comparator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    namespace function {
      class ToIntFunction;
      class ToLongFunction;
      class Function;
      class ToDoubleFunction;
    }
  }
  namespace lang {
    class Comparable;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Comparator : public ::java::lang::Object {
     public:
      enum {
        mid_compare_9dae63203ae747af,
        mid_comparing_dc201a331bfef5c1,
        mid_comparing_eb8ae37fcd6bd979,
        mid_comparingDouble_25ba8710a789ab77,
        mid_comparingInt_db59d1eb87800dd4,
        mid_comparingLong_b76ef25e61ac1a12,
        mid_equals_8b72f2dcdde6fd1d,
        mid_naturalOrder_beb0414e0ec1de00,
        mid_nullsFirst_5cea92c6ee384471,
        mid_nullsLast_5cea92c6ee384471,
        mid_reverseOrder_beb0414e0ec1de00,
        mid_reversed_beb0414e0ec1de00,
        mid_thenComparing_5cea92c6ee384471,
        mid_thenComparing_dc201a331bfef5c1,
        mid_thenComparing_eb8ae37fcd6bd979,
        mid_thenComparingDouble_25ba8710a789ab77,
        mid_thenComparingInt_db59d1eb87800dd4,
        mid_thenComparingLong_b76ef25e61ac1a12,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Comparator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Comparator(const Comparator& obj) : ::java::lang::Object(obj) {}

      jint compare(const ::java::lang::Object &, const ::java::lang::Object &) const;
      static Comparator comparing(const ::java::util::function::Function &);
      static Comparator comparing(const ::java::util::function::Function &, const Comparator &);
      static Comparator comparingDouble(const ::java::util::function::ToDoubleFunction &);
      static Comparator comparingInt(const ::java::util::function::ToIntFunction &);
      static Comparator comparingLong(const ::java::util::function::ToLongFunction &);
      jboolean equals(const ::java::lang::Object &) const;
      static Comparator naturalOrder();
      static Comparator nullsFirst(const Comparator &);
      static Comparator nullsLast(const Comparator &);
      static Comparator reverseOrder();
      Comparator reversed() const;
      Comparator thenComparing(const Comparator &) const;
      Comparator thenComparing(const ::java::util::function::Function &) const;
      Comparator thenComparing(const ::java::util::function::Function &, const Comparator &) const;
      Comparator thenComparingDouble(const ::java::util::function::ToDoubleFunction &) const;
      Comparator thenComparingInt(const ::java::util::function::ToIntFunction &) const;
      Comparator thenComparingLong(const ::java::util::function::ToLongFunction &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Comparator);
    extern PyTypeObject *PY_TYPE(Comparator);

    class t_Comparator {
    public:
      PyObject_HEAD
      Comparator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Comparator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Comparator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Comparator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
