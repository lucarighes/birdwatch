#ifndef org_antlr_v4_runtime_atn_SemanticContext_H
#define org_antlr_v4_runtime_atn_SemanticContext_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class RuleContext;
        namespace atn {
          class SemanticContext;
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

          class SemanticContext : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_and_36e29c160357f0ff,
              mid_eval_a1c281c055657321,
              mid_evalPrecedence_55d66a334128c50a,
              mid_or_36e29c160357f0ff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SemanticContext(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SemanticContext(const SemanticContext& obj) : ::java::lang::Object(obj) {}

            static SemanticContext *NONE;

            SemanticContext();

            static SemanticContext and$(const SemanticContext &, const SemanticContext &);
            jboolean eval(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            SemanticContext evalPrecedence(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::RuleContext &) const;
            static SemanticContext or$(const SemanticContext &, const SemanticContext &);
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
          extern PyType_Def PY_TYPE_DEF(SemanticContext);
          extern PyTypeObject *PY_TYPE(SemanticContext);

          class t_SemanticContext {
          public:
            PyObject_HEAD
            SemanticContext object;
            static PyObject *wrap_Object(const SemanticContext&);
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
