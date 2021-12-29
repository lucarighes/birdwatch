#ifndef org_apache_lucene_queryparser_classic_QueryParser_H
#define org_apache_lucene_queryparser_classic_QueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParserBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class Token;
          class ParseException;
          class QueryParserTokenManager;
          class QueryParserConstants;
          class CharStream;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
        class BooleanClause;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
        namespace classic {

          class QueryParser : public ::org::apache::lucene::queryparser::classic::QueryParserBase {
           public:
            enum {
              mid_init$_32cb72731c50a536,
              mid_Clause_1cf26fcf5e3c5839,
              mid_Conjunction_9972fcc56b44e79d,
              mid_Modifiers_9972fcc56b44e79d,
              mid_MultiTerm_67a5409e07e72e46,
              mid_Query_1cf26fcf5e3c5839,
              mid_ReInit_af9967c2adfe3980,
              mid_ReInit_94838218118d13bf,
              mid_Term_1cf26fcf5e3c5839,
              mid_TopLevelQuery_1cf26fcf5e3c5839,
              mid_disable_tracing_f2cc1bce94666404,
              mid_enable_tracing_f2cc1bce94666404,
              mid_generateParseException_d32a9653def49a8c,
              mid_getNextToken_292e526b93f036e3,
              mid_getSplitOnWhitespace_8454bd5aa23fd11e,
              mid_getToken_9e9a7409044819d9,
              mid_setAutoGeneratePhraseQueries_9d72768e8fdce2b7,
              mid_setSplitOnWhitespace_9d72768e8fdce2b7,
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

            explicit QueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParserBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryParser(const QueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParserBase(obj) {}

            static jboolean DEFAULT_SPLIT_ON_WHITESPACE;

            ::org::apache::lucene::queryparser::classic::Token _get_jj_nt() const;
            void _set_jj_nt(const ::org::apache::lucene::queryparser::classic::Token &) const;
            ::org::apache::lucene::queryparser::classic::Token _get_token() const;
            void _set_token(const ::org::apache::lucene::queryparser::classic::Token &) const;
            ::org::apache::lucene::queryparser::classic::QueryParserTokenManager _get_token_source() const;
            void _set_token_source(const ::org::apache::lucene::queryparser::classic::QueryParserTokenManager &) const;

            QueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::Query Clause(const ::java::lang::String &) const;
            jint Conjunction() const;
            jint Modifiers() const;
            ::org::apache::lucene::search::Query MultiTerm(const ::java::lang::String &, const ::java::util::List &) const;
            ::org::apache::lucene::search::Query Query(const ::java::lang::String &) const;
            void ReInit(const ::org::apache::lucene::queryparser::classic::QueryParserTokenManager &) const;
            void ReInit(const ::org::apache::lucene::queryparser::classic::CharStream &) const;
            ::org::apache::lucene::search::Query Term(const ::java::lang::String &) const;
            ::org::apache::lucene::search::Query TopLevelQuery(const ::java::lang::String &) const;
            void disable_tracing() const;
            void enable_tracing() const;
            ::org::apache::lucene::queryparser::classic::ParseException generateParseException() const;
            ::org::apache::lucene::queryparser::classic::Token getNextToken() const;
            jboolean getSplitOnWhitespace() const;
            ::org::apache::lucene::queryparser::classic::Token getToken(jint) const;
            void setAutoGeneratePhraseQueries(jboolean) const;
            void setSplitOnWhitespace(jboolean) const;
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
      namespace queryparser {
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(QueryParser);
          extern PyTypeObject *PY_TYPE(QueryParser);

          class t_QueryParser {
          public:
            PyObject_HEAD
            QueryParser object;
            static PyObject *wrap_Object(const QueryParser&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
