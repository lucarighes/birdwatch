#ifndef org_apache_lucene_classification_ClassificationResult_H
#define org_apache_lucene_classification_ClassificationResult_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        class ClassificationResult;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Comparable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class ClassificationResult : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff125f2e136766ae,
            mid_compareTo_8b294b676c675c54,
            mid_getAssignedClass_d6bcd06f3102c4d9,
            mid_getScore_8c74b787998ce4bc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ClassificationResult(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ClassificationResult(const ClassificationResult& obj) : ::java::lang::Object(obj) {}

          ClassificationResult(const ::java::lang::Object &, jdouble);

          jint compareTo(const ClassificationResult &) const;
          ::java::lang::Object getAssignedClass() const;
          jdouble getScore() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        extern PyType_Def PY_TYPE_DEF(ClassificationResult);
        extern PyTypeObject *PY_TYPE(ClassificationResult);

        class t_ClassificationResult {
        public:
          PyObject_HEAD
          ClassificationResult object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ClassificationResult *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ClassificationResult&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ClassificationResult&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
