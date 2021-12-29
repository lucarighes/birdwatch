#ifndef java_nio_file_PathMatcher_H
#define java_nio_file_PathMatcher_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class PathMatcher : public ::java::lang::Object {
       public:
        enum {
          mid_matches_64eb4236a3fd11dc,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PathMatcher(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PathMatcher(const PathMatcher& obj) : ::java::lang::Object(obj) {}

        jboolean matches(const ::java::nio::file::Path &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(PathMatcher);
      extern PyTypeObject *PY_TYPE(PathMatcher);

      class t_PathMatcher {
      public:
        PyObject_HEAD
        PathMatcher object;
        static PyObject *wrap_Object(const PathMatcher&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
