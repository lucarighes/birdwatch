#ifndef org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H
#define org_apache_lucene_queryparser_flexible_standard_StandardQueryParser_H

#include "org/apache/lucene/queryparser/flexible/core/QueryParserHelper.h"

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
        namespace flexible {
          namespace core {
            class QueryNodeException;
          }
          namespace standard {
            namespace config {
              class StandardQueryConfigHandler$Operator;
              class PointsConfig;
            }
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
  namespace util {
    class Map;
    class Locale;
    class TimeZone;
  }
  namespace lang {
    class Float;
    class Class;
    class CharSequence;
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

            class StandardQueryParser : public ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_init$_651b708fb3f85e6e,
                mid_getAllowLeadingWildcard_8454bd5aa23fd11e,
                mid_getAnalyzer_75a99b097bd64493,
                mid_getDateResolution_1778a3bc39ff9c3b,
                mid_getDateResolutionMap_1c3426541413a55d,
                mid_getDefaultOperator_77b325ea7d4ff3dd,
                mid_getEnablePositionIncrements_8454bd5aa23fd11e,
                mid_getFieldsBoost_1c3426541413a55d,
                mid_getFuzzyMinSim_58aec2b64dff50c8,
                mid_getFuzzyPrefixLength_9972fcc56b44e79d,
                mid_getLocale_bd9770023d5e622d,
                mid_getMultiFields_b3d47ed6e78728f2,
                mid_getMultiTermRewriteMethod_aed18a8b23332eb7,
                mid_getPhraseSlop_9972fcc56b44e79d,
                mid_getPointsConfigMap_1c3426541413a55d,
                mid_getTimeZone_a00e8b2cc21b09d1,
                mid_parse_e08cfaa30c1cfbe9,
                mid_setAllowLeadingWildcard_9d72768e8fdce2b7,
                mid_setAnalyzer_651b708fb3f85e6e,
                mid_setDateResolution_51afa6f891f6b9d8,
                mid_setDateResolutionMap_408bd889ee3beae5,
                mid_setDefaultOperator_0013096f92c97e2f,
                mid_setEnablePositionIncrements_9d72768e8fdce2b7,
                mid_setFieldsBoost_408bd889ee3beae5,
                mid_setFuzzyMinSim_8e1d952dd65cdc3a,
                mid_setFuzzyPrefixLength_040c4cd0390c5aff,
                mid_setLocale_8b005052a37adc8a,
                mid_setMultiFields_a9238846954db8e0,
                mid_setMultiTermRewriteMethod_4bd3a81cb6936220,
                mid_setPhraseSlop_040c4cd0390c5aff,
                mid_setPointsConfigMap_408bd889ee3beae5,
                mid_setTimeZone_62cba443b119095c,
                mid_toString_db9b55ba01e03e4b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StandardQueryParser(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              StandardQueryParser(const StandardQueryParser& obj) : ::org::apache::lucene::queryparser::flexible::core::QueryParserHelper(obj) {}

              StandardQueryParser();
              StandardQueryParser(const ::org::apache::lucene::analysis::Analyzer &);

              jboolean getAllowLeadingWildcard() const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              ::org::apache::lucene::document::DateTools$Resolution getDateResolution() const;
              ::java::util::Map getDateResolutionMap() const;
              ::org::apache::lucene::queryparser::flexible::standard::config::StandardQueryConfigHandler$Operator getDefaultOperator() const;
              jboolean getEnablePositionIncrements() const;
              ::java::util::Map getFieldsBoost() const;
              jfloat getFuzzyMinSim() const;
              jint getFuzzyPrefixLength() const;
              ::java::util::Locale getLocale() const;
              JArray< ::java::lang::CharSequence > getMultiFields() const;
              ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
              jint getPhraseSlop() const;
              ::java::util::Map getPointsConfigMap() const;
              ::java::util::TimeZone getTimeZone() const;
              ::org::apache::lucene::search::Query parse(const ::java::lang::String &, const ::java::lang::String &) const;
              void setAllowLeadingWildcard(jboolean) const;
              void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
              void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
              void setDateResolutionMap(const ::java::util::Map &) const;
              void setDefaultOperator(const ::org::apache::lucene::queryparser::flexible::standard::config::StandardQueryConfigHandler$Operator &) const;
              void setEnablePositionIncrements(jboolean) const;
              void setFieldsBoost(const ::java::util::Map &) const;
              void setFuzzyMinSim(jfloat) const;
              void setFuzzyPrefixLength(jint) const;
              void setLocale(const ::java::util::Locale &) const;
              void setMultiFields(const JArray< ::java::lang::CharSequence > &) const;
              void setMultiTermRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
              void setPhraseSlop(jint) const;
              void setPointsConfigMap(const ::java::util::Map &) const;
              void setTimeZone(const ::java::util::TimeZone &) const;
              ::java::lang::String toString() const;
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
        namespace flexible {
          namespace standard {
            extern PyType_Def PY_TYPE_DEF(StandardQueryParser);
            extern PyTypeObject *PY_TYPE(StandardQueryParser);

            class t_StandardQueryParser {
            public:
              PyObject_HEAD
              StandardQueryParser object;
              static PyObject *wrap_Object(const StandardQueryParser&);
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
