#ifndef org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H
#define org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {
              class StandardSyntaxParserConstants;
              class ParseException;
              class StandardSyntaxParserTokenManager;
              class CharStream;
              class Token;
            }
          }
          namespace core {
            namespace parser {
              class SyntaxParser;
            }
            namespace nodes {
              class QueryNode;
              class ModifierQueryNode$Modifier;
            }
            class QueryNodeParseException;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
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

              class StandardSyntaxParser : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  mid_init$_99822035dc0bdfd2,
                  mid_init$_3c61baa8e1690ea8,
                  mid_Clause_b1576514fde0a646,
                  mid_ConjQuery_b1576514fde0a646,
                  mid_DisjQuery_b1576514fde0a646,
                  mid_ModClause_b1576514fde0a646,
                  mid_Modifiers_19c2ffd39e124f1c,
                  mid_Query_b1576514fde0a646,
                  mid_ReInit_99822035dc0bdfd2,
                  mid_ReInit_3c61baa8e1690ea8,
                  mid_Term_b1576514fde0a646,
                  mid_TopLevelQuery_b1576514fde0a646,
                  mid_disable_tracing_f2cc1bce94666404,
                  mid_enable_tracing_f2cc1bce94666404,
                  mid_generateParseException_e2a3f0be06e47801,
                  mid_getNextToken_f5892a36f0431afa,
                  mid_getToken_7696c268eaf43e29,
                  mid_parse_19de468a7b0842c6,
                  max_mid
                };

                enum {
                  fid_jj_nt,
                  fid_token,
                  fid_token_source,
                  max_fid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static jfieldID *fids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardSyntaxParser(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StandardSyntaxParser(const StandardSyntaxParser& obj) : ::java::lang::Object(obj) {}

                ::org::apache::lucene::queryparser::flexible::standard::parser::Token _get_jj_nt() const;
                void _set_jj_nt(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token _get_token() const;
                void _set_token(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager _get_token_source() const;
                void _set_token_source(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &) const;

                StandardSyntaxParser();
                StandardSyntaxParser(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &);
                StandardSyntaxParser(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &);

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode Clause(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode ConjQuery(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode DisjQuery(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode ModClause(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::ModifierQueryNode$Modifier Modifiers() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode Query(const ::java::lang::CharSequence &) const;
                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::StandardSyntaxParserTokenManager &) const;
                void ReInit(const ::org::apache::lucene::queryparser::flexible::standard::parser::CharStream &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode Term(const ::java::lang::CharSequence &) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode TopLevelQuery(const ::java::lang::CharSequence &) const;
                void disable_tracing() const;
                void enable_tracing() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::ParseException generateParseException() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getNextToken() const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getToken(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode parse(const ::java::lang::CharSequence &, const ::java::lang::CharSequence &) const;
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
              extern PyType_Def PY_TYPE_DEF(StandardSyntaxParser);
              extern PyTypeObject *PY_TYPE(StandardSyntaxParser);

              class t_StandardSyntaxParser {
              public:
                PyObject_HEAD
                StandardSyntaxParser object;
                static PyObject *wrap_Object(const StandardSyntaxParser&);
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
