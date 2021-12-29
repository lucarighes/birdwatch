#ifndef org_antlr_v4_runtime_RuleContext_H
#define org_antlr_v4_runtime_RuleContext_H

#include "java/lang/Object.h"

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
        class RuleContext;
        class Recognizer;
        class Parser;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class RuleContext : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_6f7cd0502670b05e,
            mid_depth_9972fcc56b44e79d,
            mid_getChildCount_9972fcc56b44e79d,
            mid_getParent_fb986177668c7223,
            mid_getPayload_fb986177668c7223,
            mid_getRuleContext_fb986177668c7223,
            mid_getRuleIndex_9972fcc56b44e79d,
            mid_getText_db9b55ba01e03e4b,
            mid_isEmpty_8454bd5aa23fd11e,
            mid_toString_db9b55ba01e03e4b,
            mid_toString_d149253c7f4e18bb,
            mid_toString_d8a287aa24cacc1f,
            mid_toString_38ee7c2c81ff4d7a,
            mid_toString_8380bd41bd6d4935,
            mid_toStringTree_db9b55ba01e03e4b,
            mid_toStringTree_80762e53fce54437,
            mid_toStringTree_d8a287aa24cacc1f,
            max_mid
          };

          enum {
            fid_invokingState,
            fid_parent,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RuleContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RuleContext(const RuleContext& obj) : ::java::lang::Object(obj) {}

          static ::org::antlr::v4::runtime::ParserRuleContext *EMPTY;

          jint _get_invokingState() const;
          void _set_invokingState(jint) const;
          RuleContext _get_parent() const;
          void _set_parent(const RuleContext &) const;

          RuleContext();
          RuleContext(const RuleContext &, jint);

          jint depth() const;
          jint getChildCount() const;
          RuleContext getParent() const;
          RuleContext getPayload() const;
          RuleContext getRuleContext() const;
          jint getRuleIndex() const;
          ::java::lang::String getText() const;
          jboolean isEmpty() const;
          ::java::lang::String toString() const;
          ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &) const;
          ::java::lang::String toString(const ::java::util::List &) const;
          ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &, const RuleContext &) const;
          ::java::lang::String toString(const ::java::util::List &, const RuleContext &) const;
          ::java::lang::String toStringTree() const;
          ::java::lang::String toStringTree(const ::org::antlr::v4::runtime::Parser &) const;
          ::java::lang::String toStringTree(const ::java::util::List &) const;
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
        extern PyType_Def PY_TYPE_DEF(RuleContext);
        extern PyTypeObject *PY_TYPE(RuleContext);

        class t_RuleContext {
        public:
          PyObject_HEAD
          RuleContext object;
          static PyObject *wrap_Object(const RuleContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
