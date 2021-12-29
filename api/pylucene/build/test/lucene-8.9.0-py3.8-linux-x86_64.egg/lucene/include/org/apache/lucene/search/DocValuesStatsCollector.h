#ifndef org_apache_lucene_search_DocValuesStatsCollector_H
#define org_apache_lucene_search_DocValuesStatsCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class DocValuesStats;
        class LeafCollector;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesStatsCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3a3bd2d6b67bb0d3,
            mid_getLeafCollector_d5dbc8c30b21e920,
            mid_scoreMode_8a35254b82ee8276,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesStatsCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesStatsCollector(const DocValuesStatsCollector& obj) : ::java::lang::Object(obj) {}

          DocValuesStatsCollector(const ::org::apache::lucene::search::DocValuesStats &);

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesStatsCollector);
        extern PyTypeObject *PY_TYPE(DocValuesStatsCollector);

        class t_DocValuesStatsCollector {
        public:
          PyObject_HEAD
          DocValuesStatsCollector object;
          static PyObject *wrap_Object(const DocValuesStatsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
