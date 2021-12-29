#ifndef org_antlr_v4_runtime_atn_PredictionMode_H
#define org_antlr_v4_runtime_atn_PredictionMode_H

#include "java/lang/Enum.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNConfigSet;
          class PredictionMode;
          class ATNState;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
    class BitSet;
  }
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

          class PredictionMode : public ::java::lang::Enum {
           public:
            enum {
              mid_allConfigsInRuleStopStates_93c39a9023479e43,
              mid_allSubsetsConflict_15d9cc2398c22637,
              mid_allSubsetsEqual_15d9cc2398c22637,
              mid_getAlts_d58e25cdab3539e8,
              mid_getAlts_81dcb69cb4e9e682,
              mid_getConflictingAltSubsets_f8ece6dc90eddfcd,
              mid_getSingleViableAlt_d7a09af4629d2a96,
              mid_getStateToAltMap_574b2632dcf8c562,
              mid_getUniqueAlt_d7a09af4629d2a96,
              mid_hasConfigInRuleStopState_93c39a9023479e43,
              mid_hasConflictingAltSet_15d9cc2398c22637,
              mid_hasNonConflictingAltSet_15d9cc2398c22637,
              mid_hasSLLConflictTerminatingPrediction_f5eb9200db4de401,
              mid_hasStateAssociatedWithOneAlt_93c39a9023479e43,
              mid_resolvesToJustOneViableAlt_d7a09af4629d2a96,
              mid_valueOf_afc48f6781c5532f,
              mid_values_dd3bf809ee367b16,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PredictionMode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PredictionMode(const PredictionMode& obj) : ::java::lang::Enum(obj) {}

            static PredictionMode *LL;
            static PredictionMode *LL_EXACT_AMBIG_DETECTION;
            static PredictionMode *SLL;

            static jboolean allConfigsInRuleStopStates(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jboolean allSubsetsConflict(const ::java::util::Collection &);
            static jboolean allSubsetsEqual(const ::java::util::Collection &);
            static ::java::util::BitSet getAlts(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static ::java::util::BitSet getAlts(const ::java::util::Collection &);
            static ::java::util::Collection getConflictingAltSubsets(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jint getSingleViableAlt(const ::java::util::Collection &);
            static ::java::util::Map getStateToAltMap(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jint getUniqueAlt(const ::java::util::Collection &);
            static jboolean hasConfigInRuleStopState(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jboolean hasConflictingAltSet(const ::java::util::Collection &);
            static jboolean hasNonConflictingAltSet(const ::java::util::Collection &);
            static jboolean hasSLLConflictTerminatingPrediction(const PredictionMode &, const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jboolean hasStateAssociatedWithOneAlt(const ::org::antlr::v4::runtime::atn::ATNConfigSet &);
            static jint resolvesToJustOneViableAlt(const ::java::util::Collection &);
            static PredictionMode valueOf(const ::java::lang::String &);
            static JArray< PredictionMode > values();
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
          extern PyType_Def PY_TYPE_DEF(PredictionMode);
          extern PyTypeObject *PY_TYPE(PredictionMode);

          class t_PredictionMode {
          public:
            PyObject_HEAD
            PredictionMode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PredictionMode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PredictionMode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PredictionMode&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
