#ifndef org_apache_lucene_search_MultiCollector_H
#define org_apache_lucene_search_MultiCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
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
    class Iterable;
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

        class MultiCollector : public ::java::lang::Object {
         public:
          enum {
            mid_getLeafCollector_d5dbc8c30b21e920,
            mid_scoreMode_8a35254b82ee8276,
            mid_wrap_4d7c714483acc201,
            mid_wrap_1729841421ec8df3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiCollector(const MultiCollector& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          static ::org::apache::lucene::search::Collector wrap(const JArray< ::org::apache::lucene::search::Collector > &);
          static ::org::apache::lucene::search::Collector wrap(const ::java::lang::Iterable &);
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
        extern PyType_Def PY_TYPE_DEF(MultiCollector);
        extern PyTypeObject *PY_TYPE(MultiCollector);

        class t_MultiCollector {
        public:
          PyObject_HEAD
          MultiCollector object;
          static PyObject *wrap_Object(const MultiCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
