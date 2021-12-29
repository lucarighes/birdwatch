#ifndef org_apache_lucene_search_MultiCollectorManager$Collectors_H
#define org_apache_lucene_search_MultiCollectorManager$Collectors_H

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

        class MultiCollectorManager$Collectors : public ::java::lang::Object {
         public:
          enum {
            mid_getLeafCollector_d5dbc8c30b21e920,
            mid_scoreMode_8a35254b82ee8276,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiCollectorManager$Collectors(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiCollectorManager$Collectors(const MultiCollectorManager$Collectors& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(MultiCollectorManager$Collectors);
        extern PyTypeObject *PY_TYPE(MultiCollectorManager$Collectors);

        class t_MultiCollectorManager$Collectors {
        public:
          PyObject_HEAD
          MultiCollectorManager$Collectors object;
          static PyObject *wrap_Object(const MultiCollectorManager$Collectors&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
