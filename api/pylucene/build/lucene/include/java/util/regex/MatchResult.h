#ifndef java_util_regex_MatchResult_H
#define java_util_regex_MatchResult_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace regex {

      class MatchResult : public ::java::lang::Object {
       public:
        enum {
          mid_end_9972fcc56b44e79d,
          mid_end_1e143afe1894d213,
          mid_group_db9b55ba01e03e4b,
          mid_group_d7593acad64ef635,
          mid_groupCount_9972fcc56b44e79d,
          mid_start_9972fcc56b44e79d,
          mid_start_1e143afe1894d213,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MatchResult(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MatchResult(const MatchResult& obj) : ::java::lang::Object(obj) {}

        jint end() const;
        jint end(jint) const;
        ::java::lang::String group() const;
        ::java::lang::String group(jint) const;
        jint groupCount() const;
        jint start() const;
        jint start(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace regex {
      extern PyType_Def PY_TYPE_DEF(MatchResult);
      extern PyTypeObject *PY_TYPE(MatchResult);

      class t_MatchResult {
      public:
        PyObject_HEAD
        MatchResult object;
        static PyObject *wrap_Object(const MatchResult&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
