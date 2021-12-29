#ifndef org_apache_lucene_facet_DrillSideways_H
#define org_apache_lucene_facet_DrillSideways_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class DrillSideways$ConcurrentDrillSidewaysResult;
        class DrillSideways$DrillSidewaysResult;
        class FacetsConfig;
        namespace taxonomy {
          class TaxonomyReader;
        }
        class DrillDownQuery;
        namespace sortedset {
          class SortedSetDocValuesReaderState;
        }
      }
      namespace search {
        class IndexSearcher;
        class FieldDoc;
        class Sort;
        class CollectorManager;
        class Query;
        class Collector;
        class ScoreDoc;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
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
      namespace facet {

        class DrillSideways : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7c7f02a1a5cd6e57,
            mid_init$_fdae4deb7c31098c,
            mid_init$_b8faab75c840f8ef,
            mid_init$_b19060b30c285464,
            mid_search_0e2c19f7aa8393d2,
            mid_search_f8cf1e9973bd9fa7,
            mid_search_018032d1259857f5,
            mid_search_5853b3b847f2cf95,
            mid_search_73997db8a6a1bce4,
            mid_scoreSubDocsAtOnce_8454bd5aa23fd11e,
            mid_buildFacetsResult_0d859c906444c15b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillSideways(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DrillSideways(const DrillSideways& obj) : ::java::lang::Object(obj) {}

          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);
          DrillSideways(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::java::util::concurrent::ExecutorService &);

          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, jint) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::Collector &) const;
          ::org::apache::lucene::facet::DrillSideways$ConcurrentDrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::CollectorManager &) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::search::ScoreDoc &, const ::org::apache::lucene::facet::DrillDownQuery &, jint) const;
          ::org::apache::lucene::facet::DrillSideways$DrillSidewaysResult search(const ::org::apache::lucene::facet::DrillDownQuery &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::FieldDoc &, jint, const ::org::apache::lucene::search::Sort &, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(DrillSideways);
        extern PyTypeObject *PY_TYPE(DrillSideways);

        class t_DrillSideways {
        public:
          PyObject_HEAD
          DrillSideways object;
          static PyObject *wrap_Object(const DrillSideways&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
