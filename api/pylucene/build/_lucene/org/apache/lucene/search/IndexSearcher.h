#ifndef org_apache_lucene_search_IndexSearcher_H
#define org_apache_lucene_search_IndexSearcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class TermStates;
        class Term;
        class StoredFieldVisitor;
        class IndexReaderContext;
      }
      namespace search {
        class QueryCache;
        class Query;
        class CollectionStatistics;
        class ScoreDoc;
        class Sort;
        class CollectorManager;
        class ScoreMode;
        namespace similarities {
          class Similarity;
        }
        class QueryCachingPolicy;
        class TopDocs;
        class IndexSearcher$LeafSlice;
        class TermStatistics;
        class Explanation;
        class Collector;
        class TopFieldDocs;
        class Weight;
      }
      namespace document {
        class Document;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Set;
    namespace concurrent {
      class Executor;
    }
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

        class IndexSearcher : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9c5103ca988341a1,
            mid_init$_436a8b1eb9db2e88,
            mid_init$_2fd94eadc6dc8fbc,
            mid_init$_3650edddec3c718a,
            mid_collectionStatistics_bd4a76137b8f58e2,
            mid_count_5621be3d00acce07,
            mid_createWeight_b7862260851a48fa,
            mid_doc_ee5990b4c3dd7dcd,
            mid_doc_8f45e7464506ed2f,
            mid_doc_e39e052dfc96e56b,
            mid_explain_3d9a5d3b05848187,
            mid_getDefaultQueryCache_0ccbd261f96a6228,
            mid_getDefaultQueryCachingPolicy_968f4e5ff0f2e957,
            mid_getDefaultSimilarity_35e3c46e8ea97897,
            mid_getExecutor_31f52c7375ac683e,
            mid_getIndexReader_3268165ce941bf52,
            mid_getQueryCache_0ccbd261f96a6228,
            mid_getQueryCachingPolicy_968f4e5ff0f2e957,
            mid_getSimilarity_35e3c46e8ea97897,
            mid_getSlices_5096dc88ccdf524f,
            mid_getTopReaderContext_f9451e8f83eb5b68,
            mid_rewrite_34fc2030a347a2fb,
            mid_search_8c364ba58149169f,
            mid_search_f6f7fcd6cb74198a,
            mid_search_2d3dee1628de3139,
            mid_search_9cb446108965ead4,
            mid_search_d5fab85428279a24,
            mid_searchAfter_a5524b0d4b549ece,
            mid_searchAfter_48d6b31afe16fb23,
            mid_searchAfter_874573edd9f8b597,
            mid_setDefaultQueryCache_46f26f9a9e59b47d,
            mid_setDefaultQueryCachingPolicy_02f5456ab9e69884,
            mid_setQueryCache_46f26f9a9e59b47d,
            mid_setQueryCachingPolicy_02f5456ab9e69884,
            mid_setSimilarity_b66836c611a69874,
            mid_termStatistics_b8d718c4f4fcd27a,
            mid_termStatistics_29949deb53274f10,
            mid_toString_db9b55ba01e03e4b,
            mid_explain_e89fd7fa3361a5ee,
            mid_slices_f5a412f2854c2a12,
            mid_search_9be054aab2583ea2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSearcher(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSearcher(const IndexSearcher& obj) : ::java::lang::Object(obj) {}

          IndexSearcher(const ::org::apache::lucene::index::IndexReader &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReaderContext &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReader &, const ::java::util::concurrent::Executor &);
          IndexSearcher(const ::org::apache::lucene::index::IndexReaderContext &, const ::java::util::concurrent::Executor &);

          ::org::apache::lucene::search::CollectionStatistics collectionStatistics(const ::java::lang::String &) const;
          jint count(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          ::org::apache::lucene::document::Document doc(jint) const;
          void doc(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::document::Document doc(jint, const ::java::util::Set &) const;
          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::Query &, jint) const;
          static ::org::apache::lucene::search::QueryCache getDefaultQueryCache();
          static ::org::apache::lucene::search::QueryCachingPolicy getDefaultQueryCachingPolicy();
          static ::org::apache::lucene::search::similarities::Similarity getDefaultSimilarity();
          ::java::util::concurrent::Executor getExecutor() const;
          ::org::apache::lucene::index::IndexReader getIndexReader() const;
          ::org::apache::lucene::search::QueryCache getQueryCache() const;
          ::org::apache::lucene::search::QueryCachingPolicy getQueryCachingPolicy() const;
          ::org::apache::lucene::search::similarities::Similarity getSimilarity() const;
          JArray< ::org::apache::lucene::search::IndexSearcher$LeafSlice > getSlices() const;
          ::org::apache::lucene::index::IndexReaderContext getTopReaderContext() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::search::TopDocs search(const ::org::apache::lucene::search::Query &, jint) const;
          void search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::Collector &) const;
          ::java::lang::Object search(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::CollectorManager &) const;
          ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint) const;
          ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &) const;
          ::org::apache::lucene::search::TopFieldDocs searchAfter(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean) const;
          static void setDefaultQueryCache(const ::org::apache::lucene::search::QueryCache &);
          static void setDefaultQueryCachingPolicy(const ::org::apache::lucene::search::QueryCachingPolicy &);
          void setQueryCache(const ::org::apache::lucene::search::QueryCache &) const;
          void setQueryCachingPolicy(const ::org::apache::lucene::search::QueryCachingPolicy &) const;
          void setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
          ::org::apache::lucene::search::TermStatistics termStatistics(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::TermStates &) const;
          ::org::apache::lucene::search::TermStatistics termStatistics(const ::org::apache::lucene::index::Term &, jint, jlong) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(IndexSearcher);
        extern PyTypeObject *PY_TYPE(IndexSearcher);

        class t_IndexSearcher {
        public:
          PyObject_HEAD
          IndexSearcher object;
          static PyObject *wrap_Object(const IndexSearcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
