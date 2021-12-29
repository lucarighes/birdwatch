#ifndef org_antlr_v4_runtime_atn_ATNConfig_H
#define org_antlr_v4_runtime_atn_ATNConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class PredictionContext;
          class SemanticContext;
          class ATNConfig;
          class ATNState;
        }
        class Recognizer;
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

          class ATNConfig : public ::java::lang::Object {
           public:
            enum {
              mid_init$_88c42b6aaadcf97d,
              mid_init$_101e224c4cb5ae50,
              mid_init$_e21fca0385a1d053,
              mid_init$_45d6f0f374153826,
              mid_init$_cbe24c640a7ffbdb,
              mid_init$_16ac7c637c0f9be5,
              mid_init$_3cbfae3aae13bc3c,
              mid_equals_ee797c2c9eeb87eb,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getOuterContextDepth_9972fcc56b44e79d,
              mid_hashCode_9972fcc56b44e79d,
              mid_isPrecedenceFilterSuppressed_8454bd5aa23fd11e,
              mid_setPrecedenceFilterSuppressed_9d72768e8fdce2b7,
              mid_toString_db9b55ba01e03e4b,
              mid_toString_3dd3e2f31052e7db,
              max_mid
            };

            enum {
              fid_alt,
              fid_context,
              fid_reachesIntoOuterContext,
              fid_semanticContext,
              fid_state,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNConfig(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNConfig(const ATNConfig& obj) : ::java::lang::Object(obj) {}

            jint _get_alt() const;
            ::org::antlr::v4::runtime::atn::PredictionContext _get_context() const;
            void _set_context(const ::org::antlr::v4::runtime::atn::PredictionContext &) const;
            jint _get_reachesIntoOuterContext() const;
            void _set_reachesIntoOuterContext(jint) const;
            ::org::antlr::v4::runtime::atn::SemanticContext _get_semanticContext() const;
            ::org::antlr::v4::runtime::atn::ATNState _get_state() const;

            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::SemanticContext &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &, const ::org::antlr::v4::runtime::atn::PredictionContext &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &, const ::org::antlr::v4::runtime::atn::SemanticContext &);
            ATNConfig(const ::org::antlr::v4::runtime::atn::ATNState &, jint, const ::org::antlr::v4::runtime::atn::PredictionContext &);
            ATNConfig(const ATNConfig &, const ::org::antlr::v4::runtime::atn::ATNState &, const ::org::antlr::v4::runtime::atn::PredictionContext &, const ::org::antlr::v4::runtime::atn::SemanticContext &);
            ATNConfig(const ::org::antlr::v4::runtime::atn::ATNState &, jint, const ::org::antlr::v4::runtime::atn::PredictionContext &, const ::org::antlr::v4::runtime::atn::SemanticContext &);

            jboolean equals(const ATNConfig &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getOuterContextDepth() const;
            jint hashCode() const;
            jboolean isPrecedenceFilterSuppressed() const;
            void setPrecedenceFilterSuppressed(jboolean) const;
            ::java::lang::String toString() const;
            ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(ATNConfig);
          extern PyTypeObject *PY_TYPE(ATNConfig);

          class t_ATNConfig {
          public:
            PyObject_HEAD
            ATNConfig object;
            static PyObject *wrap_Object(const ATNConfig&);
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
