#ifndef org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParserTokenManager_H
#define org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParserTokenManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {
              class StandardSyntaxParserConstants;
              class CharStream;
              class Token;
            }
          }
        }
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
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {

              class StandardSyntaxParserTokenManager : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3c61baa8e1690ea8,
                  mid_init$_cae808849efc478a,
                  mid_ReInit_3c61baa8e1690ea8,
                  mid_ReInit_cae808849efc478a,
                  mid_SwitchTo_040c4cd0390c5aff,
                  mid_getNextToken_f5892a36f0431afa,
                  mid_jjFillToken_f5892a36f0431afa,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardSyntaxParserTokenManager(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StandardSyntaxParserTokenManager(const StandardSyntaxParserTokenManager& obj) : ::java::lang::Object(obj) {}

                static JArray< jint > *jjnewLexState;
                static JArray< ::java::lang::String > *jjstrLiteralImages;
                static JArray< ::java::lang::String > *lexStateNames;

                StandardSyntaxParserTokenManager(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &);
                StandardSyntaxParserTokenManager(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &, jint);

                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &) const;
                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &, jint) const;
                void SwitchTo(jint) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getNextToken() const;
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
          namespace standard {
            namespace parser {
              extern PyType_Def PY_TYPE_DEF(StandardSyntaxParserTokenManager);
              extern PyTypeObject *PY_TYPE(StandardSyntaxParserTokenManager);

              class t_StandardSyntaxParserTokenManager {
              public:
                PyObject_HEAD
                StandardSyntaxParserTokenManager object;
                static PyObject *wrap_Object(const StandardSyntaxParserTokenManager&);
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
