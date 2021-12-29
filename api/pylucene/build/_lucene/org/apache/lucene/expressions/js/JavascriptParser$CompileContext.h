#ifndef org_apache_lucene_expressions_js_JavascriptParser$CompileContext_H
#define org_apache_lucene_expressions_js_JavascriptParser$CompileContext_H

#include "org/antlr/v4/runtime/ParserRuleContext.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {
          class JavascriptParser$ExpressionContext;
        }
      }
    }
  }
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Token;
        namespace atn {
          class ParserATNSimulator;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {

          class JavascriptParser$CompileContext : public ::org::antlr::v4::runtime::ParserRuleContext {
           public:
            enum {
              mid_init$_0c6ee6fa39ffeab1,
              mid_expression_c790b383f10157ae,
              mid_getRuleIndex_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JavascriptParser$CompileContext(jobject obj) : ::org::antlr::v4::runtime::ParserRuleContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JavascriptParser$CompileContext(const JavascriptParser$CompileContext& obj) : ::org::antlr::v4::runtime::ParserRuleContext(obj) {}

            JavascriptParser$CompileContext(const ::org::antlr::v4::runtime::ParserRuleContext &, jint);

            ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext expression() const;
            jint getRuleIndex() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {
          extern PyType_Def PY_TYPE_DEF(JavascriptParser$CompileContext);
          extern PyTypeObject *PY_TYPE(JavascriptParser$CompileContext);

          class t_JavascriptParser$CompileContext {
          public:
            PyObject_HEAD
            JavascriptParser$CompileContext object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_JavascriptParser$CompileContext *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const JavascriptParser$CompileContext&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const JavascriptParser$CompileContext&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
