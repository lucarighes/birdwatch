#ifndef org_apache_lucene_index_OrdTermState_H
#define org_apache_lucene_index_OrdTermState_H

#include "org/apache/lucene/index/TermState.h"

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
      namespace index {

        class OrdTermState : public ::org::apache::lucene::index::TermState {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_copyFrom_4291efa1cd29ac2a,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_ord,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrdTermState(jobject obj) : ::org::apache::lucene::index::TermState(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrdTermState(const OrdTermState& obj) : ::org::apache::lucene::index::TermState(obj) {}

          jlong _get_ord() const;
          void _set_ord(jlong) const;

          OrdTermState();

          void copyFrom(const ::org::apache::lucene::index::TermState &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(OrdTermState);
        extern PyTypeObject *PY_TYPE(OrdTermState);

        class t_OrdTermState {
        public:
          PyObject_HEAD
          OrdTermState object;
          static PyObject *wrap_Object(const OrdTermState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
