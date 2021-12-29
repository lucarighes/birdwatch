#ifndef org_antlr_v4_runtime_atn_ATNSimulator_H
#define org_antlr_v4_runtime_atn_ATNSimulator_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class PredictionContextCache;
          class ATN;
          class PredictionContext;
          class ATNState;
          class Transition;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class UUID;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ATNSimulator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6f34f3e649d77815,
              mid_checkCondition_9d72768e8fdce2b7,
              mid_checkCondition_6ac9e7681f42f885,
              mid_clearDFA_f2cc1bce94666404,
              mid_deserialize_b035da34b9807db2,
              mid_getCachedContext_48ada528ddd16ee5,
              mid_getSharedContextCache_324734798e6f785f,
              mid_reset_f2cc1bce94666404,
              mid_stateFactory_88e11c7e1343300f,
              mid_toInt_6449734bbde5adfd,
              mid_toInt32_d4655f2a19359017,
              mid_toLong_68555c6331a7bdf4,
              mid_toUUID_8e6a1298f3a88129,
              max_mid
            };

            enum {
              fid_atn,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNSimulator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNSimulator(const ATNSimulator& obj) : ::java::lang::Object(obj) {}

            static ::java::util::UUID *SERIALIZED_UUID;
            static jint SERIALIZED_VERSION;

            ::org::antlr::v4::runtime::atn::ATN _get_atn() const;

            ATNSimulator(const ::org::antlr::v4::runtime::atn::ATN &, const ::org::antlr::v4::runtime::atn::PredictionContextCache &);

            static void checkCondition(jboolean);
            static void checkCondition(jboolean, const ::java::lang::String &);
            void clearDFA() const;
            static ::org::antlr::v4::runtime::atn::ATN deserialize(const JArray< jchar > &);
            ::org::antlr::v4::runtime::atn::PredictionContext getCachedContext(const ::org::antlr::v4::runtime::atn::PredictionContext &) const;
            ::org::antlr::v4::runtime::atn::PredictionContextCache getSharedContextCache() const;
            void reset() const;
            static ::org::antlr::v4::runtime::atn::ATNState stateFactory(jint, jint);
            static jint toInt(jchar);
            static jint toInt32(const JArray< jchar > &, jint);
            static jlong toLong(const JArray< jchar > &, jint);
            static ::java::util::UUID toUUID(const JArray< jchar > &, jint);
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
          extern PyType_Def PY_TYPE_DEF(ATNSimulator);
          extern PyTypeObject *PY_TYPE(ATNSimulator);

          class t_ATNSimulator {
          public:
            PyObject_HEAD
            ATNSimulator object;
            static PyObject *wrap_Object(const ATNSimulator&);
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
