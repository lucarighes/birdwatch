#ifndef org_apache_lucene_util_PriorityQueue_H
#define org_apache_lucene_util_PriorityQueue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Iterable;
  }
  namespace util {
    namespace function {
      class Supplier;
    }
    class Iterator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PriorityQueue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_init$_ef5afc2036db078b,
            mid_add_e5ae0f8c04795fa9,
            mid_clear_f2cc1bce94666404,
            mid_insertWithOverflow_e5ae0f8c04795fa9,
            mid_iterator_233a192dadb0917d,
            mid_pop_d6bcd06f3102c4d9,
            mid_remove_8b72f2dcdde6fd1d,
            mid_size_9972fcc56b44e79d,
            mid_top_d6bcd06f3102c4d9,
            mid_updateTop_d6bcd06f3102c4d9,
            mid_updateTop_e5ae0f8c04795fa9,
            mid_lessThan_b06c7be184b2a9ad,
            mid_getHeapArray_6becf78ffd87a9bc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PriorityQueue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PriorityQueue(const PriorityQueue& obj) : ::java::lang::Object(obj) {}

          PriorityQueue(jint);
          PriorityQueue(jint, const ::java::util::function::Supplier &);

          ::java::lang::Object add(const ::java::lang::Object &) const;
          void clear() const;
          ::java::lang::Object insertWithOverflow(const ::java::lang::Object &) const;
          ::java::util::Iterator iterator() const;
          ::java::lang::Object pop() const;
          jboolean remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::lang::Object top() const;
          ::java::lang::Object updateTop() const;
          ::java::lang::Object updateTop(const ::java::lang::Object &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PriorityQueue);
        extern PyTypeObject *PY_TYPE(PriorityQueue);

        class t_PriorityQueue {
        public:
          PyObject_HEAD
          PriorityQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PriorityQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PriorityQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PriorityQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
