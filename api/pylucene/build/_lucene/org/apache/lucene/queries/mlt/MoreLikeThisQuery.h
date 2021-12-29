#ifndef org_apache_lucene_queries_mlt_MoreLikeThisQuery_H
#define org_apache_lucene_queries_mlt_MoreLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

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
        class QueryVisitor;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace mlt {

          class MoreLikeThisQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_75b2fb924127447b,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getAnalyzer_75a99b097bd64493,
              mid_getLikeText_db9b55ba01e03e4b,
              mid_getMaxQueryTerms_9972fcc56b44e79d,
              mid_getMinDocFreq_9972fcc56b44e79d,
              mid_getMinTermFrequency_9972fcc56b44e79d,
              mid_getMoreLikeFields_9865da0b5ee490bc,
              mid_getPercentTermsToMatch_58aec2b64dff50c8,
              mid_getStopWords_7dcf4034c6d1a92a,
              mid_hashCode_9972fcc56b44e79d,
              mid_rewrite_bb52f19a8254555c,
              mid_setAnalyzer_651b708fb3f85e6e,
              mid_setLikeText_9fd2eb66a64e6f0f,
              mid_setMaxQueryTerms_040c4cd0390c5aff,
              mid_setMinDocFreq_040c4cd0390c5aff,
              mid_setMinTermFrequency_040c4cd0390c5aff,
              mid_setMoreLikeFields_2fc318b999a7aba3,
              mid_setPercentTermsToMatch_8e1d952dd65cdc3a,
              mid_setStopWords_d5a4a8d4b806f0ba,
              mid_toString_9bfa75c9f141b67f,
              mid_visit_f9e6207006c5b6c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MoreLikeThisQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MoreLikeThisQuery(const MoreLikeThisQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            MoreLikeThisQuery(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
            ::java::lang::String getLikeText() const;
            jint getMaxQueryTerms() const;
            jint getMinDocFreq() const;
            jint getMinTermFrequency() const;
            JArray< ::java::lang::String > getMoreLikeFields() const;
            jfloat getPercentTermsToMatch() const;
            ::java::util::Set getStopWords() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
            void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
            void setLikeText(const ::java::lang::String &) const;
            void setMaxQueryTerms(jint) const;
            void setMinDocFreq(jint) const;
            void setMinTermFrequency(jint) const;
            void setMoreLikeFields(const JArray< ::java::lang::String > &) const;
            void setPercentTermsToMatch(jfloat) const;
            void setStopWords(const ::java::util::Set &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
          extern PyType_Def PY_TYPE_DEF(MoreLikeThisQuery);
          extern PyTypeObject *PY_TYPE(MoreLikeThisQuery);

          class t_MoreLikeThisQuery {
          public:
            PyObject_HEAD
            MoreLikeThisQuery object;
            static PyObject *wrap_Object(const MoreLikeThisQuery&);
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
