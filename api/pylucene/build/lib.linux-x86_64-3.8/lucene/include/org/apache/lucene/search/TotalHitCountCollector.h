#ifndef org_apache_lucene_search_TotalHitCountCollector_H
#define org_apache_lucene_search_TotalHitCountCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
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

        class TotalHitCountCollector : public ::org::apache::lucene::search::SimpleCollector {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_collect_040c4cd0390c5aff,
            mid_getTotalHits_9972fcc56b44e79d,
            mid_scoreMode_8a35254b82ee8276,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHitCountCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TotalHitCountCollector(const TotalHitCountCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

          TotalHitCountCollector();

          void collect(jint) const;
          jint getTotalHits() const;
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
        extern PyType_Def PY_TYPE_DEF(TotalHitCountCollector);
        extern PyTypeObject *PY_TYPE(TotalHitCountCollector);

        class t_TotalHitCountCollector {
        public:
          PyObject_HEAD
          TotalHitCountCollector object;
          static PyObject *wrap_Object(const TotalHitCountCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
