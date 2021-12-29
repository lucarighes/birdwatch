#ifndef org_apache_lucene_index_FieldTermIterator_H
#define org_apache_lucene_index_FieldTermIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldTermIterator : public ::java::lang::Object {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldTermIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldTermIterator(const FieldTermIterator& obj) : ::java::lang::Object(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(FieldTermIterator);
        extern PyTypeObject *PY_TYPE(FieldTermIterator);

        class t_FieldTermIterator {
        public:
          PyObject_HEAD
          FieldTermIterator object;
          static PyObject *wrap_Object(const FieldTermIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
