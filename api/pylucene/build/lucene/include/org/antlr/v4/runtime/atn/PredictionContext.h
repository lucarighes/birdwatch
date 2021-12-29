#ifndef org_antlr_v4_runtime_atn_PredictionContext_H
#define org_antlr_v4_runtime_atn_PredictionContext_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class PredictionContextCache;
          class ArrayPredictionContext;
          class ATN;
          class EmptyPredictionContext;
          class PredictionContext;
          class SingletonPredictionContext;
        }
        class RuleContext;
        class Recognizer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class IdentityHashMap;
    class List;
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

          class PredictionContext : public ::java::lang::Object {
           public:
            enum {
              mid_equals_8b72f2dcdde6fd1d,
              mid_fromRuleContext_8effd03653511c53,
              mid_getAllContextNodes_d8863b2c6752b9d6,
              mid_getAllContextNodes__dd22c0a67c49f8a2,
              mid_getCachedContext_559d0b88717bc07c,
              mid_getParent_de7c941e2462c7c5,
              mid_getReturnState_1e143afe1894d213,
              mid_hasEmptyPath_8454bd5aa23fd11e,
              mid_hashCode_9972fcc56b44e79d,
              mid_isEmpty_8454bd5aa23fd11e,
              mid_mergeRoot_7f539e19aedf9919,
              mid_size_9972fcc56b44e79d,
              mid_toDOTString_cd07dd248e0ebbe1,
              mid_toString_d149253c7f4e18bb,
              mid_toStrings_60c8dc50b443e2cd,
              mid_toStrings_cda991109ecf05d6,
              mid_combineCommonParents_9d688856c0590cda,
              mid_calculateEmptyHashCode_9972fcc56b44e79d,
              mid_calculateHashCode_f26b21972a428417,
              mid_calculateHashCode_0fab10242a699534,
              max_mid
            };

            enum {
              fid_cachedHashCode,
              fid_id,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PredictionContext(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PredictionContext(const PredictionContext& obj) : ::java::lang::Object(obj) {}

            static ::org::antlr::v4::runtime::atn::EmptyPredictionContext *EMPTY;
            static jint EMPTY_RETURN_STATE;
            static jint globalNodeCount;

            jint _get_cachedHashCode() const;
            jint _get_id() const;

            jboolean equals(const ::java::lang::Object &) const;
            static PredictionContext fromRuleContext(const ::org::antlr::v4::runtime::atn::ATN &, const ::org::antlr::v4::runtime::RuleContext &);
            static ::java::util::List getAllContextNodes(const PredictionContext &);
            static void getAllContextNodes_(const PredictionContext &, const ::java::util::List &, const ::java::util::Map &);
            static PredictionContext getCachedContext(const PredictionContext &, const ::org::antlr::v4::runtime::atn::PredictionContextCache &, const ::java::util::IdentityHashMap &);
            PredictionContext getParent(jint) const;
            jint getReturnState(jint) const;
            jboolean hasEmptyPath() const;
            jint hashCode() const;
            jboolean isEmpty() const;
            static PredictionContext mergeRoot(const ::org::antlr::v4::runtime::atn::SingletonPredictionContext &, const ::org::antlr::v4::runtime::atn::SingletonPredictionContext &, jboolean);
            jint size() const;
            static ::java::lang::String toDOTString(const PredictionContext &);
            ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &) const;
            JArray< ::java::lang::String > toStrings(const ::org::antlr::v4::runtime::Recognizer &, jint) const;
            JArray< ::java::lang::String > toStrings(const ::org::antlr::v4::runtime::Recognizer &, const PredictionContext &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PredictionContext);
          extern PyTypeObject *PY_TYPE(PredictionContext);

          class t_PredictionContext {
          public:
            PyObject_HEAD
            PredictionContext object;
            static PyObject *wrap_Object(const PredictionContext&);
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
