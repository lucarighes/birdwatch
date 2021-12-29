#ifndef org_apache_lucene_util_automaton_TooComplexToDeterminizeException_H
#define org_apache_lucene_util_automaton_TooComplexToDeterminizeException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class TooComplexToDeterminizeException;
          class Automaton;
          class RegExp;
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

          class TooComplexToDeterminizeException : public ::java::lang::RuntimeException {
           public:
            enum {
              mid_init$_7b4ad886b0525d24,
              mid_init$_df17a55ceec53376,
              mid_getAutomaton_d9f5c446a29ec187,
              mid_getMaxDeterminizedStates_9972fcc56b44e79d,
              mid_getRegExp_8a1118657ba35ec9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TooComplexToDeterminizeException(jobject obj) : ::java::lang::RuntimeException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TooComplexToDeterminizeException(const TooComplexToDeterminizeException& obj) : ::java::lang::RuntimeException(obj) {}

            TooComplexToDeterminizeException(const ::org::apache::lucene::util::automaton::RegExp &, const TooComplexToDeterminizeException &);
            TooComplexToDeterminizeException(const ::org::apache::lucene::util::automaton::Automaton &, jint);

            ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
            jint getMaxDeterminizedStates() const;
            ::org::apache::lucene::util::automaton::RegExp getRegExp() const;
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
          extern PyType_Def PY_TYPE_DEF(TooComplexToDeterminizeException);
          extern PyTypeObject *PY_TYPE(TooComplexToDeterminizeException);

          class t_TooComplexToDeterminizeException {
          public:
            PyObject_HEAD
            TooComplexToDeterminizeException object;
            static PyObject *wrap_Object(const TooComplexToDeterminizeException&);
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
