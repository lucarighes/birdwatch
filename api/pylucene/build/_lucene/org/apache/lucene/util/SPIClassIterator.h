#ifndef org_apache_lucene_util_SPIClassIterator_H
#define org_apache_lucene_util_SPIClassIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class ClassLoader;
  }
  namespace util {
    class Iterator;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class SPIClassIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SPIClassIterator : public ::java::lang::Object {
         public:
          enum {
            mid_get_4ff5e6adf6738825,
            mid_get_cad4e178fb1d5c43,
            mid_hasNext_8454bd5aa23fd11e,
            mid_isParentClassLoader_77c23c4ebc88f55a,
            mid_next_9df2cc6ebce035fe,
            mid_remove_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SPIClassIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SPIClassIterator(const SPIClassIterator& obj) : ::java::lang::Object(obj) {}

          static SPIClassIterator get(const ::java::lang::Class &);
          static SPIClassIterator get(const ::java::lang::Class &, const ::java::lang::ClassLoader &);
          jboolean hasNext() const;
          static jboolean isParentClassLoader(const ::java::lang::ClassLoader &, const ::java::lang::ClassLoader &);
          ::java::lang::Class next() const;
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
        extern PyType_Def PY_TYPE_DEF(SPIClassIterator);
        extern PyTypeObject *PY_TYPE(SPIClassIterator);

        class t_SPIClassIterator {
        public:
          PyObject_HEAD
          SPIClassIterator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SPIClassIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SPIClassIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SPIClassIterator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
