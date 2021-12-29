#ifndef org_apache_lucene_util_automaton_RegExp_H
#define org_apache_lucene_util_automaton_RegExp_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
    class IllegalArgumentException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class RegExp$Kind;
          class RegExp;
          class TooComplexToDeterminizeException;
          class Automaton;
          class AutomatonProvider;
        }
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

          class RegExp : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9fd2eb66a64e6f0f,
              mid_init$_3fb1dae8d4037984,
              mid_init$_08af6957f9159d4d,
              mid_getIdentifiers_7dcf4034c6d1a92a,
              mid_getOriginalString_db9b55ba01e03e4b,
              mid_toAutomaton_d9f5c446a29ec187,
              mid_toAutomaton_577098ea686d0440,
              mid_toAutomaton_45649c5d7779ad7f,
              mid_toAutomaton_f3862af1b10ec1ba,
              mid_toString_db9b55ba01e03e4b,
              mid_toStringTree_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_c,
              fid_digits,
              fid_exp1,
              fid_exp2,
              fid_from,
              fid_kind,
              fid_max,
              fid_min,
              fid_s,
              fid_to,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RegExp(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RegExp(const RegExp& obj) : ::java::lang::Object(obj) {}

            static jint ALL;
            static jint ANYSTRING;
            static jint ASCII_CASE_INSENSITIVE;
            static jint AUTOMATON;
            static jint COMPLEMENT;
            static jint EMPTY;
            static jint INTERSECTION;
            static jint INTERVAL;
            static jint NONE;

            jint _get_c() const;
            jint _get_digits() const;
            RegExp _get_exp1() const;
            RegExp _get_exp2() const;
            jint _get_from() const;
            ::org::apache::lucene::util::automaton::RegExp$Kind _get_kind() const;
            jint _get_max() const;
            jint _get_min() const;
            ::java::lang::String _get_s() const;
            jint _get_to() const;

            RegExp(const ::java::lang::String &);
            RegExp(const ::java::lang::String &, jint);
            RegExp(const ::java::lang::String &, jint, jint);

            ::java::util::Set getIdentifiers() const;
            ::java::lang::String getOriginalString() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton() const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(jint) const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::java::util::Map &, jint) const;
            ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::automaton::AutomatonProvider &, jint) const;
            ::java::lang::String toString() const;
            ::java::lang::String toStringTree() const;
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
          extern PyType_Def PY_TYPE_DEF(RegExp);
          extern PyTypeObject *PY_TYPE(RegExp);

          class t_RegExp {
          public:
            PyObject_HEAD
            RegExp object;
            static PyObject *wrap_Object(const RegExp&);
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
