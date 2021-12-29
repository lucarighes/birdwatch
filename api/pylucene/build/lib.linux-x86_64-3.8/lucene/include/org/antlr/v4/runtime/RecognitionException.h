#ifndef org_antlr_v4_runtime_RecognitionException_H
#define org_antlr_v4_runtime_RecognitionException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class IntStream;
        class ParserRuleContext;
        class RuleContext;
        class Recognizer;
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
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class RecognitionException : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_9d5324d082a25483,
            mid_init$_7417a2d5129a0b6a,
            mid_getCtx_fb986177668c7223,
            mid_getInputStream_6b56ee5e0e064807,
            mid_getOffendingState_9972fcc56b44e79d,
            mid_getOffendingToken_ed548981de5895c4,
            mid_getRecognizer_7ada9a48d56325bc,
            mid_setOffendingState_040c4cd0390c5aff,
            mid_setOffendingToken_9d1d45425dbf6563,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RecognitionException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RecognitionException(const RecognitionException& obj) : ::java::lang::RuntimeException(obj) {}

          RecognitionException(const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::IntStream &, const ::org::antlr::v4::runtime::ParserRuleContext &);
          RecognitionException(const ::java::lang::String &, const ::org::antlr::v4::runtime::Recognizer &, const ::org::antlr::v4::runtime::IntStream &, const ::org::antlr::v4::runtime::ParserRuleContext &);

          ::org::antlr::v4::runtime::RuleContext getCtx() const;
          ::org::antlr::v4::runtime::IntStream getInputStream() const;
          jint getOffendingState() const;
          ::org::antlr::v4::runtime::Token getOffendingToken() const;
          ::org::antlr::v4::runtime::Recognizer getRecognizer() const;
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
        extern PyType_Def PY_TYPE_DEF(RecognitionException);
        extern PyTypeObject *PY_TYPE(RecognitionException);

        class t_RecognitionException {
        public:
          PyObject_HEAD
          RecognitionException object;
          static PyObject *wrap_Object(const RecognitionException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
