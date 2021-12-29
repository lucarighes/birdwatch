#ifndef org_apache_lucene_util_automaton_CharacterRunAutomaton_H
#define org_apache_lucene_util_automaton_CharacterRunAutomaton_H

#include "org/apache/lucene/util/automaton/RunAutomaton.h"

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

          class CharacterRunAutomaton : public ::org::apache::lucene::util::automaton::RunAutomaton {
           public:
            enum {
              mid_init$_06c1b4541f684199,
              mid_init$_df17a55ceec53376,
              mid_run_145b2d0af0c06b93,
              mid_run_4c2a9c7f32a6ad26,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharacterRunAutomaton(jobject obj) : ::org::apache::lucene::util::automaton::RunAutomaton(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharacterRunAutomaton(const CharacterRunAutomaton& obj) : ::org::apache::lucene::util::automaton::RunAutomaton(obj) {}

            CharacterRunAutomaton(const ::org::apache::lucene::util::automaton::Automaton &);
            CharacterRunAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, jint);

            jboolean run(const ::java::lang::String &) const;
            jboolean run(const JArray< jchar > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(CharacterRunAutomaton);
          extern PyTypeObject *PY_TYPE(CharacterRunAutomaton);

          class t_CharacterRunAutomaton {
          public:
            PyObject_HEAD
            CharacterRunAutomaton object;
            static PyObject *wrap_Object(const CharacterRunAutomaton&);
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
