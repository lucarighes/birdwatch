#ifndef org_apache_lucene_util_DocIdSetBuilder$BulkAdder_H
#define org_apache_lucene_util_DocIdSetBuilder$BulkAdder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class DocIdSetBuilder$BulkAdder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_add_040c4cd0390c5aff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSetBuilder$BulkAdder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIdSetBuilder$BulkAdder(const DocIdSetBuilder$BulkAdder& obj) : ::java::lang::Object(obj) {}

          DocIdSetBuilder$BulkAdder();

          void add(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(DocIdSetBuilder$BulkAdder);
        extern PyTypeObject *PY_TYPE(DocIdSetBuilder$BulkAdder);

        class t_DocIdSetBuilder$BulkAdder {
        public:
          PyObject_HEAD
          DocIdSetBuilder$BulkAdder object;
          static PyObject *wrap_Object(const DocIdSetBuilder$BulkAdder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
