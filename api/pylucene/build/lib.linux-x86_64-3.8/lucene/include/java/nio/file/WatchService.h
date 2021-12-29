#ifndef java_nio_file_WatchService_H
#define java_nio_file_WatchService_H

#include "java/io/Closeable.h"

namespace java {
  namespace lang {
    class Class;
    class InterruptedException;
  }
  namespace nio {
    namespace file {
      class WatchKey;
    }
  }
  namespace io {
    class IOException;
  }
  namespace util {
    namespace concurrent {
      class TimeUnit;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class WatchService : public ::java::io::Closeable {
       public:
        enum {
          mid_close_f2cc1bce94666404,
          mid_poll_62bbb59ce8b4d37f,
          mid_poll_99c466854a536369,
          mid_take_62bbb59ce8b4d37f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WatchService(jobject obj) : ::java::io::Closeable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WatchService(const WatchService& obj) : ::java::io::Closeable(obj) {}

        void close() const;
        ::java::nio::file::WatchKey poll() const;
        ::java::nio::file::WatchKey poll(jlong, const ::java::util::concurrent::TimeUnit &) const;
        ::java::nio::file::WatchKey take() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(WatchService);
      extern PyTypeObject *PY_TYPE(WatchService);

      class t_WatchService {
      public:
        PyObject_HEAD
        WatchService object;
        static PyObject *wrap_Object(const WatchService&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
