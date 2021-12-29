#ifndef org_apache_lucene_misc_IndexMergeTool_H
#define org_apache_lucene_misc_IndexMergeTool_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {

        class IndexMergeTool : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_main_2fc318b999a7aba3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexMergeTool(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexMergeTool(const IndexMergeTool& obj) : ::java::lang::Object(obj) {}

          IndexMergeTool();

          static void main(const JArray< ::java::lang::String > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        extern PyType_Def PY_TYPE_DEF(IndexMergeTool);
        extern PyTypeObject *PY_TYPE(IndexMergeTool);

        class t_IndexMergeTool {
        public:
          PyObject_HEAD
          IndexMergeTool object;
          static PyObject *wrap_Object(const IndexMergeTool&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
