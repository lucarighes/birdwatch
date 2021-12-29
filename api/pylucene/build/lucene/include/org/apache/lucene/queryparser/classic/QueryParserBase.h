#ifndef org_apache_lucene_queryparser_classic_QueryParserBase_H
#define org_apache_lucene_queryparser_classic_QueryParserBase_H

#include "org/apache/lucene/util/QueryBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class DateTools$Resolution;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace queryparser {
        namespace classic {
          class ParseException;
          class QueryParser$Operator;
          class CharStream;
        }
        namespace flexible {
          namespace standard {
            class CommonQueryParserConfiguration;
          }
        }
      }
      namespace search {
        class Query;
        class MultiTermQuery$RewriteMethod;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Locale;
    class TimeZone;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {

          class QueryParserBase : public ::org::apache::lucene::util::QueryBuilder {
           public:
            enum {
              mid_ReInit_94838218118d13bf,
              mid_TopLevelQuery_1cf26fcf5e3c5839,
              mid_escape_9bfa75c9f141b67f,
              mid_getAllowLeadingWildcard_8454bd5aa23fd11e,
              mid_getAutoGeneratePhraseQueries_8454bd5aa23fd11e,
              mid_getDateResolution_29edadd05c3fc82d,
              mid_getDefaultOperator_f75dce5b73b81afc,
              mid_getField_db9b55ba01e03e4b,
              mid_getFuzzyMinSim_58aec2b64dff50c8,
              mid_getFuzzyPrefixLength_9972fcc56b44e79d,
              mid_getLocale_bd9770023d5e622d,
              mid_getMaxDeterminizedStates_9972fcc56b44e79d,
              mid_getMultiTermRewriteMethod_aed18a8b23332eb7,
              mid_getPhraseSlop_9972fcc56b44e79d,
              mid_getTimeZone_a00e8b2cc21b09d1,
              mid_init_32cb72731c50a536,
              mid_parse_1cf26fcf5e3c5839,
              mid_setAllowLeadingWildcard_9d72768e8fdce2b7,
              mid_setAutoGeneratePhraseQueries_9d72768e8fdce2b7,
              mid_setDateResolution_51afa6f891f6b9d8,
              mid_setDateResolution_5efef36934bee10d,
              mid_setDefaultOperator_8591fd0669654a9b,
              mid_setFuzzyMinSim_8e1d952dd65cdc3a,
              mid_setFuzzyPrefixLength_040c4cd0390c5aff,
              mid_setLocale_8b005052a37adc8a,
              mid_setMaxDeterminizedStates_040c4cd0390c5aff,
              mid_setMultiTermRewriteMethod_4bd3a81cb6936220,
              mid_setPhraseSlop_040c4cd0390c5aff,
              mid_setTimeZone_62cba443b119095c,
              mid_newRangeQuery_ee01989124e5cf67,
              mid_getFieldQuery_3a5baa20d223c529,
              mid_getFieldQuery_da5a988725940811,
              mid_addClause_6872b640a77a7c4d,
              mid_getBooleanQuery_f5d003a5f0f6b381,
              mid_getRangeQuery_ee01989124e5cf67,
              mid_addMultiTermClauses_e896b45ee1b538e8,
              mid_newFieldQuery_be0607dbd1a7c1bc,
              mid_newBooleanClause_a8cf61d39c989140,
              mid_newPrefixQuery_562b92ffa59b5a82,
              mid_newRegexpQuery_562b92ffa59b5a82,
              mid_newFuzzyQuery_9efc00f4c0804abe,
              mid_newMatchAllDocsQuery_cbf839a480265450,
              mid_newWildcardQuery_562b92ffa59b5a82,
              mid_getWildcardQuery_e08cfaa30c1cfbe9,
              mid_getRegexpQuery_e08cfaa30c1cfbe9,
              mid_getPrefixQuery_e08cfaa30c1cfbe9,
              mid_getFuzzyQuery_391b6230ae9c102d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryParserBase(jobject obj) : ::org::apache::lucene::util::QueryBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryParserBase(const QueryParserBase& obj) : ::org::apache::lucene::util::QueryBuilder(obj) {}

            static ::org::apache::lucene::queryparser::classic::QueryParser$Operator *AND_OPERATOR;
            static ::org::apache::lucene::queryparser::classic::QueryParser$Operator *OR_OPERATOR;

            void ReInit(const ::org::apache::lucene::queryparser::classic::CharStream &) const;
            ::org::apache::lucene::search::Query TopLevelQuery(const ::java::lang::String &) const;
            static ::java::lang::String escape(const ::java::lang::String &);
            jboolean getAllowLeadingWildcard() const;
            jboolean getAutoGeneratePhraseQueries() const;
            ::org::apache::lucene::document::DateTools$Resolution getDateResolution(const ::java::lang::String &) const;
            ::org::apache::lucene::queryparser::classic::QueryParser$Operator getDefaultOperator() const;
            ::java::lang::String getField() const;
            jfloat getFuzzyMinSim() const;
            jint getFuzzyPrefixLength() const;
            ::java::util::Locale getLocale() const;
            jint getMaxDeterminizedStates() const;
            ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
            jint getPhraseSlop() const;
            ::java::util::TimeZone getTimeZone() const;
            void init(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setAllowLeadingWildcard(jboolean) const;
            void setAutoGeneratePhraseQueries(jboolean) const;
            void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
            void setDateResolution(const ::java::lang::String &, const ::org::apache::lucene::document::DateTools$Resolution &) const;
            void setDefaultOperator(const ::org::apache::lucene::queryparser::classic::QueryParser$Operator &) const;
            void setFuzzyMinSim(jfloat) const;
            void setFuzzyPrefixLength(jint) const;
            void setLocale(const ::java::util::Locale &) const;
            void setMaxDeterminizedStates(jint) const;
            void setMultiTermRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
            void setPhraseSlop(jint) const;
            void setTimeZone(const ::java::util::TimeZone &) const;
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
          extern PyType_Def PY_TYPE_DEF(QueryParserBase);
          extern PyTypeObject *PY_TYPE(QueryParserBase);

          class t_QueryParserBase {
          public:
            PyObject_HEAD
            QueryParserBase object;
            static PyObject *wrap_Object(const QueryParserBase&);
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
