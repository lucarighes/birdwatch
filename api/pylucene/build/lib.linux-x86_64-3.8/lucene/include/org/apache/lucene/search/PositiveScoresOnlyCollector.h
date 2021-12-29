#ifndef org_apache_lucene_search_PositiveScoresOnlyCollector_H
#define org_apache_lucene_search_PositiveScoresOnlyCollector_H

#include "org/apache/lucene/search/FilterCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class LeafCollector;
        class Collector;
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

        class PositiveScoresOnlyCollector : public ::org::apache::lucene::search::FilterCollector {
         public:
          enum {
            mid_init$_a816cd51c84fa652,
            mid_getLeafCollector_d5dbc8c30b21e920,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PositiveScoresOnlyCollector(jobject obj) : ::org::apache::lucene::search::FilterCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PositiveScoresOnlyCollector(const PositiveScoresOnlyCollector& obj) : ::org::apache::lucene::search::FilterCollector(obj) {}

          PositiveScoresOnlyCollector(const ::org::apache::lucene::search::Collector &);

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(PositiveScoresOnlyCollector);
        extern PyTypeObject *PY_TYPE(PositiveScoresOnlyCollector);

        class t_PositiveScoresOnlyCollector {
        public:
          PyObject_HEAD
          PositiveScoresOnlyCollector object;
          static PyObject *wrap_Object(const PositiveScoresOnlyCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
