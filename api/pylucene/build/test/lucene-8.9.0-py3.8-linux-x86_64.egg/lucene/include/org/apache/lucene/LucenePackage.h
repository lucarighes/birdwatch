#ifndef org_apache_lucene_LucenePackage_H
#define org_apache_lucene_LucenePackage_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Package;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {

      class LucenePackage : public ::java::lang::Object {
       public:
        enum {
          mid_get_e23660d0b401e60d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LucenePackage(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LucenePackage(const LucenePackage& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::Package get();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      extern PyType_Def PY_TYPE_DEF(LucenePackage);
      extern PyTypeObject *PY_TYPE(LucenePackage);

      class t_LucenePackage {
      public:
        PyObject_HEAD
        LucenePackage object;
        static PyObject *wrap_Object(const LucenePackage&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
