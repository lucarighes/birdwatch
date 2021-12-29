#ifndef org_apache_pylucene_util_PythonComparable_H
#define org_apache_pylucene_util_PythonComparable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Comparable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {

        class PythonComparable : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_compareTo_5a4805a36cf611e7,
            mid_finalize_f2cc1bce94666404,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonComparable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonComparable(const PythonComparable& obj) : ::java::lang::Object(obj) {}

          PythonComparable();

          jint compareTo(const ::java::lang::Object &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PythonComparable);
        extern PyTypeObject *PY_TYPE(PythonComparable);

        class t_PythonComparable {
        public:
          PyObject_HEAD
          PythonComparable object;
          static PyObject *wrap_Object(const PythonComparable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
