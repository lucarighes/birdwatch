#ifndef org_antlr_v4_runtime_TokenSource_H
#define org_antlr_v4_runtime_TokenSource_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenFactory;
        class Token;
        class CharStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class TokenSource : public ::java::lang::Object {
         public:
          enum {
            mid_getCharPositionInLine_9972fcc56b44e79d,
            mid_getInputStream_f3effd93aa48b2fd,
            mid_getLine_9972fcc56b44e79d,
            mid_getSourceName_db9b55ba01e03e4b,
            mid_getTokenFactory_9bf94c5de004cd3c,
            mid_nextToken_ed548981de5895c4,
            mid_setTokenFactory_a25e147938e67e01,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenSource(const TokenSource& obj) : ::java::lang::Object(obj) {}

          jint getCharPositionInLine() const;
          ::org::antlr::v4::runtime::CharStream getInputStream() const;
          jint getLine() const;
          ::java::lang::String getSourceName() const;
          ::org::antlr::v4::runtime::TokenFactory getTokenFactory() const;
          ::org::antlr::v4::runtime::Token nextToken() const;
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
        extern PyType_Def PY_TYPE_DEF(TokenSource);
        extern PyTypeObject *PY_TYPE(TokenSource);

        class t_TokenSource {
        public:
          PyObject_HEAD
          TokenSource object;
          static PyObject *wrap_Object(const TokenSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
