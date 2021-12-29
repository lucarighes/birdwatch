#ifndef org_apache_lucene_search_TopFieldCollector_H
#define org_apache_lucene_search_TopFieldCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopFieldCollector;
        class IndexSearcher;
        class FieldDoc;
        class Sort;
        class CollectorManager;
        class Query;
        class TopFieldDocs;
        class ScoreDoc;
        class FieldValueHitQueue$Entry;
        class ScoreMode;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopFieldCollector : public ::org::apache::lucene::search::TopDocsCollector {
         public:
          enum {
            mid_create_b52182028f19d2aa,
            mid_create_f5f087340e149494,
            mid_createSharedManager_132fdc21c4e0fa12,
            mid_isEarlyTerminated_8454bd5aa23fd11e,
            mid_populateScores_e5ff1b93922d2e26,
            mid_scoreMode_8a35254b82ee8276,
            mid_topDocs_dd7f87e164984a36,
            mid_updateGlobalMinCompetitiveScore_57a565cc0113e133,
            mid_updateMinCompetitiveScore_57a565cc0113e133,
            mid_populateResults_22b73975846c3758,
            mid_newTopDocs_89238c61a7db05c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopFieldCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopFieldCollector(const TopFieldCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

          static TopFieldCollector create(const ::org::apache::lucene::search::Sort &, jint, jint);
          static TopFieldCollector create(const ::org::apache::lucene::search::Sort &, jint, const ::org::apache::lucene::search::FieldDoc &, jint);
          static ::org::apache::lucene::search::CollectorManager createSharedManager(const ::org::apache::lucene::search::Sort &, jint, const ::org::apache::lucene::search::FieldDoc &, jint);
          jboolean isEarlyTerminated() const;
          static void populateScores(const JArray< ::org::apache::lucene::search::ScoreDoc > &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &);
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          ::org::apache::lucene::search::TopFieldDocs topDocs() const;
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
        extern PyType_Def PY_TYPE_DEF(TopFieldCollector);
        extern PyTypeObject *PY_TYPE(TopFieldCollector);

        class t_TopFieldCollector {
        public:
          PyObject_HEAD
          TopFieldCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopFieldCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopFieldCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopFieldCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
