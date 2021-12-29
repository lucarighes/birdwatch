#ifndef org_apache_lucene_search_MultiCollectorManager$Collectors$LeafCollectors_H
#define org_apache_lucene_search_MultiCollectorManager$Collectors$LeafCollectors_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class LeafCollector;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MultiCollectorManager$Collectors$LeafCollectors : public ::java::lang::Object {
         public:
          enum {
            mid_collect_040c4cd0390c5aff,
            mid_setScorer_57a565cc0113e133,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiCollectorManager$Collectors$LeafCollectors(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiCollectorManager$Collectors$LeafCollectors(const MultiCollectorManager$Collectors$LeafCollectors& obj) : ::java::lang::Object(obj) {}

          void collect(jint) const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(MultiCollectorManager$Collectors$LeafCollectors);
        extern PyTypeObject *PY_TYPE(MultiCollectorManager$Collectors$LeafCollectors);

        class t_MultiCollectorManager$Collectors$LeafCollectors {
        public:
          PyObject_HEAD
          MultiCollectorManager$Collectors$LeafCollectors object;
          static PyObject *wrap_Object(const MultiCollectorManager$Collectors$LeafCollectors&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
