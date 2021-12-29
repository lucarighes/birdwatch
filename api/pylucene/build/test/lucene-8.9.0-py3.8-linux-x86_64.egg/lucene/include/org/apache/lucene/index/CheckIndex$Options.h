#ifndef org_apache_lucene_index_CheckIndex$Options_H
#define org_apache_lucene_index_CheckIndex$Options_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class PrintStream;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$Options : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_getDirImpl_db9b55ba01e03e4b,
            mid_getIndexPath_db9b55ba01e03e4b,
            mid_setOut_51d7bcb97eea24e3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Options(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Options(const CheckIndex$Options& obj) : ::java::lang::Object(obj) {}

          CheckIndex$Options();

          ::java::lang::String getDirImpl() const;
          ::java::lang::String getIndexPath() const;
          void setOut(const ::java::io::PrintStream &) const;
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
        extern PyType_Def PY_TYPE_DEF(CheckIndex$Options);
        extern PyTypeObject *PY_TYPE(CheckIndex$Options);

        class t_CheckIndex$Options {
        public:
          PyObject_HEAD
          CheckIndex$Options object;
          static PyObject *wrap_Object(const CheckIndex$Options&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
