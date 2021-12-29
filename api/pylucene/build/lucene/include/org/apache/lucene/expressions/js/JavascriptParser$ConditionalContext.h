#ifndef org_apache_lucene_expressions_js_JavascriptParser$ConditionalContext_H
#define org_apache_lucene_expressions_js_JavascriptParser$ConditionalContext_H

#include "org/apache/lucene/expressions/js/JavascriptParser$ExpressionContext.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
  namespace util {
    class List;
  }
}
namespace org {
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

          class JavascriptParser$ConditionalContext : public ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext {
           public:
            enum {
              mid_init$_5b630188893587b5,
              mid_expression_49ec78390f08338a,
              mid_expression_a4fb3fdc55d1c64a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JavascriptParser$ConditionalContext(jobject obj) : ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JavascriptParser$ConditionalContext(const JavascriptParser$ConditionalContext& obj) : ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext(obj) {}

            JavascriptParser$ConditionalContext(const ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext &);

            ::java::util::List expression() const;
            ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext expression(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(JavascriptParser$ConditionalContext);
          extern PyTypeObject *PY_TYPE(JavascriptParser$ConditionalContext);

          class t_JavascriptParser$ConditionalContext {
          public:
            PyObject_HEAD
            JavascriptParser$ConditionalContext object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_JavascriptParser$ConditionalContext *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const JavascriptParser$ConditionalContext&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const JavascriptParser$ConditionalContext&, PyTypeObject *, PyTypeObject *);
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
