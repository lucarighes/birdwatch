#ifndef org_apache_lucene_search_TimeLimitingCollector$TimerThread_H
#define org_apache_lucene_search_TimeLimitingCollector$TimerThread_H

#include "java/lang/Thread.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TimeLimitingCollector$TimerThread : public ::java::lang::Thread {
         public:
          enum {
            mid_init$_302fe14a8fa069e1,
            mid_init$_c5c6d2a1f0c3c8ad,
            mid_getMilliseconds_2e5ae9edcb9b072f,
            mid_getResolution_2e5ae9edcb9b072f,
            mid_run_f2cc1bce94666404,
            mid_setResolution_9c778c9bce6694df,
            mid_stopTimer_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeLimitingCollector$TimerThread(jobject obj) : ::java::lang::Thread(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeLimitingCollector$TimerThread(const TimeLimitingCollector$TimerThread& obj) : ::java::lang::Thread(obj) {}

          static jint DEFAULT_RESOLUTION;
          static ::java::lang::String *THREAD_NAME;

          TimeLimitingCollector$TimerThread(const ::org::apache::lucene::util::Counter &);
          TimeLimitingCollector$TimerThread(jlong, const ::org::apache::lucene::util::Counter &);

          jlong getMilliseconds() const;
          jlong getResolution() const;
          void run() const;
          void setResolution(jlong) const;
          void stopTimer() const;
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
        extern PyType_Def PY_TYPE_DEF(TimeLimitingCollector$TimerThread);
        extern PyTypeObject *PY_TYPE(TimeLimitingCollector$TimerThread);

        class t_TimeLimitingCollector$TimerThread {
        public:
          PyObject_HEAD
          TimeLimitingCollector$TimerThread object;
          static PyObject *wrap_Object(const TimeLimitingCollector$TimerThread&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
