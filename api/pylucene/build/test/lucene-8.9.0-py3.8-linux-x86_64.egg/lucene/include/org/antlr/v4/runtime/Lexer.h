#ifndef org_antlr_v4_runtime_Lexer_H
#define org_antlr_v4_runtime_Lexer_H

#include "org/antlr/v4/runtime/Recognizer.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenSource;
        class IntStream;
        class RecognitionException;
        class TokenFactory;
        class LexerNoViableAltException;
        namespace atn {
          class LexerATNSimulator;
        }
        class Token;
        class CharStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class Integer;
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

        class Lexer : public ::org::antlr::v4::runtime::Recognizer {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_2707b4f45eb93125,
            mid_emit_ed548981de5895c4,
            mid_emit_9d1d45425dbf6563,
            mid_emitEOF_ed548981de5895c4,
            mid_getAllTokens_49ec78390f08338a,
            mid_getChannel_9972fcc56b44e79d,
            mid_getCharErrorDisplay_d7593acad64ef635,
            mid_getCharIndex_9972fcc56b44e79d,
            mid_getCharPositionInLine_9972fcc56b44e79d,
            mid_getErrorDisplay_9bfa75c9f141b67f,
            mid_getErrorDisplay_d7593acad64ef635,
            mid_getInputStream_f3effd93aa48b2fd,
            mid_getLine_9972fcc56b44e79d,
            mid_getModeNames_9865da0b5ee490bc,
            mid_getSourceName_db9b55ba01e03e4b,
            mid_getText_db9b55ba01e03e4b,
            mid_getToken_ed548981de5895c4,
            mid_getTokenFactory_9bf94c5de004cd3c,
            mid_getTokenNames_9865da0b5ee490bc,
            mid_getType_9972fcc56b44e79d,
            mid_mode_040c4cd0390c5aff,
            mid_more_f2cc1bce94666404,
            mid_nextToken_ed548981de5895c4,
            mid_notifyListeners_a901e1d87728c926,
            mid_popMode_9972fcc56b44e79d,
            mid_pushMode_040c4cd0390c5aff,
            mid_recover_a901e1d87728c926,
            mid_recover_f905eba101774394,
            mid_reset_f2cc1bce94666404,
            mid_setChannel_040c4cd0390c5aff,
            mid_setCharPositionInLine_040c4cd0390c5aff,
            mid_setInputStream_316a0f0e15ab92d4,
            mid_setLine_040c4cd0390c5aff,
            mid_setText_9fd2eb66a64e6f0f,
            mid_setToken_9d1d45425dbf6563,
            mid_setTokenFactory_a25e147938e67e01,
            mid_setType_040c4cd0390c5aff,
            mid_skip_f2cc1bce94666404,
            max_mid
          };

          enum {
            fid__channel,
            fid__hitEOF,
            fid__input,
            fid__mode,
            fid__text,
            fid__token,
            fid__tokenStartCharIndex,
            fid__tokenStartCharPositionInLine,
            fid__tokenStartLine,
            fid__type,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Lexer(jobject obj) : ::org::antlr::v4::runtime::Recognizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Lexer(const Lexer& obj) : ::org::antlr::v4::runtime::Recognizer(obj) {}

          static jint DEFAULT_MODE;
          static jint DEFAULT_TOKEN_CHANNEL;
          static jint HIDDEN;
          static jint MAX_CHAR_VALUE;
          static jint MIN_CHAR_VALUE;
          static jint MORE;
          static jint SKIP;

          jint _get__channel() const;
          void _set__channel(jint) const;
          jboolean _get__hitEOF() const;
          void _set__hitEOF(jboolean) const;
          ::org::antlr::v4::runtime::CharStream _get__input() const;
          void _set__input(const ::org::antlr::v4::runtime::CharStream &) const;
          jint _get__mode() const;
          void _set__mode(jint) const;
          ::java::lang::String _get__text() const;
          void _set__text(const ::java::lang::String &) const;
          ::org::antlr::v4::runtime::Token _get__token() const;
          void _set__token(const ::org::antlr::v4::runtime::Token &) const;
          jint _get__tokenStartCharIndex() const;
          void _set__tokenStartCharIndex(jint) const;
          jint _get__tokenStartCharPositionInLine() const;
          void _set__tokenStartCharPositionInLine(jint) const;
          jint _get__tokenStartLine() const;
          void _set__tokenStartLine(jint) const;
          jint _get__type() const;
          void _set__type(jint) const;

          Lexer();
          Lexer(const ::org::antlr::v4::runtime::CharStream &);

          ::org::antlr::v4::runtime::Token emit() const;
          void emit(const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::Token emitEOF() const;
          ::java::util::List getAllTokens() const;
          jint getChannel() const;
          ::java::lang::String getCharErrorDisplay(jint) const;
          jint getCharIndex() const;
          jint getCharPositionInLine() const;
          ::java::lang::String getErrorDisplay(const ::java::lang::String &) const;
          ::java::lang::String getErrorDisplay(jint) const;
          ::org::antlr::v4::runtime::CharStream getInputStream() const;
          jint getLine() const;
          JArray< ::java::lang::String > getModeNames() const;
          ::java::lang::String getSourceName() const;
          ::java::lang::String getText() const;
          ::org::antlr::v4::runtime::Token getToken() const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          JArray< ::java::lang::String > getTokenNames() const;
          jint getType() const;
          void mode(jint) const;
          void more() const;
          ::org::antlr::v4::runtime::Token nextToken() const;
          void notifyListeners(const ::org::antlr::v4::runtime::LexerNoViableAltException &) const;
          jint popMode() const;
          void pushMode(jint) const;
          void recover(const ::org::antlr::v4::runtime::LexerNoViableAltException &) const;
          void recover(const ::org::antlr::v4::runtime::RecognitionException &) const;
          void reset() const;
          void setChannel(jint) const;
          void setCharPositionInLine(jint) const;
          void setInputStream(const ::org::antlr::v4::runtime::IntStream &) const;
          void setLine(jint) const;
          void setText(const ::java::lang::String &) const;
          void setToken(const ::org::antlr::v4::runtime::Token &) const;
          void setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory &) const;
          void setType(jint) const;
          void skip() const;
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
        extern PyType_Def PY_TYPE_DEF(Lexer);
        extern PyTypeObject *PY_TYPE(Lexer);

        class t_Lexer {
        public:
          PyObject_HEAD
          Lexer object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_Lexer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Lexer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Lexer&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
