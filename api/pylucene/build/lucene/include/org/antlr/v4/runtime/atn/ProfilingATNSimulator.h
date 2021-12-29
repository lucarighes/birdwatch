#ifndef org_antlr_v4_runtime_atn_ProfilingATNSimulator_H
#define org_antlr_v4_runtime_atn_ProfilingATNSimulator_H

#include "org/antlr/v4/runtime/atn/ParserATNSimulator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class ParserRuleContext;
        namespace atn {
          class DecisionInfo;
        }
        class TokenStream;
        class Parser;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ProfilingATNSimulator : public ::org::antlr::v4::runtime::atn::ParserATNSimulator {
           public:
            enum {
              mid_init$_32103c89317c9cb1,
              mid_adaptivePredict_72c80921051c0d0f,
              mid_getDecisionInfo_7d2aa8394c2bb88e,
              mid_reportAttemptingFullContext_ed6a15b8ee7d4bab,
              mid_reportContextSensitivity_e936c26f7898466f,
              mid_getExistingTargetState_61638a030e2cccdc,
              mid_computeTargetState_11874a3ad517578a,
              mid_computeReachSet_8357bfef0945b314,
              mid_evalSemanticContext_f2ecdd5ff8d6fb82,
              mid_reportAmbiguity_8df929a94940cc45,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProfilingATNSimulator(jobject obj) : ::org::antlr::v4::runtime::atn::ParserATNSimulator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProfilingATNSimulator(const ProfilingATNSimulator& obj) : ::org::antlr::v4::runtime::atn::ParserATNSimulator(obj) {}

            ProfilingATNSimulator(const ::org::antlr::v4::runtime::Parser &);

            jint adaptivePredict(const ::org::antlr::v4::runtime::TokenStream &, jint, const ::org::antlr::v4::runtime::ParserRuleContext &) const;
            JArray< ::org::antlr::v4::runtime::atn::DecisionInfo > getDecisionInfo() const;
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
          extern PyType_Def PY_TYPE_DEF(ProfilingATNSimulator);
          extern PyTypeObject *PY_TYPE(ProfilingATNSimulator);

          class t_ProfilingATNSimulator {
          public:
            PyObject_HEAD
            ProfilingATNSimulator object;
            static PyObject *wrap_Object(const ProfilingATNSimulator&);
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
