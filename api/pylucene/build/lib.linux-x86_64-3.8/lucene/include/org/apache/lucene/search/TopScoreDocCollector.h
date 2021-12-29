#ifndef org_apache_lucene_search_TopScoreDocCollector_H
#define org_apache_lucene_search_TopScoreDocCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CollectorManager;
        class TopDocs;
        class FieldDoc;
        class ScoreDoc;
        class TopScoreDocCollector;
        class ScoreMode;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopScoreDocCollector : public ::org::apache::lucene::search::TopDocsCollector {
         public:
          enum {
            mid_create_dce72f63411e9649,
            mid_create_508ead10943a9c2e,
            mid_createSharedManager_d2f30a27f63fe9bb,
            mid_scoreMode_8a35254b82ee8276,
            mid_updateGlobalMinCompetitiveScore_57a565cc0113e133,
            mid_updateMinCompetitiveScore_57a565cc0113e133,
            mid_newTopDocs_89238c61a7db05c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopScoreDocCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopScoreDocCollector(const TopScoreDocCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

          static TopScoreDocCollector create(jint, jint);
          static TopScoreDocCollector create(jint, const ::org::apache::lucene::search::ScoreDoc &, jint);
          static ::org::apache::lucene::search::CollectorManager createSharedManager(jint, const ::org::apache::lucene::search::FieldDoc &, jint);
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
        extern PyType_Def PY_TYPE_DEF(TopScoreDocCollector);
        extern PyTypeObject *PY_TYPE(TopScoreDocCollector);

        class t_TopScoreDocCollector {
        public:
          PyObject_HEAD
          TopScoreDocCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopScoreDocCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopScoreDocCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopScoreDocCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
