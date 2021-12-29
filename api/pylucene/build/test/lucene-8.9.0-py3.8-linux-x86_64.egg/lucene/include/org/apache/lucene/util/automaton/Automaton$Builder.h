#ifndef org_apache_lucene_util_automaton_Automaton$Builder_H
#define org_apache_lucene_util_automaton_Automaton$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class Automaton$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_438c62480c481c65,
              mid_addEpsilon_438c62480c481c65,
              mid_addTransition_db3e97653d3683f3,
              mid_addTransition_34ab80131650555f,
              mid_copy_06c1b4541f684199,
              mid_copyStates_06c1b4541f684199,
              mid_createState_9972fcc56b44e79d,
              mid_finish_d9f5c446a29ec187,
              mid_getNumStates_9972fcc56b44e79d,
              mid_isAccept_a1d30e1ee40c89a2,
              mid_setAccept_b8f283cdbda5c964,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automaton$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Automaton$Builder(const Automaton$Builder& obj) : ::java::lang::Object(obj) {}

            Automaton$Builder();
            Automaton$Builder(jint, jint);

            void addEpsilon(jint, jint) const;
            void addTransition(jint, jint, jint) const;
            void addTransition(jint, jint, jint, jint) const;
            void copy(const ::org::apache::lucene::util::automaton::Automaton &) const;
            void copyStates(const ::org::apache::lucene::util::automaton::Automaton &) const;
            jint createState() const;
            ::org::apache::lucene::util::automaton::Automaton finish() const;
            jint getNumStates() const;
            jboolean isAccept(jint) const;
            void setAccept(jint, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(Automaton$Builder);
          extern PyTypeObject *PY_TYPE(Automaton$Builder);

          class t_Automaton$Builder {
          public:
            PyObject_HEAD
            Automaton$Builder object;
            static PyObject *wrap_Object(const Automaton$Builder&);
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
