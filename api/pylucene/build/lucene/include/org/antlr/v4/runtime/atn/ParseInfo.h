#ifndef org_antlr_v4_runtime_atn_ParseInfo_H
#define org_antlr_v4_runtime_atn_ParseInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Integer;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class DecisionInfo;
          class ProfilingATNSimulator;
        }
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

          class ParseInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_11e1f3e69ddda4bd,
              mid_getDFASize_9972fcc56b44e79d,
              mid_getDFASize_1e143afe1894d213,
              mid_getDecisionInfo_7d2aa8394c2bb88e,
              mid_getLLDecisions_49ec78390f08338a,
              mid_getTotalATNLookaheadOps_2e5ae9edcb9b072f,
              mid_getTotalLLATNLookaheadOps_2e5ae9edcb9b072f,
              mid_getTotalLLLookaheadOps_2e5ae9edcb9b072f,
              mid_getTotalSLLATNLookaheadOps_2e5ae9edcb9b072f,
              mid_getTotalSLLLookaheadOps_2e5ae9edcb9b072f,
              mid_getTotalTimeInPrediction_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParseInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParseInfo(const ParseInfo& obj) : ::java::lang::Object(obj) {}

            ParseInfo(const ::org::antlr::v4::runtime::atn::ProfilingATNSimulator &);

            jint getDFASize() const;
            jint getDFASize(jint) const;
            JArray< ::org::antlr::v4::runtime::atn::DecisionInfo > getDecisionInfo() const;
            ::java::util::List getLLDecisions() const;
            jlong getTotalATNLookaheadOps() const;
            jlong getTotalLLATNLookaheadOps() const;
            jlong getTotalLLLookaheadOps() const;
            jlong getTotalSLLATNLookaheadOps() const;
            jlong getTotalSLLLookaheadOps() const;
            jlong getTotalTimeInPrediction() const;
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
          extern PyType_Def PY_TYPE_DEF(ParseInfo);
          extern PyTypeObject *PY_TYPE(ParseInfo);

          class t_ParseInfo {
          public:
            PyObject_HEAD
            ParseInfo object;
            static PyObject *wrap_Object(const ParseInfo&);
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
