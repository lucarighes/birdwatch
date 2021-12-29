#ifndef org_apache_lucene_util_automaton_Transition_H
#define org_apache_lucene_util_automaton_Transition_H

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
        namespace automaton {

          class Transition : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_dest,
              fid_max,
              fid_min,
              fid_source,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Transition(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Transition(const Transition& obj) : ::java::lang::Object(obj) {}

            jint _get_dest() const;
            void _set_dest(jint) const;
            jint _get_max() const;
            void _set_max(jint) const;
            jint _get_min() const;
            void _set_min(jint) const;
            jint _get_source() const;
            void _set_source(jint) const;

            Transition();

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
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(Transition);
          extern PyTypeObject *PY_TYPE(Transition);

          class t_Transition {
          public:
            PyObject_HEAD
            Transition object;
            static PyObject *wrap_Object(const Transition&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
