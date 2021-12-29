#ifndef org_apache_lucene_util_FilterIterator_H
#define org_apache_lucene_util_FilterIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FilterIterator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6a7e5049637ef964,
            mid_hasNext_8454bd5aa23fd11e,
            mid_next_d6bcd06f3102c4d9,
            mid_remove_f2cc1bce94666404,
            mid_predicateFunction_8b72f2dcdde6fd1d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterIterator(const FilterIterator& obj) : ::java::lang::Object(obj) {}

          FilterIterator(const ::java::util::Iterator &);

          jboolean hasNext() const;
          ::java::lang::Object next() const;
          void remove() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterIterator);
        extern PyTypeObject *PY_TYPE(FilterIterator);

        class t_FilterIterator {
        public:
          PyObject_HEAD
          FilterIterator object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FilterIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FilterIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FilterIterator&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
