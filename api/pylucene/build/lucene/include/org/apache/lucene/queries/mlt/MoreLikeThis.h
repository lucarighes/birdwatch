#ifndef org_apache_lucene_queries_mlt_MoreLikeThis_H
#define org_apache_lucene_queries_mlt_MoreLikeThis_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        namespace similarities {
          class TFIDFSimilarity;
        }
        class Query;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Reader;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace mlt {

          class MoreLikeThis : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9c5103ca988341a1,
              mid_init$_bd9ddaa4712d0bea,
              mid_describeParams_db9b55ba01e03e4b,
              mid_getAnalyzer_75a99b097bd64493,
              mid_getBoostFactor_58aec2b64dff50c8,
              mid_getFieldNames_9865da0b5ee490bc,
              mid_getMaxDocFreq_9972fcc56b44e79d,
              mid_getMaxNumTokensParsed_9972fcc56b44e79d,
              mid_getMaxQueryTerms_9972fcc56b44e79d,
              mid_getMaxWordLen_9972fcc56b44e79d,
              mid_getMinDocFreq_9972fcc56b44e79d,
              mid_getMinTermFreq_9972fcc56b44e79d,
              mid_getMinWordLen_9972fcc56b44e79d,
              mid_getSimilarity_023cdf2739df6bf9,
              mid_getStopWords_7dcf4034c6d1a92a,
              mid_isBoost_8454bd5aa23fd11e,
              mid_like_969d015037caecac,
              mid_like_83066fc446ef78b6,
              mid_like_5853f582e0e50664,
              mid_retrieveInterestingTerms_77baa612666bd4dc,
              mid_retrieveInterestingTerms_cd71343449839d8c,
              mid_setAnalyzer_651b708fb3f85e6e,
              mid_setBoost_9d72768e8fdce2b7,
              mid_setBoostFactor_8e1d952dd65cdc3a,
              mid_setFieldNames_2fc318b999a7aba3,
              mid_setMaxDocFreq_040c4cd0390c5aff,
              mid_setMaxDocFreqPct_040c4cd0390c5aff,
              mid_setMaxNumTokensParsed_040c4cd0390c5aff,
              mid_setMaxQueryTerms_040c4cd0390c5aff,
              mid_setMaxWordLen_040c4cd0390c5aff,
              mid_setMinDocFreq_040c4cd0390c5aff,
              mid_setMinTermFreq_040c4cd0390c5aff,
              mid_setMinWordLen_040c4cd0390c5aff,
              mid_setSimilarity_ab7a0bb0ad5a9ec3,
              mid_setStopWords_d5a4a8d4b806f0ba,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MoreLikeThis(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MoreLikeThis(const MoreLikeThis& obj) : ::java::lang::Object(obj) {}

            static jboolean DEFAULT_BOOST;
            static JArray< ::java::lang::String > *DEFAULT_FIELD_NAMES;
            static jint DEFAULT_MAX_DOC_FREQ;
            static jint DEFAULT_MAX_NUM_TOKENS_PARSED;
            static jint DEFAULT_MAX_QUERY_TERMS;
            static jint DEFAULT_MAX_WORD_LENGTH;
            static jint DEFAULT_MIN_DOC_FREQ;
            static jint DEFAULT_MIN_TERM_FREQ;
            static jint DEFAULT_MIN_WORD_LENGTH;
            static ::java::util::Set *DEFAULT_STOP_WORDS;

            MoreLikeThis(const ::org::apache::lucene::index::IndexReader &);
            MoreLikeThis(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::TFIDFSimilarity &);

            ::java::lang::String describeParams() const;
            ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
            jfloat getBoostFactor() const;
            JArray< ::java::lang::String > getFieldNames() const;
            jint getMaxDocFreq() const;
            jint getMaxNumTokensParsed() const;
            jint getMaxQueryTerms() const;
            jint getMaxWordLen() const;
            jint getMinDocFreq() const;
            jint getMinTermFreq() const;
            jint getMinWordLen() const;
            ::org::apache::lucene::search::similarities::TFIDFSimilarity getSimilarity() const;
            ::java::util::Set getStopWords() const;
            jboolean isBoost() const;
            ::org::apache::lucene::search::Query like(jint) const;
            ::org::apache::lucene::search::Query like(const ::java::util::Map &) const;
            ::org::apache::lucene::search::Query like(const ::java::lang::String &, const JArray< ::java::io::Reader > &) const;
            JArray< ::java::lang::String > retrieveInterestingTerms(jint) const;
            JArray< ::java::lang::String > retrieveInterestingTerms(const ::java::io::Reader &, const ::java::lang::String &) const;
            void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
            void setBoost(jboolean) const;
            void setBoostFactor(jfloat) const;
            void setFieldNames(const JArray< ::java::lang::String > &) const;
            void setMaxDocFreq(jint) const;
            void setMaxDocFreqPct(jint) const;
            void setMaxNumTokensParsed(jint) const;
            void setMaxQueryTerms(jint) const;
            void setMaxWordLen(jint) const;
            void setMinDocFreq(jint) const;
            void setMinTermFreq(jint) const;
            void setMinWordLen(jint) const;
            void setSimilarity(const ::org::apache::lucene::search::similarities::TFIDFSimilarity &) const;
            void setStopWords(const ::java::util::Set &) const;
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
      namespace queries {
        namespace mlt {
          extern PyType_Def PY_TYPE_DEF(MoreLikeThis);
          extern PyTypeObject *PY_TYPE(MoreLikeThis);

          class t_MoreLikeThis {
          public:
            PyObject_HEAD
            MoreLikeThis object;
            static PyObject *wrap_Object(const MoreLikeThis&);
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
