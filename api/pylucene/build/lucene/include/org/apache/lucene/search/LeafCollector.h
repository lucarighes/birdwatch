#ifndef org_apache_lucene_search_LeafCollector_H
#define org_apache_lucene_search_LeafCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class DocIdSetIterator;
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

        class LeafCollector : public ::java::lang::Object {
         public:
          enum {
            mid_collect_040c4cd0390c5aff,
            mid_competitiveIterator_173d81d7b8f93882,
            mid_setScorer_57a565cc0113e133,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafCollector(const LeafCollector& obj) : ::java::lang::Object(obj) {}

          void collect(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator competitiveIterator() const;
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
        extern PyType_Def PY_TYPE_DEF(LeafCollector);
        extern PyTypeObject *PY_TYPE(LeafCollector);

        class t_LeafCollector {
        public:
          PyObject_HEAD
          LeafCollector object;
          static PyObject *wrap_Object(const LeafCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
