#ifndef org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H
#define org_apache_lucene_queryparser_flexible_standard_CommonQueryParserConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class DateTools$Resolution;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
        namespace flexible {
          namespace standard {

            class CommonQueryParserConfiguration : public ::java::lang::Object {
             public:
              enum {
                mid_getAllowLeadingWildcard_8454bd5aa23fd11e,
                mid_getAnalyzer_75a99b097bd64493,
                mid_getEnablePositionIncrements_8454bd5aa23fd11e,
                mid_getFuzzyMinSim_58aec2b64dff50c8,
                mid_getFuzzyPrefixLength_9972fcc56b44e79d,
                mid_getLocale_bd9770023d5e622d,
                mid_getMultiTermRewriteMethod_aed18a8b23332eb7,
                mid_getPhraseSlop_9972fcc56b44e79d,
                mid_getTimeZone_a00e8b2cc21b09d1,
                mid_setAllowLeadingWildcard_9d72768e8fdce2b7,
                mid_setDateResolution_51afa6f891f6b9d8,
                mid_setEnablePositionIncrements_9d72768e8fdce2b7,
                mid_setFuzzyMinSim_8e1d952dd65cdc3a,
                mid_setFuzzyPrefixLength_040c4cd0390c5aff,
                mid_setLocale_8b005052a37adc8a,
                mid_setMultiTermRewriteMethod_4bd3a81cb6936220,
                mid_setPhraseSlop_040c4cd0390c5aff,
                mid_setTimeZone_62cba443b119095c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CommonQueryParserConfiguration(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CommonQueryParserConfiguration(const CommonQueryParserConfiguration& obj) : ::java::lang::Object(obj) {}

              jboolean getAllowLeadingWildcard() const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
              jboolean getEnablePositionIncrements() const;
              jfloat getFuzzyMinSim() const;
              jint getFuzzyPrefixLength() const;
              ::java::util::Locale getLocale() const;
              ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getMultiTermRewriteMethod() const;
              jint getPhraseSlop() const;
              ::java::util::TimeZone getTimeZone() const;
              void setAllowLeadingWildcard(jboolean) const;
              void setDateResolution(const ::org::apache::lucene::document::DateTools$Resolution &) const;
              void setEnablePositionIncrements(jboolean) const;
              void setFuzzyMinSim(jfloat) const;
              void setFuzzyPrefixLength(jint) const;
              void setLocale(const ::java::util::Locale &) const;
              void setMultiTermRewriteMethod(const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &) const;
              void setPhraseSlop(jint) const;
              void setTimeZone(const ::java::util::TimeZone &) const;
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
            extern PyType_Def PY_TYPE_DEF(CommonQueryParserConfiguration);
            extern PyTypeObject *PY_TYPE(CommonQueryParserConfiguration);

            class t_CommonQueryParserConfiguration {
            public:
              PyObject_HEAD
              CommonQueryParserConfiguration object;
              static PyObject *wrap_Object(const CommonQueryParserConfiguration&);
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
