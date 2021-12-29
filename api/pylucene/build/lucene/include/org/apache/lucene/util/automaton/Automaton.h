#ifndef org_apache_lucene_util_automaton_Automaton_H
#define org_apache_lucene_util_automaton_Automaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace automaton {
          class Transition;
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Automaton : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_438c62480c481c65,
              mid_addEpsilon_438c62480c481c65,
              mid_addTransition_db3e97653d3683f3,
              mid_addTransition_34ab80131650555f,
              mid_copy_06c1b4541f684199,
              mid_createState_9972fcc56b44e79d,
              mid_finishState_f2cc1bce94666404,
              mid_getNextTransition_2ceeff7bcecfbfc9,
              mid_getNumStates_9972fcc56b44e79d,
              mid_getNumTransitions_9972fcc56b44e79d,
              mid_getNumTransitions_1e143afe1894d213,
              mid_getSortedTransitions_4286a910eefe1373,
              mid_getTransition_a509059daa27d52d,
              mid_initTransition_b24320c8622f8a72,
              mid_isAccept_a1d30e1ee40c89a2,
              mid_isDeterministic_8454bd5aa23fd11e,
              mid_next_588c877f30277ad1,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_setAccept_b8f283cdbda5c964,
              mid_step_57a58545eba514db,
              mid_toDot_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Automaton(const Automaton& obj) : ::java::lang::Object(obj) {}

            Automaton();
            Automaton(jint, jint);

            void addEpsilon(jint, jint) const;
            void addTransition(jint, jint, jint) const;
            void addTransition(jint, jint, jint, jint) const;
            void copy(const Automaton &) const;
            jint createState() const;
            void finishState() const;
            void getNextTransition(const ::org::apache::lucene::util::automaton::Transition &) const;
            jint getNumStates() const;
            jint getNumTransitions() const;
            jint getNumTransitions(jint) const;
            JArray< JArray< ::org::apache::lucene::util::automaton::Transition > > getSortedTransitions() const;
            void getTransition(jint, jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jint initTransition(jint, const ::org::apache::lucene::util::automaton::Transition &) const;
            jboolean isAccept(jint) const;
            jboolean isDeterministic() const;
            jint next(const ::org::apache::lucene::util::automaton::Transition &, jint) const;
            jlong ramBytesUsed() const;
            void setAccept(jint, jboolean) const;
            jint step(jint, jint) const;
            ::java::lang::String toDot() const;
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
          extern PyType_Def PY_TYPE_DEF(Automaton);
          extern PyTypeObject *PY_TYPE(Automaton);

          class t_Automaton {
          public:
            PyObject_HEAD
            Automaton object;
            static PyObject *wrap_Object(const Automaton&);
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
