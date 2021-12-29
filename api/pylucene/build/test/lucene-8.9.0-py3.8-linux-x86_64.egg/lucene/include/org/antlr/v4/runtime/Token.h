#ifndef org_antlr_v4_runtime_Token_H
#define org_antlr_v4_runtime_Token_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenSource;
        class CharStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class Token : public ::java::lang::Object {
         public:
          enum {
            mid_getChannel_9972fcc56b44e79d,
            mid_getCharPositionInLine_9972fcc56b44e79d,
            mid_getInputStream_f3effd93aa48b2fd,
            mid_getLine_9972fcc56b44e79d,
            mid_getStartIndex_9972fcc56b44e79d,
            mid_getStopIndex_9972fcc56b44e79d,
            mid_getText_db9b55ba01e03e4b,
            mid_getTokenIndex_9972fcc56b44e79d,
            mid_getTokenSource_d01019507f363a98,
            mid_getType_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Token(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Token(const Token& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_CHANNEL;
          static jint EOF;
          static jint EPSILON;
          static jint HIDDEN_CHANNEL;
          static jint INVALID_TYPE;
          static jint MIN_USER_CHANNEL_VALUE;
          static jint MIN_USER_TOKEN_TYPE;

          jint getChannel() const;
          jint getCharPositionInLine() const;
          ::org::antlr::v4::runtime::CharStream getInputStream() const;
          jint getLine() const;
          jint getStartIndex() const;
          jint getStopIndex() const;
          ::java::lang::String getText() const;
          jint getTokenIndex() const;
          ::org::antlr::v4::runtime::TokenSource getTokenSource() const;
          jint getType() const;
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
        extern PyType_Def PY_TYPE_DEF(Token);
        extern PyTypeObject *PY_TYPE(Token);

        class t_Token {
        public:
          PyObject_HEAD
          Token object;
          static PyObject *wrap_Object(const Token&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
