#ifndef org_apache_lucene_search_LargeNumHitsTopDocsCollector_H
#define org_apache_lucene_search_LargeNumHitsTopDocsCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class LeafCollector;
        class TopDocs;
        class Collector;
        class ScoreMode;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LargeNumHitsTopDocsCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_getLeafCollector_d5dbc8c30b21e920,
            mid_scoreMode_8a35254b82ee8276,
            mid_topDocs_45154c559b39de4e,
            mid_topDocs_a28828dc6b19e268,
            mid_populateResults_22b73975846c3758,
            mid_newTopDocs_192d9e6ab68e411e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LargeNumHitsTopDocsCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LargeNumHitsTopDocsCollector(const LargeNumHitsTopDocsCollector& obj) : ::java::lang::Object(obj) {}

          LargeNumHitsTopDocsCollector(jint);

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          ::org::apache::lucene::search::TopDocs topDocs() const;
          ::org::apache::lucene::search::TopDocs topDocs(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(LargeNumHitsTopDocsCollector);
        extern PyTypeObject *PY_TYPE(LargeNumHitsTopDocsCollector);

        class t_LargeNumHitsTopDocsCollector {
        public:
          PyObject_HEAD
          LargeNumHitsTopDocsCollector object;
          static PyObject *wrap_Object(const LargeNumHitsTopDocsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
