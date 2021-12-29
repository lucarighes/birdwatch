#ifndef org_antlr_v4_runtime_atn_EmptyPredictionContext_H
#define org_antlr_v4_runtime_atn_EmptyPredictionContext_H

#include "org/antlr/v4/runtime/atn/SingletonPredictionContext.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class PredictionContext;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class EmptyPredictionContext : public ::org::antlr::v4::runtime::atn::SingletonPredictionContext {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getParent_de7c941e2462c7c5,
              mid_getReturnState_1e143afe1894d213,
              mid_isEmpty_8454bd5aa23fd11e,
              mid_size_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EmptyPredictionContext(jobject obj) : ::org::antlr::v4::runtime::atn::SingletonPredictionContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EmptyPredictionContext(const EmptyPredictionContext& obj) : ::org::antlr::v4::runtime::atn::SingletonPredictionContext(obj) {}

            EmptyPredictionContext();

            jboolean equals(const ::java::lang::Object &) const;
            ::org::antlr::v4::runtime::atn::PredictionContext getParent(jint) const;
            jint getReturnState(jint) const;
            jboolean isEmpty() const;
            jint size() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(EmptyPredictionContext);
          extern PyTypeObject *PY_TYPE(EmptyPredictionContext);

          class t_EmptyPredictionContext {
          public:
            PyObject_HEAD
            EmptyPredictionContext object;
            static PyObject *wrap_Object(const EmptyPredictionContext&);
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
