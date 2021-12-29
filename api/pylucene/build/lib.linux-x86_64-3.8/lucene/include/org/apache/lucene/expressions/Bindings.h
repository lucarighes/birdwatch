#ifndef org_apache_lucene_expressions_Bindings_H
#define org_apache_lucene_expressions_Bindings_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {

        class Bindings : public ::java::lang::Object {
         public:
          enum {
            mid_getDoubleValuesSource_ff23b83f44e75cdf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Bindings(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Bindings(const Bindings& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::DoubleValuesSource getDoubleValuesSource(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        extern PyType_Def PY_TYPE_DEF(Bindings);
        extern PyTypeObject *PY_TYPE(Bindings);

        class t_Bindings {
        public:
          PyObject_HEAD
          Bindings object;
          static PyObject *wrap_Object(const Bindings&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
