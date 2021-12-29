#ifndef org_antlr_v4_runtime_Parser_H
#define org_antlr_v4_runtime_Parser_H

#include "org/antlr/v4/runtime/Recognizer.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class IntStream;
        namespace atn {
          class ATN;
          class ParseInfo;
          class ParserATNSimulator;
        }
        class ParserRuleContext;
        class RecognitionException;
        class RuleContext;
        class TokenFactory;
        class TokenStream;
        class ANTLRErrorStrategy;
        class Token;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class Parser : public ::org::antlr::v4::runtime::Recognizer {
         public:
          enum {
            mid_init$_c141788a4cff2a87,
            mid_consume_ed548981de5895c4,
            mid_dumpDFA_f2cc1bce94666404,
            mid_enterOuterAlt_0c6ee6fa39ffeab1,
            mid_enterRecursionRule_0c6ee6fa39ffeab1,
            mid_enterRecursionRule_6175df8c2a6564bc,
            mid_enterRule_f5e293a1e119055d,
            mid_exitRule_f2cc1bce94666404,
            mid_getATNWithBypassAlts_268a26f1c0f83c9c,
            mid_getBuildParseTree_8454bd5aa23fd11e,
            mid_getContext_fcd99d1d10d04c76,
            mid_getCurrentToken_ed548981de5895c4,
            mid_getDFAStrings_49ec78390f08338a,
            mid_getErrorHandler_282c48c0814cf31d,
            mid_getInputStream_2d614d26bdc04f75,
            mid_getInvokingContext_cb5090fa21804be0,
            mid_getNumberOfSyntaxErrors_9972fcc56b44e79d,
            mid_getParseInfo_cda268cdd76646ee,
            mid_getPrecedence_9972fcc56b44e79d,
            mid_getRuleContext_fcd99d1d10d04c76,
            mid_getRuleIndex_a5a7d1128e9e2bb7,
            mid_getRuleInvocationStack_49ec78390f08338a,
            mid_getRuleInvocationStack_3fd6c87ab194fccb,
            mid_getSourceName_db9b55ba01e03e4b,
            mid_getTokenFactory_9bf94c5de004cd3c,
            mid_getTokenStream_2d614d26bdc04f75,
            mid_getTrimParseTree_8454bd5aa23fd11e,
            mid_inContext_145b2d0af0c06b93,
            mid_isExpectedToken_a1d30e1ee40c89a2,
            mid_isMatchedEOF_8454bd5aa23fd11e,
            mid_isTrace_8454bd5aa23fd11e,
            mid_match_42cc671c2f94ca07,
            mid_matchWildcard_ed548981de5895c4,
            mid_notifyErrorListeners_9fd2eb66a64e6f0f,
            mid_notifyErrorListeners_dee80b059c971fe0,
            mid_precpred_62eb40dbc3bda79d,
            mid_pushNewRecursionContext_f5e293a1e119055d,
            mid_removeParseListeners_f2cc1bce94666404,
            mid_reset_f2cc1bce94666404,
            mid_setBuildParseTree_9d72768e8fdce2b7,
            mid_setContext_a659ccb039b5e018,
            mid_setErrorHandler_a5bd85e4e1bb1a03,
            mid_setInputStream_316a0f0e15ab92d4,
            mid_setProfile_9d72768e8fdce2b7,
            mid_setTokenFactory_a25e147938e67e01,
            mid_setTokenStream_c141788a4cff2a87,
            mid_setTrace_9d72768e8fdce2b7,
            mid_setTrimParseTree_9d72768e8fdce2b7,
            mid_unrollRecursionContexts_a659ccb039b5e018,
            mid_triggerExitRuleEvent_f2cc1bce94666404,
            mid_triggerEnterRuleEvent_f2cc1bce94666404,
            mid_addContextToParseTree_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Parser(jobject obj) : ::org::antlr::v4::runtime::Recognizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Parser(const Parser& obj) : ::org::antlr::v4::runtime::Recognizer(obj) {}

          Parser(const ::org::antlr::v4::runtime::TokenStream &);

          ::org::antlr::v4::runtime::Token consume() const;
          void dumpDFA() const;
          void enterOuterAlt(const ::org::antlr::v4::runtime::ParserRuleContext &, jint) const;
          void enterRecursionRule(const ::org::antlr::v4::runtime::ParserRuleContext &, jint) const;
          void enterRecursionRule(const ::org::antlr::v4::runtime::ParserRuleContext &, jint, jint, jint) const;
          void enterRule(const ::org::antlr::v4::runtime::ParserRuleContext &, jint, jint) const;
          void exitRule() const;
          ::org::antlr::v4::runtime::atn::ATN getATNWithBypassAlts() const;
          jboolean getBuildParseTree() const;
          ::org::antlr::v4::runtime::ParserRuleContext getContext() const;
          ::org::antlr::v4::runtime::Token getCurrentToken() const;
          ::java::util::List getDFAStrings() const;
          ::org::antlr::v4::runtime::ANTLRErrorStrategy getErrorHandler() const;
          ::org::antlr::v4::runtime::TokenStream getInputStream() const;
          ::org::antlr::v4::runtime::ParserRuleContext getInvokingContext(jint) const;
          jint getNumberOfSyntaxErrors() const;
          ::org::antlr::v4::runtime::atn::ParseInfo getParseInfo() const;
          jint getPrecedence() const;
          ::org::antlr::v4::runtime::ParserRuleContext getRuleContext() const;
          jint getRuleIndex(const ::java::lang::String &) const;
          ::java::util::List getRuleInvocationStack() const;
          ::java::util::List getRuleInvocationStack(const ::org::antlr::v4::runtime::RuleContext &) const;
          ::java::lang::String getSourceName() const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          ::org::antlr::v4::runtime::TokenStream getTokenStream() const;
          jboolean getTrimParseTree() const;
          jboolean inContext(const ::java::lang::String &) const;
          jboolean isExpectedToken(jint) const;
          jboolean isMatchedEOF() const;
          jboolean isTrace() const;
          ::org::antlr::v4::runtime::Token match(jint) const;
          ::org::antlr::v4::runtime::Token matchWildcard() const;
          void notifyErrorListeners(const ::java::lang::String &) const;
          void notifyErrorListeners(const ::org::antlr::v4::runtime::Token &, const ::java::lang::String &, const ::org::antlr::v4::runtime::RecognitionException &) const;
          jboolean precpred(const ::org::antlr::v4::runtime::RuleContext &, jint) const;
          void pushNewRecursionContext(const ::org::antlr::v4::runtime::ParserRuleContext &, jint, jint) const;
          void removeParseListeners() const;
          void reset() const;
          void setBuildParseTree(jboolean) const;
          void setContext(const ::org::antlr::v4::runtime::ParserRuleContext &) const;
          void setErrorHandler(const ::org::antlr::v4::runtime::ANTLRErrorStrategy &) const;
          void setInputStream(const ::org::antlr::v4::runtime::IntStream &) const;
          void setProfile(jboolean) const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
          void setTokenStream(const ::org::antlr::v4::runtime::TokenStream &) const;
          void setTrace(jboolean) const;
          void setTrimParseTree(jboolean) const;
          void unrollRecursionContexts(const ::org::antlr::v4::runtime::ParserRuleContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(Parser);
        extern PyTypeObject *PY_TYPE(Parser);

        class t_Parser {
        public:
          PyObject_HEAD
          Parser object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Parser *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Parser&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Parser&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
