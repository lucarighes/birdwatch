#ifndef org_apache_lucene_search_TimeLimitingCollector_H
#define org_apache_lucene_search_TimeLimitingCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class LeafCollector;
        class TimeLimitingCollector$TimerThread;
        class Collector;
        class ScoreMode;
      }
      namespace util {
        class Counter;
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

        class TimeLimitingCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_42c98bb149e9f221,
            mid_getGlobalCounter_9a5efba60e88cd95,
            mid_getGlobalTimerThread_f81eef417012b634,
            mid_getLeafCollector_d5dbc8c30b21e920,
            mid_isGreedy_8454bd5aa23fd11e,
            mid_scoreMode_8a35254b82ee8276,
            mid_setBaseline_f2cc1bce94666404,
            mid_setBaseline_9c778c9bce6694df,
            mid_setCollector_a816cd51c84fa652,
            mid_setGreedy_9d72768e8fdce2b7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeLimitingCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeLimitingCollector(const TimeLimitingCollector& obj) : ::java::lang::Object(obj) {}

          TimeLimitingCollector(const ::org::apache::lucene::search::Collector &, const ::org::apache::lucene::util::Counter &, jlong);

          static ::org::apache::lucene::util::Counter getGlobalCounter();
          static ::org::apache::lucene::search::TimeLimitingCollector$TimerThread getGlobalTimerThread();
          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jboolean isGreedy() const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setBaseline() const;
          void setBaseline(jlong) const;
          void setCollector(const ::org::apache::lucene::search::Collector &) const;
          void setGreedy(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(TimeLimitingCollector);
        extern PyTypeObject *PY_TYPE(TimeLimitingCollector);

        class t_TimeLimitingCollector {
        public:
          PyObject_HEAD
          TimeLimitingCollector object;
          static PyObject *wrap_Object(const TimeLimitingCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
