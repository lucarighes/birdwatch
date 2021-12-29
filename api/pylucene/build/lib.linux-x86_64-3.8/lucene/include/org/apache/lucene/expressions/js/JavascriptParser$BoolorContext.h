#ifndef org_apache_lucene_expressions_js_JavascriptParser$BoolorContext_H
#define org_apache_lucene_expressions_js_JavascriptParser$BoolorContext_H

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

          class JavascriptParser$BoolorContext : public ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext {
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

            explicit JavascriptParser$BoolorContext(jobject obj) : ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JavascriptParser$BoolorContext(const JavascriptParser$BoolorContext& obj) : ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext(obj) {}

            JavascriptParser$BoolorContext(const ::org::apache::lucene::expressions::js::JavascriptParser$ExpressionContext &);

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
          extern PyType_Def PY_TYPE_DEF(JavascriptParser$BoolorContext);
          extern PyTypeObject *PY_TYPE(JavascriptParser$BoolorContext);

          class t_JavascriptParser$BoolorContext {
          public:
            PyObject_HEAD
            JavascriptParser$BoolorContext object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_JavascriptParser$BoolorContext *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const JavascriptParser$BoolorContext&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const JavascriptParser$BoolorContext&, PyTypeObject *, PyTypeObject *);
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
