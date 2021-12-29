#ifndef org_apache_lucene_util_fst_UpToTwoPositiveIntOutputs$TwoLongs_H
#define org_apache_lucene_util_fst_UpToTwoPositiveIntOutputs$TwoLongs_H

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
      namespace util {
        namespace fst {

          class UpToTwoPositiveIntOutputs$TwoLongs : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0248b6e53dc27ea3,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_first,
              fid_second,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UpToTwoPositiveIntOutputs$TwoLongs(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UpToTwoPositiveIntOutputs$TwoLongs(const UpToTwoPositiveIntOutputs$TwoLongs& obj) : ::java::lang::Object(obj) {}

            jlong _get_first() const;
            jlong _get_second() const;

            UpToTwoPositiveIntOutputs$TwoLongs(jlong, jlong);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(UpToTwoPositiveIntOutputs$TwoLongs);
          extern PyTypeObject *PY_TYPE(UpToTwoPositiveIntOutputs$TwoLongs);

          class t_UpToTwoPositiveIntOutputs$TwoLongs {
          public:
            PyObject_HEAD
            UpToTwoPositiveIntOutputs$TwoLongs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_UpToTwoPositiveIntOutputs$TwoLongs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const UpToTwoPositiveIntOutputs$TwoLongs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const UpToTwoPositiveIntOutputs$TwoLongs&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
