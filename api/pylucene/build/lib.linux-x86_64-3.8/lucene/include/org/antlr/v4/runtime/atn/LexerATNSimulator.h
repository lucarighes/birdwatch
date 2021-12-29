#ifndef org_antlr_v4_runtime_atn_LexerATNSimulator_H
#define org_antlr_v4_runtime_atn_LexerATNSimulator_H

#include "org/antlr/v4/runtime/atn/ATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATN;
          class LexerATNSimulator;
        }
        class Lexer;
        class CharStream;
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
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class LexerATNSimulator : public ::org::antlr::v4::runtime::atn::ATNSimulator {
           public:
            enum {
              mid_clearDFA_f2cc1bce94666404,
              mid_consume_2707b4f45eb93125,
              mid_copyState_dabe8737d4978eb7,
              mid_getCharPositionInLine_9972fcc56b44e79d,
              mid_getLine_9972fcc56b44e79d,
              mid_getText_a6673f9c65468e49,
              mid_getTokenName_d7593acad64ef635,
              mid_match_606bfe0c091c8dca,
              mid_reset_f2cc1bce94666404,
              mid_setCharPositionInLine_040c4cd0390c5aff,
              mid_setLine_040c4cd0390c5aff,
              mid_execATN_086111a0517e6705,
              mid_computeStartState_fb79feee007f2d4b,
              mid_getReachableTarget_88792c9aa2dfa8d2,
              mid_getEpsilonTarget_9a8f25c6b37b3b66,
              mid_addDFAEdge_b6f9f8ac7e0d0d95,
              mid_addDFAEdge_19b2da3acdaf08d7,
              mid_addDFAState_d54434b122b921bd,
              mid_getExistingTargetState_61638a030e2cccdc,
              mid_computeTargetState_018bc3c2b2e26e07,
              mid_getReachableConfigSet_bfa67a3a840daca4,
              mid_evaluatePredicate_8d7a06d66e151b44,
              mid_captureSimState_5b4214430d0eb94a,
              mid_matchATN_6d7ecf36311e21ee,
              mid_failOrAccept_0892ae32cfb7f7e5,
              mid_closure_9d5e7a72e181a17a,
              mid_accept_7fe8fb8810e3ab5c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LexerATNSimulator(jobject obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LexerATNSimulator(const LexerATNSimulator& obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {}

            static jint MAX_DFA_EDGE;
            static jint MIN_DFA_EDGE;
            static jboolean debug;
            static jboolean dfa_debug;
            static jint match_calls;

            void clearDFA() const;
            void consume(const ::org::antlr::v4::runtime::CharStream &) const;
            void copyState(const LexerATNSimulator &) const;
            jint getCharPositionInLine() const;
            jint getLine() const;
            ::java::lang::String getText(const ::org::antlr::v4::runtime::CharStream &) const;
            ::java::lang::String getTokenName(jint) const;
            jint match(const ::org::antlr::v4::runtime::CharStream &, jint) const;
            void reset() const;
            void setCharPositionInLine(jint) const;
            void setLine(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          extern PyType_Def PY_TYPE_DEF(LexerATNSimulator);
          extern PyTypeObject *PY_TYPE(LexerATNSimulator);

          class t_LexerATNSimulator {
          public:
            PyObject_HEAD
            LexerATNSimulator object;
            static PyObject *wrap_Object(const LexerATNSimulator&);
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
