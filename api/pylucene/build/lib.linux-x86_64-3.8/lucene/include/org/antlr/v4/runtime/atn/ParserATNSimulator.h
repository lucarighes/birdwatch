#ifndef org_antlr_v4_runtime_atn_ParserATNSimulator_H
#define org_antlr_v4_runtime_atn_ParserATNSimulator_H

#include "org/antlr/v4/runtime/atn/ATNSimulator.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class NoViableAltException;
        namespace atn {
          class ATN;
          class PredictionMode;
          class PrecedencePredicateTransition;
          class ATNConfig;
        }
        class ParserRuleContext;
        class TokenStream;
        class Parser;
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

          class ParserATNSimulator : public ::org::antlr::v4::runtime::atn::ATNSimulator {
           public:
            enum {
              mid_adaptivePredict_72c80921051c0d0f,
              mid_clearDFA_f2cc1bce94666404,
              mid_dumpDeadEndConfigs_384976d3ff551b47,
              mid_getLookaheadName_58e0d499f5090bc7,
              mid_getParser_025a8d2d46c1e4a8,
              mid_getPredictionMode_39d48f3446be9f6a,
              mid_getRuleName_d7593acad64ef635,
              mid_getTokenName_d7593acad64ef635,
              mid_precedenceTransition_245cbce290b36e63,
              mid_reset_f2cc1bce94666404,
              mid_setPredictionMode_f554dbc9fb9d86dc,
              mid_execATN_52d9a55747374898,
              mid_predicateDFAState_07fe6a95b2decf20,
              mid_execATNWithFullContext_14446877c03cd6ab,
              mid_removeAllConfigsNotInRuleStopState_e217dfa54d1278ee,
              mid_computeStartState_efd060098f08ca81,
              mid_applyPrecedenceFilter_77d90be2cc79d26c,
              mid_getReachableTarget_88792c9aa2dfa8d2,
              mid_getPredsForAmbigAlts_00a73f4bb253e70e,
              mid_getPredicatePredictions_c8dda7d50d5ce291,
              mid_getSynValidOrSemInvalidAltThatFinishedDecisionEntryRule_f7e784c2f9245d46,
              mid_getAltThatFinishedDecisionEntryRule_29e730a5a485819a,
              mid_splitAccordingToSemanticValidity_4990a1d7308163ce,
              mid_closureCheckingStopState_7118a5ab8439b687,
              mid_closure__7118a5ab8439b687,
              mid_getEpsilonTarget_cd80f8ffa1516647,
              mid_actionTransition_dfdd9698a4798f4c,
              mid_predTransition_d8286df541b0e793,
              mid_ruleTransition_a35f30762706461a,
              mid_getConflictingAlts_d58e25cdab3539e8,
              mid_getConflictingAltsOrUniqueAlt_d58e25cdab3539e8,
              mid_noViableAlt_055e0c9132bc03dc,
              mid_getUniqueAlt_29e730a5a485819a,
              mid_addDFAEdge_c578743f8a5e0b4e,
              mid_addDFAState_9ffdbf1a67a07e8a,
              mid_reportAttemptingFullContext_ed6a15b8ee7d4bab,
              mid_reportContextSensitivity_e936c26f7898466f,
              mid_getExistingTargetState_61638a030e2cccdc,
              mid_computeTargetState_11874a3ad517578a,
              mid_computeReachSet_8357bfef0945b314,
              mid_evalSemanticContext_9d29981152279d6a,
              mid_evalSemanticContext_f2ecdd5ff8d6fb82,
              mid_reportAmbiguity_8df929a94940cc45,
              mid_closure_0139b47bca820f55,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParserATNSimulator(jobject obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParserATNSimulator(const ParserATNSimulator& obj) : ::org::antlr::v4::runtime::atn::ATNSimulator(obj) {}

            static jboolean debug;
            static jboolean debug_list_atn_decisions;
            static jboolean dfa_debug;
            static jboolean retry_debug;

            jint adaptivePredict(const ::org::antlr::v4::runtime::TokenStream &, jint, const ::org::antlr::v4::runtime::ParserRuleContext &) const;
            void clearDFA() const;
            void dumpDeadEndConfigs(const ::org::antlr::v4::runtime::NoViableAltException &) const;
            ::java::lang::String getLookaheadName(const ::org::antlr::v4::runtime::TokenStream &) const;
            ::org::antlr::v4::runtime::Parser getParser() const;
            ::org::antlr::v4::runtime::atn::PredictionMode getPredictionMode() const;
            ::java::lang::String getRuleName(jint) const;
            ::java::lang::String getTokenName(jint) const;
            ::org::antlr::v4::runtime::atn::ATNConfig precedenceTransition(const ::org::antlr::v4::runtime::atn::ATNConfig &, const ::org::antlr::v4::runtime::atn::PrecedencePredicateTransition &, jboolean, jboolean, jboolean) const;
            void reset() const;
            void setPredictionMode(const ::org::antlr::v4::runtime::atn::PredictionMode &) const;
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
          extern PyType_Def PY_TYPE_DEF(ParserATNSimulator);
          extern PyTypeObject *PY_TYPE(ParserATNSimulator);

          class t_ParserATNSimulator {
          public:
            PyObject_HEAD
            ParserATNSimulator object;
            static PyObject *wrap_Object(const ParserATNSimulator&);
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
