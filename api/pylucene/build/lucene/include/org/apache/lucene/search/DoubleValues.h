#ifndef org_apache_lucene_search_DoubleValues_H
#define org_apache_lucene_search_DoubleValues_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValues;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DoubleValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_advanceExact_a1d30e1ee40c89a2,
            mid_doubleValue_8c74b787998ce4bc,
            mid_withDefault_7080b70aeda423fd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleValues(const DoubleValues& obj) : ::java::lang::Object(obj) {}

          static DoubleValues *EMPTY;

          DoubleValues();

          jboolean advanceExact(jint) const;
          jdouble doubleValue() const;
          static DoubleValues withDefault(const DoubleValues &, jdouble);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(DoubleValues);
        extern PyTypeObject *PY_TYPE(DoubleValues);

        class t_DoubleValues {
        public:
          PyObject_HEAD
          DoubleValues object;
          static PyObject *wrap_Object(const DoubleValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
