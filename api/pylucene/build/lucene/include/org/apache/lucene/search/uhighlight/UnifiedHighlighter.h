#ifndef org_apache_lucene_search_uhighlight_UnifiedHighlighter_H
#define org_apache_lucene_search_uhighlight_UnifiedHighlighter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    namespace function {
      class Predicate;
      class Supplier;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace text {
    class BreakIterator;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        namespace uhighlight {
          class PassageFormatter;
          class PassageScorer;
        }
        class Query;
        class TopDocs;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class UnifiedHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_81f6fb272181ea72,
              mid_getCacheFieldValCharsThreshold_9972fcc56b44e79d,
              mid_getIndexAnalyzer_75a99b097bd64493,
              mid_getIndexSearcher_7ca5beb9bbb661b0,
              mid_getMaxLength_9972fcc56b44e79d,
              mid_highlight_6bd14f6bda1494e3,
              mid_highlight_0ec5884c6beb3414,
              mid_highlightFields_20cbddb8bf01ab13,
              mid_highlightFields_59d33a15610cf080,
              mid_highlightFields_62e611f688b901d4,
              mid_highlightWithoutSearcher_c87c1c019e371dfd,
              mid_setBreakIterator_265134f84a6cf8b4,
              mid_setCacheFieldValCharsThreshold_040c4cd0390c5aff,
              mid_setFieldMatcher_73508244675106b3,
              mid_setFormatter_bc06c42b01a35bad,
              mid_setHandleMultiTermQuery_9d72768e8fdce2b7,
              mid_setHighlightPhrasesStrictly_9d72768e8fdce2b7,
              mid_setMaxLength_040c4cd0390c5aff,
              mid_setMaxNoHighlightPassages_040c4cd0390c5aff,
              mid_setScorer_8ddc98fc773b0cd1,
              mid_extractTerms_d340999c07f4ea79,
              mid_getScorer_49ee7ab054942154,
              mid_getFieldInfo_07fc3b437c3bb7b3,
              mid_getAutomata_838245e257d1f6af,
              mid_getFormatter_c4f262ac4042760f,
              mid_getPhraseHelper_99cb52db65ee3cc3,
              mid_getOffsetSource_4e354603e57d21a7,
              mid_getFieldMatcher_e2b780f53e9b5377,
              mid_hasUnrecognizedQuery_fa91bca9102830ef,
              mid_highlightFieldsAsObjects_59d33a15610cf080,
              mid_getFieldHighlighter_b6bb10c4e32feedc,
              mid_getHighlightComponents_bb8ca0b3946e98fd,
              mid_filterExtractedTerms_b2f698df792db6f2,
              mid_getOptimizedOffsetSource_162afde29b2c3c38,
              mid_getOffsetStrategy_0abd4d4103c42a31,
              mid_requiresRewrite_518701d8823ff693,
              mid_preSpanQueryRewrite_9f53d4df54581388,
              mid_loadFieldValues_2c0d72f11bab5690,
              mid_newLimitedStoredFieldsVisitor_589999ffb1b30f65,
              mid_shouldHandleMultiTermQuery_145b2d0af0c06b93,
              mid_shouldHighlightPhrasesStrictly_145b2d0af0c06b93,
              mid_shouldPreferPassageRelevancyOverSpeed_145b2d0af0c06b93,
              mid_getBreakIterator_e41a8764f71d3100,
              mid_getMaxNoHighlightPassages_a5a7d1128e9e2bb7,
              mid_getFlags_010d311a5fdbda7b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnifiedHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnifiedHighlighter(const UnifiedHighlighter& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_CACHE_CHARS_THRESHOLD;
            static jint DEFAULT_MAX_LENGTH;

            UnifiedHighlighter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::analysis::Analyzer &);

            jint getCacheFieldValCharsThreshold() const;
            ::org::apache::lucene::analysis::Analyzer getIndexAnalyzer() const;
            ::org::apache::lucene::search::IndexSearcher getIndexSearcher() const;
            jint getMaxLength() const;
            JArray< ::java::lang::String > highlight(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &) const;
            JArray< ::java::lang::String > highlight(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &, jint) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const JArray< jint > &, const JArray< jint > &) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &, const JArray< jint > &) const;
            ::java::lang::Object highlightWithoutSearcher(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, jint) const;
            void setBreakIterator(const ::java::util::function::Supplier &) const;
            void setCacheFieldValCharsThreshold(jint) const;
            void setFieldMatcher(const ::java::util::function::Predicate &) const;
            void setFormatter(const ::org::apache::lucene::search::uhighlight::PassageFormatter &) const;
            void setHandleMultiTermQuery(jboolean) const;
            void setHighlightPhrasesStrictly(jboolean) const;
            void setMaxLength(jint) const;
            void setMaxNoHighlightPassages(jint) const;
            void setScorer(const ::org::apache::lucene::search::uhighlight::PassageScorer &) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(UnifiedHighlighter);
          extern PyTypeObject *PY_TYPE(UnifiedHighlighter);

          class t_UnifiedHighlighter {
          public:
            PyObject_HEAD
            UnifiedHighlighter object;
            static PyObject *wrap_Object(const UnifiedHighlighter&);
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
