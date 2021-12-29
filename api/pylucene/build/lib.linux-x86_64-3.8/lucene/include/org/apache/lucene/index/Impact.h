#ifndef org_apache_lucene_index_Impact_H
#define org_apache_lucene_index_Impact_H

#include "java/lang/Object.h"

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

        class Impact : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7b2f5b9ddfcb9416,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_freq,
            fid_norm,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Impact(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Impact(const Impact& obj) : ::java::lang::Object(obj) {}

          jint _get_freq() const;
          void _set_freq(jint) const;
          jlong _get_norm() const;
          void _set_norm(jlong) const;

          Impact(jint, jlong);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(Impact);
        extern PyTypeObject *PY_TYPE(Impact);

        class t_Impact {
        public:
          PyObject_HEAD
          Impact object;
          static PyObject *wrap_Object(const Impact&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
