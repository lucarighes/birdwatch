#ifndef org_antlr_v4_runtime_ParserRuleContext_H
#define org_antlr_v4_runtime_ParserRuleContext_H

#include "org/antlr/v4/runtime/RuleContext.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class ParserRuleContext;
        class RecognitionException;
        class Parser;
        class Token;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class ParserRuleContext : public ::org::antlr::v4::runtime::RuleContext {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_0c6ee6fa39ffeab1,
            mid_addChild_47835dac55075eaf,
            mid_copyFrom_a659ccb039b5e018,
            mid_getChildCount_9972fcc56b44e79d,
            mid_getParent_fcd99d1d10d04c76,
            mid_getRuleContext_95e35e2601d3b5aa,
            mid_getRuleContexts_24e20bcae77dbfdf,
            mid_getStart_ed548981de5895c4,
            mid_getStop_ed548981de5895c4,
            mid_removeLastChild_f2cc1bce94666404,
            mid_toInfoString_80762e53fce54437,
            max_mid
          };

          enum {
            fid_exception,
            fid_start,
            fid_stop,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParserRuleContext(jobject obj) : ::org::antlr::v4::runtime::RuleContext(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParserRuleContext(const ParserRuleContext& obj) : ::org::antlr::v4::runtime::RuleContext(obj) {}

          ::org::antlr::v4::runtime::RecognitionException _get_exception() const;
          void _set_exception(const ::org::antlr::v4::runtime::RecognitionException &) const;
          ::org::antlr::v4::runtime::Token _get_start() const;
          void _set_start(const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::Token _get_stop() const;
          void _set_stop(const ::org::antlr::v4::runtime::Token &) const;

          ParserRuleContext();
          ParserRuleContext(const ParserRuleContext &, jint);

          ::org::antlr::v4::runtime::RuleContext addChild(const ::org::antlr::v4::runtime::RuleContext &) const;
          void copyFrom(const ParserRuleContext &) const;
          jint getChildCount() const;
          ParserRuleContext getParent() const;
          ParserRuleContext getRuleContext(const ::java::lang::Class &, jint) const;
          ::java::util::List getRuleContexts(const ::java::lang::Class &) const;
          ::org::antlr::v4::runtime::Token getStart() const;
          ::org::antlr::v4::runtime::Token getStop() const;
          void removeLastChild() const;
          ::java::lang::String toInfoString(const ::org::antlr::v4::runtime::Parser &) const;
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
        extern PyType_Def PY_TYPE_DEF(ParserRuleContext);
        extern PyTypeObject *PY_TYPE(ParserRuleContext);

        class t_ParserRuleContext {
        public:
          PyObject_HEAD
          ParserRuleContext object;
          static PyObject *wrap_Object(const ParserRuleContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
