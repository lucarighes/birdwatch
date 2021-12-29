#ifndef org_apache_lucene_index_CheckIndex$Status$FieldInfoStatus_H
#define org_apache_lucene_index_CheckIndex$Status$FieldInfoStatus_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$Status$FieldInfoStatus : public ::java::lang::Object {
         public:

          enum {
            fid_error,
            fid_totFields,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status$FieldInfoStatus(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status$FieldInfoStatus(const CheckIndex$Status$FieldInfoStatus& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Throwable _get_error() const;
          void _set_error(const ::java::lang::Throwable &) const;
          jlong _get_totFields() const;
          void _set_totFields(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(CheckIndex$Status$FieldInfoStatus);
        extern PyTypeObject *PY_TYPE(CheckIndex$Status$FieldInfoStatus);

        class t_CheckIndex$Status$FieldInfoStatus {
        public:
          PyObject_HEAD
          CheckIndex$Status$FieldInfoStatus object;
          static PyObject *wrap_Object(const CheckIndex$Status$FieldInfoStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
