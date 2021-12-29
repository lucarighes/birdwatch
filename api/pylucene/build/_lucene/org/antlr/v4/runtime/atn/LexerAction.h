#ifndef org_antlr_v4_runtime_atn_LexerAction_H
#define org_antlr_v4_runtime_atn_LexerAction_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class LexerActionType;
        }
        class Lexer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class LexerAction : public ::java::lang::Object {
           public:
            enum {
              mid_execute_65b83ab4f609e8cb,
              mid_getActionType_ec7e0ccc070cae12,
              mid_isPositionDependent_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LexerAction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LexerAction(const LexerAction& obj) : ::java::lang::Object(obj) {}

            void execute(const ::org::antlr::v4::runtime::Lexer &) const;
            ::org::antlr::v4::runtime::atn::LexerActionType getActionType() const;
            jboolean isPositionDependent() const;
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
          extern PyType_Def PY_TYPE_DEF(LexerAction);
          extern PyTypeObject *PY_TYPE(LexerAction);

          class t_LexerAction {
          public:
            PyObject_HEAD
            LexerAction object;
            static PyObject *wrap_Object(const LexerAction&);
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
