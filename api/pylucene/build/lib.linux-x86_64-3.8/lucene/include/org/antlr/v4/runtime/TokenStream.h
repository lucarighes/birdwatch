#ifndef org_antlr_v4_runtime_TokenStream_H
#define org_antlr_v4_runtime_TokenStream_H

#include "org/antlr/v4/runtime/IntStream.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class TokenSource;
        class RuleContext;
        class Token;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class TokenStream : public ::org::antlr::v4::runtime::IntStream {
         public:
          enum {
            mid_LT_42cc671c2f94ca07,
            mid_get_42cc671c2f94ca07,
            mid_getText_db9b55ba01e03e4b,
            mid_getText_44a6dd219a8d7d73,
            mid_getText_061dfb3ec6cb6194,
            mid_getTokenSource_d01019507f363a98,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenStream(jobject obj) : ::org::antlr::v4::runtime::IntStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenStream(const TokenStream& obj) : ::org::antlr::v4::runtime::IntStream(obj) {}

          ::org::antlr::v4::runtime::Token LT(jint) const;
          ::org::antlr::v4::runtime::Token get(jint) const;
          ::java::lang::String getText() const;
          ::java::lang::String getText(const ::org::antlr::v4::runtime::RuleContext &) const;
          ::java::lang::String getText(const ::org::antlr::v4::runtime::Token &, const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::TokenSource getTokenSource() const;
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
        extern PyType_Def PY_TYPE_DEF(TokenStream);
        extern PyTypeObject *PY_TYPE(TokenStream);

        class t_TokenStream {
        public:
          PyObject_HEAD
          TokenStream object;
          static PyObject *wrap_Object(const TokenStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
