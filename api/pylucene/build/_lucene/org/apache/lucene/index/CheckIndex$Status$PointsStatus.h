#ifndef org_apache_lucene_index_CheckIndex$Status$PointsStatus_H
#define org_apache_lucene_index_CheckIndex$Status$PointsStatus_H

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

        class CheckIndex$Status$PointsStatus : public ::java::lang::Object {
         public:

          enum {
            fid_error,
            fid_totalValueFields,
            fid_totalValuePoints,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Status$PointsStatus(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Status$PointsStatus(const CheckIndex$Status$PointsStatus& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Throwable _get_error() const;
          void _set_error(const ::java::lang::Throwable &) const;
          jint _get_totalValueFields() const;
          void _set_totalValueFields(jint) const;
          jlong _get_totalValuePoints() const;
          void _set_totalValuePoints(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(CheckIndex$Status$PointsStatus);
        extern PyTypeObject *PY_TYPE(CheckIndex$Status$PointsStatus);

        class t_CheckIndex$Status$PointsStatus {
        public:
          PyObject_HEAD
          CheckIndex$Status$PointsStatus object;
          static PyObject *wrap_Object(const CheckIndex$Status$PointsStatus&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
