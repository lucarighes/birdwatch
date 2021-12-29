#ifndef org_apache_lucene_facet_FacetsCollector_H
#define org_apache_lucene_facet_FacetsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class Scorable;
        class Sort;
        class Collector;
        class TopDocs;
        class Query;
        class TopFieldDocs;
        class ScoreDoc;
        class ScoreMode;
      }
      namespace facet {
        class FacetsCollector$MatchingDocs;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsCollector : public ::org::apache::lucene::search::SimpleCollector {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_9d72768e8fdce2b7,
            mid_collect_040c4cd0390c5aff,
            mid_getKeepScores_8454bd5aa23fd11e,
            mid_getMatchingDocs_49ec78390f08338a,
            mid_scoreMode_8a35254b82ee8276,
            mid_search_6b46ba651c1a9ba5,
            mid_search_f0ba998406c03a71,
            mid_search_518228ac10df3047,
            mid_searchAfter_1e43a62344b61bb5,
            mid_searchAfter_6d1e24e3174f1100,
            mid_searchAfter_00a809821dadd39a,
            mid_setScorer_57a565cc0113e133,
            mid_doSetNextReader_8747e0e89febf88d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsCollector(const FacetsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

          FacetsCollector();
          FacetsCollector(jboolean);

          void collect(jint) const;
          jboolean getKeepScores() const;
          ::java::util::List getMatchingDocs() const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          static ::org::apache::lucene::search::TopDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopFieldDocs search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Collector &);
          static ::org::apache::lucene::search::TopDocs searchAfter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::search::Query &, jint, const ::org::apache::lucene::search::Sort &, jboolean, const ::org::apache::lucene::search::Collector &);
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsCollector);
        extern PyTypeObject *PY_TYPE(FacetsCollector);

        class t_FacetsCollector {
        public:
          PyObject_HEAD
          FacetsCollector object;
          static PyObject *wrap_Object(const FacetsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
