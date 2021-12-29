#ifndef org_apache_lucene_queryparser_flexible_core_parser_EscapeQuerySyntax_H
#define org_apache_lucene_queryparser_flexible_core_parser_EscapeQuerySyntax_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
  namespace util {
    class Locale;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              class EscapeQuerySyntax$Type;
            }
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {

              class EscapeQuerySyntax : public ::java::lang::Object {
               public:
                enum {
                  mid_escape_a334820900042cef,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit EscapeQuerySyntax(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                EscapeQuerySyntax(const EscapeQuerySyntax& obj) : ::java::lang::Object(obj) {}

                ::java::lang::CharSequence escape(const ::java::lang::CharSequence &, const ::java::util::Locale &, const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax$Type &) const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {
              extern PyType_Def PY_TYPE_DEF(EscapeQuerySyntax);
              extern PyTypeObject *PY_TYPE(EscapeQuerySyntax);

              class t_EscapeQuerySyntax {
              public:
                PyObject_HEAD
                EscapeQuerySyntax object;
                static PyObject *wrap_Object(const EscapeQuerySyntax&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
