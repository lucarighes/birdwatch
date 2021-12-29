#ifndef org_apache_lucene_index_CheckIndex$Status$LiveDocStatus_H
#define org_apache_lucene_index_CheckIndex$Status$LiveDocStatus_H

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

        class CheckIndex$Status$LiveDocStatus : public ::java::lang::Object {
         public:

          enum {
            fid_error,
            fid_numDeleted,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status$LiveDocStatus(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status$LiveDocStatus(const CheckIndex$Status$LiveDocStatus& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Throwable _get_error() const;
          void _set_error(const ::java::lang::Throwable &) const;
          jint _get_numDeleted() const;
          void _set_numDeleted(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(CheckIndex$Status$LiveDocStatus);
        extern PyTypeObject *PY_TYPE(CheckIndex$Status$LiveDocStatus);

        class t_CheckIndex$Status$LiveDocStatus {
        public:
          PyObject_HEAD
          CheckIndex$Status$LiveDocStatus object;
          static PyObject *wrap_Object(const CheckIndex$Status$LiveDocStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
