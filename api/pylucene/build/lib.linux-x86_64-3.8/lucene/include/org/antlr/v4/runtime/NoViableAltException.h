#ifndef org_antlr_v4_runtime_NoViableAltException_H
#define org_antlr_v4_runtime_NoViableAltException_H

#include "org/antlr/v4/runtime/RecognitionException.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNConfigSet;
        }
        class ParserRuleContext;
        class TokenStream;
        class Parser;
        class Token;
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

        class NoViableAltException : public ::org::antlr::v4::runtime::RecognitionException {
         public:
          enum {
            mid_init$_32103c89317c9cb1,
            mid_init$_d57f89cb65a7d7e1,
            mid_getDeadEndConfigs_63f4947260fb4a02,
            mid_getStartToken_ed548981de5895c4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NoViableAltException(jobject obj) : ::org::antlr::v4::runtime::RecognitionException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NoViableAltException(const NoViableAltException& obj) : ::org::antlr::v4::runtime::RecognitionException(obj) {}

          NoViableAltException(const ::org::antlr::v4::runtime::Parser &);
          NoViableAltException(const ::org::antlr::v4::runtime::Parser &, const ::org::antlr::v4::runtime::TokenStream &, const ::org::antlr::v4::runtime::Token &, const ::org::antlr::v4::runtime::Token &, const ::org::antlr::v4::runtime::atn::ATNConfigSet &, const ::org::antlr::v4::runtime::ParserRuleContext &);

          ::org::antlr::v4::runtime::atn::ATNConfigSet getDeadEndConfigs() const;
          ::org::antlr::v4::runtime::Token getStartToken() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        extern PyType_Def PY_TYPE_DEF(NoViableAltException);
        extern PyTypeObject *PY_TYPE(NoViableAltException);

        class t_NoViableAltException {
        public:
          PyObject_HEAD
          NoViableAltException object;
          static PyObject *wrap_Object(const NoViableAltException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
