#ifndef org_apache_lucene_queryparser_surround_parser_QueryParser_H
#define org_apache_lucene_queryparser_surround_parser_QueryParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class SrndQuery;
          }
          namespace parser {
            class QueryParserTokenManager;
            class CharStream;
            class ParseException;
            class QueryParserConstants;
            class Token;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class ArrayList;
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
        namespace surround {
          namespace parser {

            class QueryParser : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_init$_67ef41c0d2131f33,
                mid_init$_d91dd22f8b94642a,
                mid_AndQuery_c098c03af75798aa,
                mid_FieldsQuery_c098c03af75798aa,
                mid_FieldsQueryList_49ec78390f08338a,
                mid_NQuery_c098c03af75798aa,
                mid_NotQuery_c098c03af75798aa,
                mid_OptionalFields_908b4cd043251f58,
                mid_OptionalWeights_3f41275c0ad7d3ea,
                mid_OrQuery_c098c03af75798aa,
                mid_PrefixOperatorQuery_c098c03af75798aa,
                mid_PrimaryQuery_c098c03af75798aa,
                mid_ReInit_67ef41c0d2131f33,
                mid_ReInit_d91dd22f8b94642a,
                mid_SimpleTerm_c098c03af75798aa,
                mid_TopSrndQuery_c098c03af75798aa,
                mid_WQuery_c098c03af75798aa,
                mid_disable_tracing_f2cc1bce94666404,
                mid_enable_tracing_f2cc1bce94666404,
                mid_generateParseException_d56a3afdd4365e57,
                mid_getNextToken_0cee914969d57b66,
                mid_getToken_f51c876584e3a9c6,
                mid_parse_02212ae07c05cc63,
                mid_parse2_02212ae07c05cc63,
                mid_getPrefixQuery_b4dd1499cb6ff328,
                mid_getFieldsQuery_3f395447a99b83eb,
                mid_getNotQuery_3c9645318087735c,
                mid_getAndQuery_f821fa2794a6f752,
                mid_getOrQuery_f821fa2794a6f752,
                mid_getOpDistance_a5a7d1128e9e2bb7,
                mid_checkDistanceSubQueries_9923e6e5759048a9,
                mid_getDistanceQuery_b28acdb52d371e19,
                mid_getTermQuery_b4dd1499cb6ff328,
                mid_allowedSuffix_145b2d0af0c06b93,
                mid_allowedTruncation_145b2d0af0c06b93,
                mid_getTruncQuery_02212ae07c05cc63,
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

              explicit QueryParser(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParser(const QueryParser& obj) : ::java::lang::Object(obj) {}

              ::org::apache::lucene::queryparser::surround::parser::Token _get_jj_nt() const;
              void _set_jj_nt(const ::org::apache::lucene::queryparser::surround::parser::Token &) const;
              ::org::apache::lucene::queryparser::surround::parser::Token _get_token() const;
              void _set_token(const ::org::apache::lucene::queryparser::surround::parser::Token &) const;
              ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager _get_token_source() const;
              void _set_token_source(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &) const;

              QueryParser();
              QueryParser(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &);
              QueryParser(const ::org::apache::lucene::queryparser::surround::parser::CharStream &);

              ::org::apache::lucene::queryparser::surround::query::SrndQuery AndQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery FieldsQuery() const;
              ::java::util::List FieldsQueryList() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery NQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery NotQuery() const;
              ::java::util::ArrayList OptionalFields() const;
              void OptionalWeights(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &) const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery OrQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery PrefixOperatorQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery PrimaryQuery() const;
              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::QueryParserTokenManager &) const;
              void ReInit(const ::org::apache::lucene::queryparser::surround::parser::CharStream &) const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery SimpleTerm() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery TopSrndQuery() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery WQuery() const;
              void disable_tracing() const;
              void enable_tracing() const;
              ::org::apache::lucene::queryparser::surround::parser::ParseException generateParseException() const;
              ::org::apache::lucene::queryparser::surround::parser::Token getNextToken() const;
              ::org::apache::lucene::queryparser::surround::parser::Token getToken(jint) const;
              static ::org::apache::lucene::queryparser::surround::query::SrndQuery parse(const ::java::lang::String &);
              ::org::apache::lucene::queryparser::surround::query::SrndQuery parse2(const ::java::lang::String &) const;
            };
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
        namespace surround {
          namespace parser {
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
}

#endif
