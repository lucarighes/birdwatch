#ifndef org_apache_lucene_util_automaton_RunAutomaton_H
#define org_apache_lucene_util_automaton_RunAutomaton_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class RunAutomaton : public ::java::lang::Object {
           public:
            enum {
              mid_equals_8b72f2dcdde6fd1d,
              mid_getCharIntervals_d2c45ef07a322466,
              mid_getSize_9972fcc56b44e79d,
              mid_hashCode_9972fcc56b44e79d,
              mid_isAccept_a1d30e1ee40c89a2,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_step_57a58545eba514db,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RunAutomaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RunAutomaton(const RunAutomaton& obj) : ::java::lang::Object(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            JArray< jint > getCharIntervals() const;
            jint getSize() const;
            jint hashCode() const;
            jboolean isAccept(jint) const;
            jlong ramBytesUsed() const;
            jint step(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(RunAutomaton);
          extern PyTypeObject *PY_TYPE(RunAutomaton);

          class t_RunAutomaton {
          public:
            PyObject_HEAD
            RunAutomaton object;
            static PyObject *wrap_Object(const RunAutomaton&);
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
