#ifndef org_antlr_v4_runtime_Recognizer_H
#define org_antlr_v4_runtime_Recognizer_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class IntStream;
        namespace atn {
          class ATN;
          class ParseInfo;
          class ATNSimulator;
        }
        class RecognitionException;
        class RuleContext;
        class TokenFactory;
        class Vocabulary;
        class ANTLRErrorListener;
        class Token;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Class;
    class Integer;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class Recognizer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_action_e8b0b6e737ed4ff0,
            mid_addErrorListener_014abbe861a0405a,
            mid_getATN_268a26f1c0f83c9c,
            mid_getErrorHeader_e10658582431be7e,
            mid_getErrorListenerDispatch_93cb7fdaf3ee9844,
            mid_getErrorListeners_49ec78390f08338a,
            mid_getGrammarFileName_db9b55ba01e03e4b,
            mid_getInputStream_6b56ee5e0e064807,
            mid_getInterpreter_c761e9c4ef94aa29,
            mid_getParseInfo_cda268cdd76646ee,
            mid_getRuleIndexMap_1c3426541413a55d,
            mid_getRuleNames_9865da0b5ee490bc,
            mid_getSerializedATN_db9b55ba01e03e4b,
            mid_getState_9972fcc56b44e79d,
            mid_getTokenErrorDisplay_c9d1abb290ba4cd0,
            mid_getTokenFactory_9bf94c5de004cd3c,
            mid_getTokenNames_9865da0b5ee490bc,
            mid_getTokenType_a5a7d1128e9e2bb7,
            mid_getTokenTypeMap_1c3426541413a55d,
            mid_getVocabulary_91f19806a4a1e6fd,
            mid_precpred_62eb40dbc3bda79d,
            mid_removeErrorListener_014abbe861a0405a,
            mid_removeErrorListeners_f2cc1bce94666404,
            mid_sempred_62b88308de4b734a,
            mid_setInputStream_316a0f0e15ab92d4,
            mid_setInterpreter_4bd1fd6f8f3ec57e,
            mid_setState_040c4cd0390c5aff,
            mid_setTokenFactory_a25e147938e67e01,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Recognizer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Recognizer(const Recognizer& obj) : ::java::lang::Object(obj) {}

          static jint EOF;

          Recognizer();

          void action(const ::org::antlr::v4::runtime::RuleContext &, jint, jint) const;
          void addErrorListener(const ::org::antlr::v4::runtime::ANTLRErrorListener &) const;
          ::org::antlr::v4::runtime::atn::ATN getATN() const;
          ::java::lang::String getErrorHeader(const ::org::antlr::v4::runtime::RecognitionException &) const;
          ::org::antlr::v4::runtime::ANTLRErrorListener getErrorListenerDispatch() const;
          ::java::util::List getErrorListeners() const;
          ::java::lang::String getGrammarFileName() const;
          ::org::antlr::v4::runtime::IntStream getInputStream() const;
          ::org::antlr::v4::runtime::atn::ATNSimulator getInterpreter() const;
          ::org::antlr::v4::runtime::atn::ParseInfo getParseInfo() const;
          ::java::util::Map getRuleIndexMap() const;
          JArray< ::java::lang::String > getRuleNames() const;
          ::java::lang::String getSerializedATN() const;
          jint getState() const;
          ::java::lang::String getTokenErrorDisplay(const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          JArray< ::java::lang::String > getTokenNames() const;
          jint getTokenType(const ::java::lang::String &) const;
          ::java::util::Map getTokenTypeMap() const;
          ::org::antlr::v4::runtime::Vocabulary getVocabulary() const;
          jboolean precpred(const ::org::antlr::v4::runtime::RuleContext &, jint) const;
          void removeErrorListener(const ::org::antlr::v4::runtime::ANTLRErrorListener &) const;
          void removeErrorListeners() const;
          jboolean sempred(const ::org::antlr::v4::runtime::RuleContext &, jint, jint) const;
          void setInputStream(const ::org::antlr::v4::runtime::IntStream &) const;
          void setInterpreter(const ::org::antlr::v4::runtime::atn::ATNSimulator &) const;
          void setState(jint) const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
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
        extern PyType_Def PY_TYPE_DEF(Recognizer);
        extern PyTypeObject *PY_TYPE(Recognizer);

        class t_Recognizer {
        public:
          PyObject_HEAD
          Recognizer object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Recognizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Recognizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Recognizer&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
