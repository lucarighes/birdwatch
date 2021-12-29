#ifndef org_apache_lucene_util_automaton_Automata_H
#define org_apache_lucene_util_automaton_Automata_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
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
        class BytesRef;
        namespace automaton {
          class Automaton;
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

          class Automata : public ::java::lang::Object {
           public:
            enum {
              mid_appendAnyChar_b67ef6b3ccd5f3c9,
              mid_appendChar_26ae65911e32943d,
              mid_makeAnyBinary_d9f5c446a29ec187,
              mid_makeAnyChar_d9f5c446a29ec187,
              mid_makeAnyString_d9f5c446a29ec187,
              mid_makeBinary_dc87bd8740894cf4,
              mid_makeBinaryInterval_5c981984f005c472,
              mid_makeChar_577098ea686d0440,
              mid_makeCharRange_607f15865c262dc4,
              mid_makeDecimalInterval_513db806f6a2ed20,
              mid_makeEmpty_d9f5c446a29ec187,
              mid_makeEmptyString_d9f5c446a29ec187,
              mid_makeNonEmptyBinary_d9f5c446a29ec187,
              mid_makeString_4af768456c0d501c,
              mid_makeString_92035af895c3280e,
              mid_makeStringUnion_1673d25b84e453fc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Automata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Automata(const Automata& obj) : ::java::lang::Object(obj) {}

            static jint appendAnyChar(const ::org::apache::lucene::util::automaton::Automaton &, jint);
            static jint appendChar(const ::org::apache::lucene::util::automaton::Automaton &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeAnyBinary();
            static ::org::apache::lucene::util::automaton::Automaton makeAnyChar();
            static ::org::apache::lucene::util::automaton::Automaton makeAnyString();
            static ::org::apache::lucene::util::automaton::Automaton makeBinary(const ::org::apache::lucene::util::BytesRef &);
            static ::org::apache::lucene::util::automaton::Automaton makeBinaryInterval(const ::org::apache::lucene::util::BytesRef &, jboolean, const ::org::apache::lucene::util::BytesRef &, jboolean);
            static ::org::apache::lucene::util::automaton::Automaton makeChar(jint);
            static ::org::apache::lucene::util::automaton::Automaton makeCharRange(jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeDecimalInterval(jint, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeEmpty();
            static ::org::apache::lucene::util::automaton::Automaton makeEmptyString();
            static ::org::apache::lucene::util::automaton::Automaton makeNonEmptyBinary();
            static ::org::apache::lucene::util::automaton::Automaton makeString(const ::java::lang::String &);
            static ::org::apache::lucene::util::automaton::Automaton makeString(const JArray< jint > &, jint, jint);
            static ::org::apache::lucene::util::automaton::Automaton makeStringUnion(const ::java::util::Collection &);
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
          extern PyType_Def PY_TYPE_DEF(Automata);
          extern PyTypeObject *PY_TYPE(Automata);

          class t_Automata {
          public:
            PyObject_HEAD
            Automata object;
            static PyObject *wrap_Object(const Automata&);
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
