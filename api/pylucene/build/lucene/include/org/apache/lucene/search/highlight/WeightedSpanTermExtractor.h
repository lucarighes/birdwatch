#ifndef org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H
#define org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace highlight {
          class WeightedSpanTerm;
        }
        class Query;
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class WeightedSpanTermExtractor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_9fd2eb66a64e6f0f,
              mid_getExpandMultiTermQuery_8454bd5aa23fd11e,
              mid_getTokenStream_53a594dacf37f73d,
              mid_getWeightedSpanTerms_f9503d31d7a9e97f,
              mid_getWeightedSpanTerms_af15e3109c3c9b91,
              mid_getWeightedSpanTermsWithScores_82ac601150f7f1bc,
              mid_isCachedTokenStream_8454bd5aa23fd11e,
              mid_isUsePayloads_8454bd5aa23fd11e,
              mid_setExpandMultiTermQuery_9d72768e8fdce2b7,
              mid_setUsePayloads_9d72768e8fdce2b7,
              mid_setWrapIfNotCachingTokenFilter_9d72768e8fdce2b7,
              mid_isQueryUnsupported_a895c7f53785ebe6,
              mid_extractWeightedTerms_598e5dfa39a5661f,
              mid_extract_7d69c9d67bb3f6f1,
              mid_extractWeightedSpanTerms_866cbf06e72a1d01,
              mid_mustRewriteQuery_4fe20db295dace53,
              mid_collectSpanQueryFields_01ed0dbd15b78229,
              mid_extractUnknownQuery_66cecb3d21bca6df,
              mid_fieldNameComparator_145b2d0af0c06b93,
              mid_getLeafContext_fb87af9aadb3c2c5,
              mid_setMaxDocCharsToAnalyze_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedSpanTermExtractor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeightedSpanTermExtractor(const WeightedSpanTermExtractor& obj) : ::java::lang::Object(obj) {}

            WeightedSpanTermExtractor();
            WeightedSpanTermExtractor(const ::java::lang::String &);

            jboolean getExpandMultiTermQuery() const;
            ::org::apache::lucene::analysis::TokenStream getTokenStream() const;
            ::java::util::Map getWeightedSpanTerms(const ::org::apache::lucene::search::Query &, jfloat, const ::org::apache::lucene::analysis::TokenStream &) const;
            ::java::util::Map getWeightedSpanTerms(const ::org::apache::lucene::search::Query &, jfloat, const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &) const;
            ::java::util::Map getWeightedSpanTermsWithScores(const ::org::apache::lucene::search::Query &, jfloat, const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &) const;
            jboolean isCachedTokenStream() const;
            jboolean isUsePayloads() const;
            void setExpandMultiTermQuery(jboolean) const;
            void setUsePayloads(jboolean) const;
            void setWrapIfNotCachingTokenFilter(jboolean) const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(WeightedSpanTermExtractor);
          extern PyTypeObject *PY_TYPE(WeightedSpanTermExtractor);

          class t_WeightedSpanTermExtractor {
          public:
            PyObject_HEAD
            WeightedSpanTermExtractor object;
            static PyObject *wrap_Object(const WeightedSpanTermExtractor&);
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
