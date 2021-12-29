#ifndef org_apache_lucene_util_automaton_FiniteStringsIterator_H
#define org_apache_lucene_util_automaton_FiniteStringsIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
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

          class FiniteStringsIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_06c1b4541f684199,
              mid_init$_7d257ac22e5cb16e,
              mid_next_ce9cdfb58d7a482b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FiniteStringsIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FiniteStringsIterator(const FiniteStringsIterator& obj) : ::java::lang::Object(obj) {}

            FiniteStringsIterator(const ::org::apache::lucene::util::automaton::Automaton &);
            FiniteStringsIterator(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);

            ::org::apache::lucene::util::IntsRef next() const;
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
          extern PyType_Def PY_TYPE_DEF(FiniteStringsIterator);
          extern PyTypeObject *PY_TYPE(FiniteStringsIterator);

          class t_FiniteStringsIterator {
          public:
            PyObject_HEAD
            FiniteStringsIterator object;
            static PyObject *wrap_Object(const FiniteStringsIterator&);
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
