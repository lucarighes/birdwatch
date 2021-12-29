#ifndef org_apache_lucene_search_highlight_QueryScorer_H
#define org_apache_lucene_search_highlight_QueryScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace highlight {
          class Scorer;
          class TextFragment;
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
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class QueryScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_35bdbb282e32f43f,
              mid_init$_ede25bb9d48237ac,
              mid_init$_e3c97842bfe33454,
              mid_init$_67d9978716244d9f,
              mid_init$_c5ae5fd35d2e5a2f,
              mid_init$_4c52c3898f0a83a4,
              mid_getFragmentScore_58aec2b64dff50c8,
              mid_getMaxTermWeight_58aec2b64dff50c8,
              mid_getTokenScore_58aec2b64dff50c8,
              mid_getWeightedSpanTerm_7ce6a30676779b3c,
              mid_init_6de1e28d9d10cd9e,
              mid_isExpandMultiTermQuery_8454bd5aa23fd11e,
              mid_isUsePayloads_8454bd5aa23fd11e,
              mid_setExpandMultiTermQuery_9d72768e8fdce2b7,
              mid_setMaxDocCharsToAnalyze_040c4cd0390c5aff,
              mid_setUsePayloads_9d72768e8fdce2b7,
              mid_setWrapIfNotCachingTokenFilter_9d72768e8fdce2b7,
              mid_startFragment_786a99056c1d5c74,
              mid_newTermExtractor_48cd2e241cf5cbe2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryScorer(const QueryScorer& obj) : ::java::lang::Object(obj) {}

            QueryScorer(const JArray< ::org::apache::lucene::search::highlight::WeightedSpanTerm > &);
            QueryScorer(const ::org::apache::lucene::search::Query &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &);

            jfloat getFragmentScore() const;
            jfloat getMaxTermWeight() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::search::highlight::WeightedSpanTerm getWeightedSpanTerm(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            jboolean isExpandMultiTermQuery() const;
            jboolean isUsePayloads() const;
            void setExpandMultiTermQuery(jboolean) const;
            void setMaxDocCharsToAnalyze(jint) const;
            void setUsePayloads(jboolean) const;
            void setWrapIfNotCachingTokenFilter(jboolean) const;
            void startFragment(const ::org::apache::lucene::search::highlight::TextFragment &) const;
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
          extern PyType_Def PY_TYPE_DEF(QueryScorer);
          extern PyTypeObject *PY_TYPE(QueryScorer);

          class t_QueryScorer {
          public:
            PyObject_HEAD
            QueryScorer object;
            static PyObject *wrap_Object(const QueryScorer&);
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
